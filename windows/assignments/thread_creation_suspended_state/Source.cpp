#include<iostream>
#include<Windows.h>
using namespace std;
DWORD WINAPI threadexe(LPVOID lp)
{	
	cout << "Entered the thread handle function and the passed value is---" << *(int*)lp << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	return 0;
}
void main()
{
	int num = 3; DWORD value;
	/*HANDLE CreateThread(
		LPSECURITY_ATTRIBUTES   lpThreadAttributes,
		SIZE_T                  dwStackSize,
		LPTHREAD_START_ROUTINE  lpStartAddress,
		__drv_aliasesMem LPVOID lpParameter,
		DWORD                   dwCreationFlags,
		LPDWORD                 lpThreadId
	);*/
	/*DWORD ResumeThread(
		HANDLE hThread
	);*/
	HANDLE thread_handle;
	thread_handle =CreateThread(NULL, 0, threadexe, &num, CREATE_SUSPENDED, NULL);
	//cout << thread_handle << endl;
	Sleep(5000);
	cout << "Thread is in the suspended state lets call the resume function now" << endl;
	value=ResumeThread(thread_handle);
	if (value == -1)
	{
		cout << "There is been an error here with the code---" << GetLastError() << endl;
	}
	CloseHandle(thread_handle);
	getchar();

}