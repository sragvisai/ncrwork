#include<stdio.h>

void change(num, b)
{
	num = num >> b;
	printf("%d", num);
}
void main()
{
	int num,len,i=0,b;
	printf("Enter the number\n");
	scanf_s("%d", &num);
	printf("Enter the no.of bits\n");
	scanf_s("%d", &b);
	
	change(num, b);
	getch();
}