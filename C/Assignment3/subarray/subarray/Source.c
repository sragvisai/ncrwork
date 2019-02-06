#include<stdio.h>
#include<stdlib.h>
void main()
{
	
	int i = 0, flag = 0,sum=0,num=0,j=0,len=0;
	printf("Enter the  length of the array\n");
	scanf_s("%d", &len);
	len++;
	int *arr = (int *)malloc(sizeof(int)*len);
	for (i = 0; i < len; i++)
	{
		scanf_s("%d", arr + i);
	}
	printf("Enter the number\n");
	scanf_s("%d", &num);
	for (i = 0; i < len; i++)
	{	
		flag = 0;
		j = i;
		sum = 0;
		while (j<len && !(flag))
		{
			sum = sum + arr[j];
			
			if (num == sum)
			{
				flag = 1;
				break;
			}
			else
			{
				j++;

			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		printf("SUB ARRAY FOUND BETWEEN %d %d\n", i, j);
	else
		printf("not found\n");
	getch();
}