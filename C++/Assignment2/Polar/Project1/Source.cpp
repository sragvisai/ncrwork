#include<iostream>
using namespace std;
class Polar {
	int a, r;
public:
	static int count;

	Polar(int an, int b)
	{
		a = an;
		r = b;
		count++;
	}
	static void increment()
	{
		count++;

	}
	~Polar()
	{
		count--;
	}
};
 int Polar ::count;
void main()
{
	Polar p1(2, 3);
	Polar p2(3, 4);
	cout << "Active mem" << endl << p2.count;

}