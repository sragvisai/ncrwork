#include<iostream>
#include<windows.h>
#define size 100
using namespace std;
void main()
{	
	 LPCWSTR src = "%PATH%";
	DWORD dest_size;
	LPWSTR expanded[size];
	LPWSTR exp;
	BOOL valid;
	valid=ExpandEnvironmentStrings(
		src,//LPCSTR lpSrc,
		exp,//LPSTR  lpDest,
		size//DWORD  dwSize
	);
	if (valid == 0)
	{
		cout << "Error" << endl;
	}
	else
	{
		wcout << "The required op" << exp << endl;
	}
}