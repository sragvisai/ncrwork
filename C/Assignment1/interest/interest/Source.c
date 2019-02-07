#include<stdio.h>
#include<math.h>
void main()
{
	int amt = 500000, t = 10, n[] = { 1,2,4,12,365 },i=0;
	float rate = 0, si = 0;
	float ai = 0;
	printf("Enter the rate\n");
	scanf_s("%f", &rate);
	si = amt*t*(rate / 100);
	printf("The SI %f", si);
	rate = rate / 100;
	printf("/n");
	for (i = 0; i < 5; i++)
	{
		ai = 0;
		si = pow((1 + rate / n[i]),(n[i]*t));
		ai = si*amt;
			printf(" When compounded %d time a year %f\n", n[i], ai);
	}
	getch();
}