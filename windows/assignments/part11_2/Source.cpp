#include<iostream>
#include<windows.h>
using namespace std;
void main(int argc, TCHAR *argv[])
{
	DWORD ip_size;
	const char *input;
	HANDLE hfile = argv[0];
	int size;
	LPDWORD ip_ptr = &ip_size;
	cout << "handle=" << hfile << endl;
	cout << "HEllo there" << endl;
	cout << "Enter the size of the string that is to be written" << endl;
	cin >> size;
	input = new char[6];
	input = "hello";
	/*cout << "Enter the string that is to be written" << endl;
	cin >> input;*/
	if (WriteFile(hfile, input, size, ip_ptr, NULL))
	{
		cout << "Successfully written" << endl;
	}
	else
	{
		cout << "Error in writing" << endl;
	}
	CloseHandle(hfile);
	system("pause");
}