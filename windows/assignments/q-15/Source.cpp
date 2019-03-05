#include<iostream>
#include<Windows.h>
using namespace std;
void main(int argc, char *argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	if (CreateProcess(NULL, argv[1], NULL, NULL, FALSE, HIGH_PRIORITY_CLASS, NULL, NULL, &si, &pi))
	{
		cout << "The process has been successfully created\n";
		
		/*BOOL SetPriorityClass(
			HANDLE hProcess,
			DWORD  dwPriorityClass
		);*/
		cout << "The priority of the process before setting\n" << GetPriorityClass(pi.hProcess) << endl;
		if (SetPriorityClass(pi.hProcess, BELOW_NORMAL_PRIORITY_CLASS))
		{
			cout << "The priority has been changed" << endl;
			cout << "The priority of the process after setting\n" << GetPriorityClass(pi.hProcess) << endl;

		}
		else
			cout << "There is an error in changing the priority" << endl;

	}
}