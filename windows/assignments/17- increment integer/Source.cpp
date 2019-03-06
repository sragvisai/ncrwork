#include<iostream>
#include<Windows.h>
using namespace std;
DWORD WINAPI threadexe(LPVOID lp)
{
	(*(int *)lp)++;
	return (*(int *)lp);
}
void main()
{
	int i_data =32, data = 32;
	HANDLE thread1, thread2;
	thread1 = CreateThread(NULL, 0, threadexe, &data, 0, NULL);
	thread2 = CreateThread(NULL, 0, threadexe, &data, 0, NULL);
	if (thread1 != NULL && thread2!=NULL)
	{
		cout << "The first thread has been created" << endl;
	}
	cout << "After 2 increments" << data<<endl;
	if (i_data + 1 == data)
		cout << "Threads are inconsistent" << endl;
	system("pause");
}