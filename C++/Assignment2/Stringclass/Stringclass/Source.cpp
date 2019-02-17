#include<iostream>
#include<string.h>
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
		strcpy_s(s,l+1, t);
	}
	String(char *t)
	{
		len = strlen(t);
		s = (char*)malloc(sizeof(char)*(len + 1));
		strcpy_s(s, len+1, t);
	}
	~String()
	{
		cout <<"Destructor" << endl;
	}
	String operator+(String str)
	{
		String temp;
		temp.len = len + str.len;
		cout << temp.len;
		temp.s = (char *)malloc(sizeof(char)*((temp.len) + 1));
		strcpy_s(temp.s, temp.len, s);
		strcat_s(temp.s, temp.len, str.s);
		cout << "after the step";
		return temp;
	}
	friend ostream &operator<<(ostream &cout, String str);
	friend istream &operator>>(istream &cin, String str);

};
ostream &operator<<(ostream &cout, String str)
{
	cout << str.s << endl;
	return cout;
}
void main()
{
	String s1("hello");
	cout << s1;
	String s2("Wordl");
	String s3;
	s3 = s1 + s2;
	cout << s3 << endl;
	getchar();
}
