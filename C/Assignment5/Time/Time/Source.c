#include<stdio.h>
struct Time
{
	int hours;
	int seconds;
	int min;
};
void main() {
	struct Time t;
	t.hours = 23;
	t.min = 3;
	t.seconds = 45;
	printf("%d:%d:%d\n", t.hours, t.min, t.seconds);
	getch();
}