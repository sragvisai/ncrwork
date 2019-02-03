#include<stdio.h>
void main()
{
	int i, j, lines,z,l=0,m=0,t=0;
	//printf("Enter the number of lines");
	//scanf_s("%d", &lines);
	lines = 5;
	printf("\n");
	for (j = 1; j <= lines; j++)
	{
		for (i = lines; i >= j; i--)
		{
			printf(" ");
		}
		l++;
		m++;
		for(z=l;z>=1&l<=lines;z--)
		printf("%d", z);
		for (t = 2; t<= m& m <=lines; t++)
		printf("%d", t);
		printf("\n");
	}
	getch();
}