#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class student {
public:
	char studentname[50], cog[15];
	float marks1, marks2, marks3, avg;
	int grade;
};
class college_course{
	
public:
	student st;
	void set_data(const char *s,int g,float m1, float m2,float m3)
	{
		strcpy_s(st.studentname, 50,s);
		st.grade = g;
		st.marks1 = m1;
		st.marks2 = m2;
		st.marks3 = m3;

	}
	void calculate_avg()
	{
		st.avg = (st.marks1 + st.marks2 +st. marks3) / 3;
	}
	void computegrade()
	{
		if (st.avg > 60)
			strcpy_s(st.cog, 15, "first class");
		else if (50 <st.avg < 60)
			strcpy_s(st.cog, 15, "second class");
		else if (40 < st.avg < 50)
			strcpy_s(st.cog, 15, "third class");
		else if (st.marks1 < 40 ||st.marks2 < 40 ||st.marks3 < 40)
			strcpy_s(st.cog, 15, "fail");
	}
	void display()
	{
		cout << "name    :" << st.studentname << endl;
		cout << "marks1=" << st.marks1 << "   marks2=" << st.marks2 << "  marks3=" << st.marks3 << endl;
		cout << "avg    :" <<st.avg << endl;
		cout << "assigned  :" << st.cog;
	}

};
void main()
{
	college_course c;
	c.set_data("mamba", 2, 90, 90, 90);
	c.calculate_avg();
	c.computegrade();
	c.display();
	getchar();
}
