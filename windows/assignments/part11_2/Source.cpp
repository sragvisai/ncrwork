#include<iostream>
#include<windows.h>
using namespace std;
void main(int argc, TCHAR *argv[])
{
	cout << (HANDLE)argv[0] << endl;
	HANDLE hfile =(HANDLE)* argv[0];
	cout << hfile << endl;
	CloseHandle(hfile);
	system("pause");
}