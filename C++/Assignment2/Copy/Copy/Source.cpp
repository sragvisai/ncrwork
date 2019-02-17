#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char *s;
	int len;
public:
		String()
		{
		cout << "in default" << endl;
		}
		String(const char *t)
		{
			len = strlen(t);
			s = (char *)malloc(sizeof(char)*(len + 1));
			strcpy_s(this->s, len+1, t);
		}
		String(String &str)
		{
			len = str.len;
			s = (char *)malloc(sizeof(char)*(len + 1));
			this->s = str.s;
		}
		String operator=(String str)
		{
			len = str.len;
			s = (char *)malloc(sizeof(char)*(len + 1));
			strcpy_s(s, len+1,str.s );
			return *this;
		}
		void show()
		{
			cout << s << endl;
		}
		
};
void main()
{
	String s1("Hello");
	String s2("World");
	String s3(s2);
	String s4;
	s4 = s1;
	s3.show();
	s1.show();
	system("pause");
}