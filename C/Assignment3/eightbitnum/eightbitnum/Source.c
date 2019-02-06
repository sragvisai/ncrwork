#include<stdio.h>
void main()
{
	int num, c=0;
	printf("Enter the num in the range of 0 to 255\n");
	scanf_s("%d", &num);
	while (num > 0)
	{
		if (num % 2 == 1)
			c++;
		num = num / 2;
	}
	printf("%d", c);
	getch();
}	