#include<iostream>
#include<cstdlib>
using namespace std;
class Emp
{
	int id;
	char name[50];
public:
	Emp()
	{
		cout << "In the default constructor" << endl;
	}
	Emp(int i, char name[50] = "default")
	{
		id = i;
		cout << "name has a default value\n";
		cout << "id=" << id << endl;
		cout << "name=" << name << endl;
	}
	Emp(Emp &e1)
	{	
		id=e1.id;
		cout << "MOdifited its id" << endl<<id;
	}
	~Emp()
	{
		cout << "In the destructor" << endl;
	}
	void showid()
	{
		cout << id << endl;
	}

};
void main()
{
	Emp e1;
	Emp e2(3);
	Emp e3(4, "sai");
	Emp e4(e3);
	e4.showid();
	cout << "the size of e1" << sizeof(e1) << endl;
	system("pause");
}