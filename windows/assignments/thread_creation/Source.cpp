#include<iostream>
#include<Windows.h>
using namespace std;
DWORD WINAPI threadexe(LPVOID lparam)
{
	cout << "In here the execution" << endl;
	cout << "Data passed" << *((int*)lparam) << endl;
	return 0;
}
void main()
{
	int num = 3;
	/*HANDLE CreateThread(
		LPSECURITY_ATTRIBUTES   lpThreadAttributes,
		SIZE_T                  dwStackSize,
		LPTHREAD_START_ROUTINE  lpStartAddress,
		__drv_aliasesMem LPVOID lpParameter,
		DWORD                   dwCreationFlags,
		LPDWORD                 lpThreadId
	);*/

	HANDLE thread;
	thread = CreateThread(NULL, 0, threadexe, &num, 0, NULL);
	if (thread == NULL)
		cout << "not created" << endl;
	else
		cout << "Creation successfully" << endl;
	CloseHandle(thread);
	system("pause");
}