#include<iostream>
using namespace std;
class Student
{
	int rollno=0,m1=0,m2=0,total=0;
	char grade, name[50];
	
public:
	Student()
	{
	}
	friend ostream& operator<<(ostream &cout, Student s);
	friend istream& operator>>(istream &cin, Student &s);
};
ostream &operator<<(ostream &cout, Student s)
{
	cout << s.rollno << endl;;
	cout << s.m1 << endl;
	cout << s.m2 << endl;
	cout << s.total << endl;
	cout << s.grade << endl;
	cout << s.name << endl;
	return (cout);
}
istream& operator >> (istream &cin, Student &s)
{
	cin >> s.rollno;
	cin >> s.m1;	
	cin >> s.m2;
	cin >> s.total;
	cin >> s.grade ;
	cin >> s.name;
	return (cin);
}
void main()
{
	Student s1;
	Student s2[3];
	cin >> s1;
	cout << s1;
	cin >> s2[0];
	cin >> s2[1];
	cin >> s2[2];

}