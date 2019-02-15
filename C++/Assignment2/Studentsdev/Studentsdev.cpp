#include<iostream>
using namespace std;
class Student
{
	int rollno,m1,m2,total;
	char grade, name[50];
	
public:
	Student()
	{
		total=0;
	}
	friend ostream& operator<<(ostream &cout, Student s);
	friend istream& operator>>(istream &cin, Student &s);
	friend void calculate(Student *s,int n);
};
ostream &operator<<(ostream &cout, Student s)
{	cout<<" the rollno"<<endl;
	cout << s.rollno << endl;;
	cout<<"the marks"<<endl;
	cout << s.m1 << endl;
	cout << s.m2 << endl;
	cout<<"The total"<<endl;
	cout << s.total << endl;
	cout<<"The grade"<<endl;
	cout << s.grade << endl;
	cout<<"the name"<<endl;
	cout << s.name << endl;
	return (cout);
}
istream& operator >> (istream &cin, Student &s)
{	
	cout<<"enter the rollno\n";
	cin >> s.rollno;
	cout<<"enter the name\n";
	cin>>s.name;
	cout<<"Enter the marks\n";
	cin >> s.m1>>s.m2;	
	return (cin);
}
void calculate(Student *s,int n)
{	int i=0;
	for(i=0;i<n;i++)
	{
		s[i].total=s[i].m1+s[i].m2;
	if(s[i].total>=90)
	s[i].grade='A';
	else
	s[i].grade='B';
	}

}
int main()
{
//	Student s1;
	Student s2[2];
//	cin >> s1;
	cin>>s2[0];
	cin>>s2[1];
	calculate(s2,2);

//	cout << s1;
	cout<<s2[0];
	cout<<s2[1];
	return 0;

}
