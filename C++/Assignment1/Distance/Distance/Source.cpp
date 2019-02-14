#include<iostream>
using namespace std;
class Distance2;
class Distance1
{
	float dis_m;
public:
	void get_dis()
	{
		cout << "Enter the distance" << endl;
		cin >> dis_m;
	}
	friend void add_dis(Distance1 d1, Distance2 d2);
};
class Distance2 {
	float dis_f;
public:
	void get_disc()
	{
		cout << "Enter the distance in meters format" << endl;
		cin >> dis_f;
	}
	friend void add_dis(Distance1 d1, Distance2 d2);
};
void add_dis(Distance1 d1, Distance2 d2)
{
	int ch,dec;
	float sum,afp;
	cout << "Enter the choice" << endl;
	cin >>ch;
	switch (ch)
	{
	case 1:cout << "Getting the result in meters and cm" << endl;//1 feet =30.48cmn
		 dec = (int)d2.dis_f;
		 afp = d2.dis_f - dec;
		sum = (((dec*30.48) + (afp*2.54)) / 100) + d1.dis_m;
		Distance1 d3;
		d3.dis_m = sum;
		cout << sum << endl;
		break;

	case 2:cout << "Getting the result in feet and inches" << endl;
		 dec = (int)d1.dis_m;
		 afp = d1.dis_m - dec;
		sum = ((dec*3.2*2.5) + (afp*2.5)) / 12;
		Distance2 d4;
		d4.dis_f = sum;
		cout << sum << endl;
		break;

	default:
		break;
	}

}
void main()
{
	Distance1 d1;
	Distance2 d2;
	d1.get_dis();
	d2.get_disc();
	add_dis(d1, d2);
	getchar();
}