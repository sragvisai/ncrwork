#include<iostream>
#include<Windows.h>
using namespace std;
void main(int argc, char *argv[]) {
	HANDLE getevent;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	SECURITY_ATTRIBUTES sec_ptr;
	ZeroMemory(&si, sizeof(si));
	sec_ptr.bInheritHandle = TRUE;// setting true in order to inherit
	sec_ptr.lpSecurityDescriptor = NULL;
	sec_ptr.nLength = sizeof(SECURITY_ATTRIBUTES);
	//Creation of an event
	getevent = CreateEventA(&sec_ptr, FALSE, TRUE, "Created an event");
	if (getevent == NULL)
	{
		cout << "There is an error" << endl;
		cout << "The error code is" << GetLastError() << endl;
		

	}
	else
	{
		cout << "Created the event\n";
		cout << "handle=" << getevent << endl;
		
		
	}
	//inheritance of the event created
	if (CreateProcessA(NULL, argv[1], NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi))
	{	
		cout << "Inherited" << endl;
		cout << "Handle=" <<getevent<< endl;

	}
	else 
	{
		cout << "error in the process creation" << endl;
		cout << "error code is " << GetLastError();
	}
	system("pause");
}