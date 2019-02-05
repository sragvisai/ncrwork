#include<stdio.h>
#include<math.h>
void main()
{
	int num=0,len=0,b=0,i=0,rem=0,sum=0;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	len = log(num)/log(10);
	printf("Enter the no.of bits\n");
	scanf_s("%d", &b);
	while (i < b)
	{	
		sum = 0;
		rem = num % 10;
		num = num / 10;
		sum = rem*pow(10, len);
		sum += num;
		num = sum;
		i++;
	}
	printf("%d", sum);
	getch();
}