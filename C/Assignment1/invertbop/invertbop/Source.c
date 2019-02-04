#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int shiftbop(n, b, p)
{
	int len, rem = 0, i = 0,sum=0,bc=0,j=0;
	len = log2(n);
	len++;
	int *bin = (int *)malloc(sizeof(int)*len);
	i = len-1;
	while (n > 0)
	{
		bin[i] = n % 2;
		i--;
		n = n / 2;
	}
	printf("\n");
	
	for (i = 0; i < len; i++)
	{
		printf("%d", bin[i]);
	}
	
	for (i = p-1; bc<b; i++,bc++)
	{	
		//printf("%d", bc);
		//printf("%d", b);
		if (bin[i] == 1)
			bin[i] = 0;
		else if (bin[i] == 0)
			bin[i] = 1;

	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d", bin[i]);
	}
	for (i = len-1,j=0; i >=0; i--,j++)
	{
		rem = bin[i];
		sum = sum + (rem*pow(2, j));
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
	getch();
}