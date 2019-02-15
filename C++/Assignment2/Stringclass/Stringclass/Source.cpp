#include<iostream>
using namespace std;
class String
{
	int len;
	char *s;
public:
	String()
	{
		len = 0;
		cout << "in the default constructor" << endl;
	}
	String(char *t, int l)
	{
		len = l;
		s = (char *)malloc(sizeof(char)*(l + 1));
		strcpy(s, t);
	}
	~String()
	{
		cout <<"Destructor" << endl;
	}
};
