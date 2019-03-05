#include<iostream>
#include<Windows.h>
using namespace std;
DWORD WINAPI threadexe(LPVOID lp)
{
	cout << "In the thread executable function" << endl;
	return 0;
}
void main()
{
	int num = 3;
	HANDLE thread;
	thread = CreateThread(NULL, 0, threadexe, &num, THREAD_PRIORITY_LOWEST, NULL);
	if (thread == NULL)
		cout << "not created\n";
	else {
		cout << "Creation successfull\n";
		cout << "priority of thread" << GetPriorityClass(thread);
		Sleep(10000);
	}
	CloseHandle(thread);
	system("pause");

}