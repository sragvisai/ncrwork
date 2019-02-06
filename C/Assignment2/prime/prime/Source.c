#include<stdio.h>
#include<stdlib.h>
int main()
{
	int l = 0, h = 0, i = 0, j = 0, flag = 0;
	printf("Enter the range\n");
	scanf_s("%d%d", &l, &h);
	for (i = l; i <= h; i++)
	{
		flag = 0;
		j = 2;
		while (j < i / 2)
		{
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0 && i >= 2)
			printf("%d ", i);
	}
	getch();
	return 0;
}