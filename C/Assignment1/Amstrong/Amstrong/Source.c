#include<stdio.h>
#include<math.h>
void main()
{
	int num,c=0,temp,rem=0,sum=0,num2;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	temp = num;
	num2 = num;
	while (num > 0)
	{
		c++;
		num = num / 10;
	}
	while (temp > 0)
	{
		rem = temp % 10;
		sum = sum + pow(rem, c);
		temp = temp / 10;
	}
	if (num2 == sum)
		printf("YEs");
	else
		printf("No");
	getch();
}