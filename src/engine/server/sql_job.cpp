#include "sql_job.h"

CSqlJob::~CSqlJob()
{
	
}

void CSqlJob::StartReadOnly()
{
	Start(true);
}

void CSqlJob::Start(bool ReadOnly)
{
	m_ReadOnly = ReadOnly;
	
	void *registerThread = thread_init(CSqlJob::Exec, this);
	thread_detach(registerThread);
}
	
void CSqlJob::Exec(void* pData)
{
	CSqlJob* pSelf = (CSqlJob*) pData;
	CSqlConnector connector;

	bool Success = false;

	// try to connect to a working databaseserver
	while (!Success && !connector.MaxTriesReached(pSelf->m_ReadOnly) && connector.ConnectSqlServer(pSelf->m_ReadOnly))
	{
		if(pSelf->Job(connector.SqlServer()))
			Success = true;

		// disconnect from databaseserver
		connector.SqlServer()->Disconnect();
	}
	
	delete pSelf;
}