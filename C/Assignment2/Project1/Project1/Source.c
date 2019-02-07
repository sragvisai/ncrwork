#include<stdio.h>
int fact(num)
{
	if (num == 0)
		return 1;
	else
		return (fact(num - 1)*num);
}
void main()
{
	int num = 0, f = 0;
	printf("Enter thr number\n");
	scanf_s("%d", &num);
	f = fact(num);
	printf("%d\n", f);
	getch();
}