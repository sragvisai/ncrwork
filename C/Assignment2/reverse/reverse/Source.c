#include<stdio.h>
void main()
{
	int num, rnum=0,rem;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	while (num > 0)
	{
		rem = num % 10;
		rnum = rnum * 10 + rem;
		num = num / 10;
	}
	printf("%d", rnum);
	getch();
}