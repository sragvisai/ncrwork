#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int shiftbop(n, b, p)
{
	int len, rem = 0, i = 0,sum=0;
	len = log2(n);
	//len++;
	printf("Length is %d", len);
	int *bin = (int *)malloc(sizeof(int)*len);
	while (n > 0)
	{
		if (n % 2 == 0)
			bin[i] = 0;
		else if (n % 2 == 1)
			bin[i] = 1;
		i++;
		n = n / 10;
	}
	printf("\n");
	
	for (i = 0; i < len; i++)
	{
		printf("%d", bin[i]);
	}

	for (i = p; i <b; i++)
	{
		if (bin[i] == 1)
			bin[i] == 0;
		else if (bin[i] == 0)
			bin[i] == 1;

	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d", bin[i]);
	}
	for (i = 0; i < len; i++)
	{
		rem = bin[i];
		sum = sum + (rem*pow(2, i));
	}
	printf("\n");
	return sum;
}
void main()
{
	int n, p, b,c;
	printf("Enter the number , position and number of bits\n");
	scanf_s("%d", &n);
	scanf_s("%d", &p);
	scanf_s("%d", &b);
	c=shiftbop(n, b, p);
	printf("%d\n", c);
}