#include<iostream>
#include<Windows.h>
using namespace std;
void main() {
	HANDLE getevent;
	getevent = CreateEventA(NULL, FALSE, TRUE, "Created an event");
	if (getevent == NULL)
	{
		cout << "There is an error" << endl;
		cout << "The error code is" << GetLastError() << endl;

	}
	else
	{
		cout << "Created the event";
	}
	system("pause");
}