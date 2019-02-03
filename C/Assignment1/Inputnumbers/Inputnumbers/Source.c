#include<stdio.h>
int input()
{
	int i = 0;
	printf("Enter the number\n");
	scanf_s("%d", &i);
	return i;
}

void main()
{
	int min = 0, max = 0, inp, c = 0, sum = 0;
	float avg;
	inp = input();
	min=inp;
	max=inp;
	c++;
while (inp > 0)
{
	if (inp > max)
	{
		max = inp;
	}
	else if (inp < min)
	{
		min = inp;
	}
	sum = sum + inp;
	c++;
	inp = input();
}
avg = (float)sum / (c - 1);
printf("Maximum value is %d\n", max);
printf("Minimum values is %d\n", min);
printf("The average is %f\n", avg);
getch();
}
