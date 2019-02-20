#include<iostream>
#include<string.h>
#include<stdlib.h>
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
	String(char *t)
	{
		len = strlen(t);
		s = (char*)malloc(sizeof(char)*(len + 1));
		strcpy(s, t);
	}
	~String()
	{
		cout << "Destructor" << endl;
	}
	String operator+(String str)
	{
		String temp;
		temp.len = len + str.len;
		//cout << temp.len;
		temp.s = (char *)malloc(sizeof(char)*((temp.len) + 1));
		strcpy(temp.s, s);
		strcat(temp.s, str.s);
		cout << "after the step";
		return temp;
	}
	char &operator[](int n)
	{
		return (s[n]);
	}
	String operator=(String c)
	{
		len = c.len;
		s = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(s, c.s);
		return(*this);
	}
	friend ostream &operator<<(ostream &cout, String str);
	friend istream &operator>>(istream &cin, String &str);

};
ostream &operator<<(ostream &cout, String str)
{
	cout << str.s << endl;
	return cout;
}
istream &operator>>(istream &cin, String &str)
{
	cin >> str.len;
	str.s = (char *)malloc(sizeof(char)*(str.len + 1));
	cin >> str.s;
	return cin;

}
int main()
{
	String s1("hello");
	cout << s1;
	String s2("Wordl");
	String s3;
	String s4;
	String s5("copying");
	s3 = s1 + s2;
	cout << s3 << endl;
	cin >> s4;
	cout << s4 << endl;
	s3[2] = 'p';
	cout << s3 << endl;
	cout << s3[2] << endl;
	// Try this code for before overloading the assignment operator
	//This performs the shallow copying
	/*cout<<"shallow copying"<<endl;
	s1=s2;
	cout<<s1;
	s1[2]='z';
	cout<<s2;*/
	// Now, let's overload the assignment operator and try the deep copying
	s1 = s2;
	cout << s1 << endl;
	s1[2] = 'z';
	cout << s2 << endl;
	getchar();
	return 0;
}
