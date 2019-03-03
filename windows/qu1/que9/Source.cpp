#include<iostream>
#include<Windows.h>
using namespace std;
void main(int argc, TCHAR *argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	DWORD PROC_ID;
	if (CreateProcessA(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		cout << "Process created successfully" << endl;
		cout <<"CURRENT PROCESS ID= "<< GetCurrentProcessId() << endl;
		PROC_ID = GetProcessId(pi.hProcess);
		cout << "PROCESS HANDLE= " << PROC_ID << endl;
		cout << "Thread ID= " << GetThreadId(pi.hThread);
		cout << "Process Id of thread= " << GetProcessIdOfThread(pi.hThread) << endl;
	}
	else
	{
		cout << "There is an error with code" << GetLastError() << endl;
	}
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
	system("pause");

}