#include<stdio.h>
#include<Windows.h>
DWORD WINAPI threadexe(LPVOID lp)
{
	printf("In the thread\n");
	printf("Now lets get out of the thread\n");
	printf("the called thread id is %lu", GetCurrentThreadId());
	ExitThread(1);
	return 1;
}
void main()
{
	/*DWORD WaitForSingleObject(
		HANDLE hHandle,
		DWORD  dwMilliseconds
	);*/
	int num = 3;
	DWORD wait_obj;
	HANDLE thread;
	DWORD val =0;
	thread = CreateThread(NULL, 0, threadexe, &num, 0, NULL);
	if (thread == NULL)
		printf("not created\n");
	else {
		printf("Creation successfully\n");
		wait_obj = WaitForSingleObject(thread, 1000);
	}
	if (GetExitCodeThread(thread, &val))
	{
		printf("The exit status is ---- %lu", val);
	}
	else
		printf("there is an error in getting the code\n");
	system("pause");

}