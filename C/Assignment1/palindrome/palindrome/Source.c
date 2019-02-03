#include<stdio.h>
void main()
{
	int num, numrev=0,rem=0,nums=0;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	nums = num;
	while (num > 0)
	{
		rem = num % 10;
		numrev = (numrev*10) + rem;
		num = num / 10;
	}
	if (nums== numrev)
		printf("YES");
	else
		printf("No");
	getch();
}