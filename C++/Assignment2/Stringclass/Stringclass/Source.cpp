//Define string class with dynamic memory allocation for string.Define default
//constructor, parameterized constructors, copy constructor, destructor, Overload + ,
//[], =, << , >> operators.Observe the behavior of shallow copying and deep copying.
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
		this->len = 0;
		cout << "in the default constructor" << endl;
	}
	String(char *t, int l)
	{
		cout << "here" << endl;
		cout << t;
		this->len = l;
		this->s = new char[l + 1];
		strcpy(s, t);
	}
	String(char *t)
	{
		len = strlen(t);
		this->s = new char[len + 1];
		strcpy(s, t);
	}
	
	String operator+(String str)
	{
		String temp;
		temp.len = len + str.len;
		temp.s = new char[temp.len + 1];
		strcpy(temp.s, s);
		strcat(temp.s, str.s);
		return temp;
	}
	char &operator[](int n)
	{
		return (s[n]);
	}
	/*String operator=(String c)
	{
		len = c.len;
		s = (char *)malloc(sizeof(char)*(len + 1));
		strcpy(s, c.s);
		return(*this);
	}*/
	~String()
	{
		//delete s;
		cout << "DES" << endl;
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
	int len_str = 0, pos = 0;
	char char_rep;
	//Passing a string and its length into the parameterized constructor

	cout << "Enter the length of the string to be taken" << endl;
	cin >> len_str;

	char *temp = (char *)malloc(sizeof(char)*(len_str + 1));
	if (temp == NULL)
	{
		cout << "Memory can't be allocated for the temp variable taken" << endl;
		return 0;
	}

	cout << "Enter the string" << endl;
	cin >> temp;
	cout << "\n\nPassing two values into a paramaeterized constructor\n";
	String str_two_param(temp, (len_str + 1));
	cout << "\n Printing the value here ----";
	cout << str_two_param;

	//Creating two instances and passing the values into single parameter constructor
	String str_hello("Hello");//taking one string as hello
	String str_world("World");//taking another string as world
	cout << "The taken strings are---" << str_hello << "-----" << str_world << endl;

	// Creating a string for using overloaded + operator
	String str_add;
	str_add = str_hello + str_world;
	cout << "The result of adding the strings--" << str_add << endl;

	// Choose a position in the string to return that value using [] operator
	cout << "Enter the position that is to be replaced in the string" << str_hello << endl;
	cin >> pos;
	cout << "Enter the character" << endl;
	cin >> char_rep;
	str_hello[pos] = char_rep;
	cout << "The string after the replacement--" << str_hello << endl;


	String cpy_string;

	/* Try this code for before overloading the assignment operator
	This performs the shallow copying*/
	cout << "shallow copying" << endl;
	cpy_string = str_world;
	cout << "After copying" << cpy_string;
	//Even changing the value of cpy_string will effect the values in str_world
	cpy_string[2] = 'z';
	cout << "After changing in cpy_string the value in str_world is ----" << str_world << endl;

	// Now, let's overload the assignment operator and try the deep copying

	/*cpy_string = str_world;
	cout << "After copying----" << cpy_string << endl;*/

	//deleting the allocated dynamic memory here
	delete temp;
	system("pause");
}