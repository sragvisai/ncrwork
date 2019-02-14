#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class Point
{
	int x, y;
public:
	void get_xy()
	{
		cout << "Enter the x and y co ordinates" << endl;
		cin >>x >> y;
	}
	friend double distance(Point, Point);
};
double distance(Point p1, Point p2)
{
	double x1, y1,dis;
	x1 = (p1.x - p2.x)*(p1.x - p2.x);
	y1 = (p1.y - p2.y)*(p1.y - p2.y);
	dis = sqrt(x1 + y1);
	return dis;
}
void main()
{
	double res;
	Point p1,p2;
	p1.get_xy();
	p2.get_xy();
	res=distance(p1, p2);
	cout << "Distance is " << res << endl;
	system("pause");
}