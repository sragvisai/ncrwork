#include<stdio.h>
void main()
{
	int d1=0,d2=0,m1=0,m2=0,y1=0,y2=0,diff=0;
	int i = 0;
	printf("Pls enter in from a lower range to higher range format\n");
	printf("The two days\n");
	scanf_s("%d%d", &d1, &d2);
	printf("The two months\n");
	scanf_s("%d%d", &m1, &m2);
	printf("The two years\n");
	scanf_s("%d%d", &y1, &y2);
	for (i = y1; i < y2; i++)
	{
		if (i % 4 == 0)
			diff = diff + (i * 366);
		else
			diff = diff + (i * 365);
	}
	for(i=m1;i<m2;i++)


}