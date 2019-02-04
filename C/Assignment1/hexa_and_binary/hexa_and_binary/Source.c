#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void binary(n)
{
	int i, len;
	len = log2(n);
	len++;
	char *bin = (char *)malloc(sizeof(char)*len);
	i = len - 1;
	while (n > 0)
	{
		if (n % 2 == 0)
			bin[i] = '0';
		else
			bin[i] = '1';
		i--;
		n = n / 2;
	}
	for (i = 0; i < len; i++)
	{
		printf("%c", bin[i]);
	}
}
void hexa(n)
{
	char c[100];
	int rem, i = 0, j = 0;
	while (n > 0)
	{
		rem = 0;
		rem = n % 16;
		if (rem < 10)
			c[i] = rem + 48;
		else
			c[i] = rem + 55;
		i++;
		n = n / 16;
	}
	printf("\n");
	for (j = i - 1; j >= 0; j--)
		printf("%c", c[j]);
}
void main()
{
	int n;
	printf("Enter the number\n");
	scanf_s("%d", &n);
	binary(n);
	hexa(n);
	getch();
}