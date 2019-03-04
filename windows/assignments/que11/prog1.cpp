#include<iostream>
#include<Windows.h>
using namespace std;
void main(int argc , CHAR *argv[])
{
	HANDLE ptr_file;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	const char *src = "part11_2";
	ZeroMemory(&si, sizeof(si));
	ptr_file = CreateFileA("mytxt.txt", GENERIC_ALL, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (ptr_file == INVALID_HANDLE_VALUE)
	{
		cout << "There is an error in creating the file" << endl;
		cout << "The error code is ---" << GetLastError() << endl;
	}
	else
	{
		if (CreateProcessA("C:\\Users\\vishy\\source\\Repos\\sragvisai\\ncrwork\\windows\\assignments\\Debug\\part11_2.exe",LPSTR(&ptr_file), NULL, NULL,FALSE, 0, NULL, NULL, &si, &pi))
		{
			cout<<"The child process is successfull"<<endl;
			cout << "HANDLE HERE==" << ptr_file << endl;
		}
		else
		{
			cout<<"The child process has not been created and the error is--"<<GetLastError()<<endl;
			cout << argv[1] << endl;
		}
	}
	system("pause");

}