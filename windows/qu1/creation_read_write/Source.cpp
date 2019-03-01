#include<iostream>
#include<Windows.h>
#include<cstring>
#define BUFFER_SIZE 100
using namespace std;
void main()
{	
	char destbuff[BUFFER_SIZE],*input;
	handle_t hfile;
	DWORD num,ip_num;
	int ip_size = 0;
	LPDWORD ptr= &num;
	LPDWORD ip_ptr = &ip_num;
	hfile = CreateFileA("mytext.txt", GENERIC_ALL, 0, NULL, 3, FILE_ATTRIBUTE_NORMAL, NULL);
	//wcout << hfile << endl;
	if (hfile == INVALID_HANDLE_VALUE)
	{
		cout << "There is an error" << endl;
	}
	
	else
	{
		ZeroMemory(destbuff, BUFFER_SIZE);
		//cout << strlen(destbuff) << endl;
		if ((ReadFile(hfile, destbuff, BUFFER_SIZE, ptr, NULL))) //&& ptr)!=0)
		{	
			printf("%s", destbuff);
		}
		//cout << "ptr==" << *ptr << endl;
	}
	// WRITING IT INTO THE FILE
	cout << "Enter the size of the string that is to be written" << endl;
	cin >> ip_size;
	input = new char[ip_size];
	cout << "Enter the string that is to be written" << endl;
	cin >> input;
	if (WriteFile(hfile, input, ip_size, ip_ptr, NULL))
	{
		cout << "Successfully written" << endl;
	}
	else
	{
		cout<<"Error in writing"<<endl;
	}
	CloseHandle(hfile);
	system("pause");
}