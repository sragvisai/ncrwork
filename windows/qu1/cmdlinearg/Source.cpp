//#include <iostream>
//using namespace std;
//int main(int argc,      // Number of strings in array argv
//	char *argv[],   // Array of command-line argument strings
//	char *envp[])  // Array of environment variable strings
//{
//	int count;
//
//	// Display each command-line argument.
//	cout << "\nCommand-line arguments:\n";
//	for (count = 0; count < argc; count++)
//		cout << "  argv[" << count << "]   "
//		<< argv[count] << "\n";
//	getchar();
//}

#include<stdio.h>
#include<windows.h>
void main()
{
	int no_args,i=0;
	LPWSTR *getdata;
	getdata = CommandLineToArgvW(GetCommandLineW(), &no_args);
	if (getdata == NULL)
	{
		printf("Something is not right\n");
		DWORD error = GetLastError();
		printf("Error code is %d\n", error);
	}
	else
	{
		for (i = 0; i != no_args; i++)
		{
			wprintf(L"arg[%d]=%s\n\n", i, *getdata);
			getdata++;
		}
	}
	LocalFree(getdata);//frees the memory allocated to the args list

	getchar();
	
}
