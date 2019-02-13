#include<iostream>
using namespace std;
class Time
{
	int hours;
	int seconds;
	int minutes;
public:
	Time()
	{
		hours = 0;
		seconds = 0;
		minutes = 0;
	}
	Time(int h, int s, int m)
	{
		hours = h;
		seconds = s;
		minutes = m;
	}
	void display()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
	void add(Time t1, Time t2)
	{
		hours = t1.hours + t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
		if (seconds > 50)
		{
			minutes++;
			seconds = seconds - 60;
		}
		if (minutes > 60)
		{
			hours++;
			minutes = minutes - 60;

		}
		if (hours > 23)
		{
			hours = 00;
		}
	}
};
int main() {
	Time t1(12, 12, 12), t2(1, 2,59 );
	Time t3;
	t3.add(t1, t2);
	t1.display();
	t2.display();
	t3.display();
	getchar();
}