#include<iostream>
#include<windows.h>
#include<tchar.h>
#define size 100
using namespace std;
void main()
{
	LPCTSTR src ="%TEMP%";
	TCHAR expanded[size];
	LPWSTR exp;
	DWORD valid;
	valid = ExpandEnvironmentStrings(
		src,//LPCSTR lpSrc,
		expanded,//LPSTR  lpDest,
		size//DWORD  dwSize
	);
	if (valid == 0)
	{
		DWORD error = GetLastError();
		cout << "Error code " <<error<< endl;
	}
	else
	{
		wcout << "The required op" << expanded << endl;

	}
	getchar();
}