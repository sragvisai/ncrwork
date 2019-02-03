#include<stdio.h>
void main()
{
	int num,sum=0;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	while (num > 0)
	{
		sum = sum + (num % 10);
		num = num / 10;
	}
	printf("%d", sum);
	getch();
}