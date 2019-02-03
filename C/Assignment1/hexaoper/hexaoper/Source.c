#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int len = 0;
void length(v)
{
	len =log2f(v);
}
void main()
{
	int val = 0xCAFE, v,i=0,c=0,j,sum=0,temp[4],sumrev=0;
	printf("%X\n", val);
	v = (int)val;
	length(v);
	len++;
	int *bin= malloc(sizeof(int)*len);
	int *binrev = malloc(sizeof(int)*len);
	int *bin2 = malloc(sizeof(int)*len);
	//printf("%d\n", v);
	//printf("%d\n", len);
	while (v>0)
	{
		if (v % 2 == 0)
			bin[i] = 0;
		else if (v % 2 == 1)
			bin[i] = 1;
		v = v / 2;
		i++;
	}
	for (j = 0; j <= 3; j++)
		if (bin[j] == 1)
			c++;
	if (c >= 3)
		printf("Yes\n");
	else
		printf("No\n");
	j = 0;
	for (i = 0; i < len; i++)
		bin2[i] = bin[i];
	for (i = len / 2; i < len; i++, j++)
		binrev[j] = bin[i];
	for (i = 0; i <= len / 2; i++,j++)
		binrev[j] = bin[i];
	for (i = 0; i < len; i++)
		printf("%d", binrev[i]);
	printf("\n");
	for (i = 0; i < len; i++)
		printf("%d", bin[i]);
	for (i = 0; i < len; i++)
		sum = sum + (binrev[i] * pow(2, i));
	
	for (i = 0; i < 4; i++)
	{
		temp[i] = bin2[i];
	}
	for (i = 0,j=len-1; i < 4; i++,j--)
	{
		bin2[i] = bin2[j];
	}
	for (i = len - 1, j = 3; j >=0; i--, j--)
		bin2[i] = temp[j];
	printf("\n");
	for (i = 0; i < len; i++)
		printf("%d", bin2[i]);
	for (i = 0; i < len; i++)
		sumrev = sumrev + (bin2[i] * pow(2, i));
		printf("The hexa-decimal representation %X", sum);
		printf("The hexa-decimal representation %X", sumrev);
	getch();
}