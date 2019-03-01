#include<windows.h>
#include<stdio.h>
void main()
{
	char *s = "hey";
	WCHAR *w = NULL;
	WCHAR *sw = L"hello";
	char *t = NULL;
	DWORD dw;
	int n = strlen(s);
	int q = wcslen(sw);
	int b = IsTextUnicode(s, sizeof(WCHAR)*q, NULL);
	if (b == 1)//testing the fuction
		wprintf(L"%s It is a unicode\n", sw);
	else
		wprintf(L"%s is not a unicode\n", sw);
	//conversion to wide char to multi byte
	int x = WideCharToMultiByte(CP_UTF8, 0, sw, -1, t, 0, NULL, NULL);//getting the length
	t = (char *)malloc(sizeof(char)*x);
	int x1=WideCharToMultiByte(CP_UTF8, 0, sw, -1, t, x, NULL, NULL);//setting the buffer length
	if (x1 == 0)
	{
		printf("There is an error in this conversion \n");
		DWORD dw = GetLastError();
		printf("Error code :%d\n", dw);
	}
	else
	{
		printf("Succesfully converted\n");
		printf("%s\n", t);
	}
	b = IsTextUnicode(s, sizeof(char)*n, NULL);
	if (b == 1)//testing the fuction
		printf("%s It is a unicode\n", s);
	else
		printf("%s is not a unicode\n", s);
	x = MultiByteToWideChar(CP_UTF8, 0, s, -1, w, NULL);
	w = (WCHAR*)malloc(sizeof(WCHAR)*x);
	x1= MultiByteToWideChar(CP_UTF8, 0, s, -1, w, x);
	if (x1 == 0)
	{
		printf("There is an error in this conversion \n");
		DWORD dw = GetLastError();
		printf("Error code :%d\n", dw);
	}
	else
	{
		
	printf("Succesfully converted\n");
	wprintf(L"%s\n", w);
	}
	getchar();
}