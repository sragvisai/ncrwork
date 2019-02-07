#include<stdio.h>
void main()
{
	int arr[5],num=0,i,j=0;
	printf("Enter number between the range 0 and 32\n");
	scanf_s("%d", &num);
	for (i = 4; i >= 0; i--)
		arr[i] = 0;
	for (i = 4;num>0; i--)
	{
		arr[i] = num % 2;
		num = num / 2;
	}
	i = 0;
	while (arr[i] != 1)
		i++;
	j = 0;
	while (i<=4)
	{
		printf("%d", arr[i]);
		i++;
	}
	getch();
}