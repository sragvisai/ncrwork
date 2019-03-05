#include<iostream>
#include<Windows.h>
using namespace std;
void main()
{
	HANDLE ptr_file;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	SECURITY_ATTRIBUTES sec_ptr;
	ZeroMemory(&si, sizeof(si));
	sec_ptr.bInheritHandle = TRUE;// setting true in order to inherit
	sec_ptr.lpSecurityDescriptor = NULL;
	sec_ptr.nLength = sizeof(SECURITY_ATTRIBUTES);
	ptr_file = CreateFile("mytxt.txt", GENERIC_ALL, 0,&sec_ptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (ptr_file == INVALID_HANDLE_VALUE)
	{
		cout << "There is an error in creating the file" << endl;
		cout << "The error code is ---" << GetLastError() << endl;
	}
	else

	{
		cout << "before" << ptr_file << endl;
		TCHAR src[] = { TCHAR(ptr_file) };
		if (CreateProcessA("C:\\Users\\vishy\\source\\Repos\\sragvisai\\ncrwork\\windows\\assignments\\Debug\\part11_2.exe",src, &sec_ptr, NULL,TRUE, 0, NULL, NULL, &si, &pi))
		{
			cout<<"The child process is successfull"<<endl;
			cout << "HANDLE HERE==" << ptr_file << endl;
		}
		else
		{
			cout<<"The child process has not been created and the error is--"<<GetLastError()<<endl;
			//cout << argv[1] << endl;
		}
		CloseHandle(ptr_file);
	}
	system("pause");

}