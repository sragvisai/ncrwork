#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void complement(x)
{
	int i = 0, j = 0, num = 0, len = 0, sum = 0;
	num = (int)x;
	len = log2(num);
	len++;
	int *bin = (int *)malloc(sizeof(int)*len);
	i = len - 1;
	while (num > 0)
	{
		bin[i] = num % 2;
		num = num / 2;
		i--;
	}
	for (i = 0; i < len; i++)
	{
		if (bin[i] == 1)
			bin[i] = 0;
		else
			bin[i] = 1;
	}
	for(i=0;i<len;i++)
	printf("%d",bin[i]);
	printf("\n");
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		sum = sum + (bin[i] * pow(2, j));
	}
	printf("%x\n", sum);
}
void shift(x)
{
int d=(int)x;
int b,ch;
printf("Enter the number of bits\n");
scanf("%d",&b);
printf("Enter the choice 1.Right shift\n 2.Left shift\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:x=x>>b;
			printf("After shifting %x \n",x);
			break;
	case 2:x=x<<b;
			printf("After shifting %x\n",x);
			break;
	default:
		break;
}
}
void masking(x)
{	int ch,d;
	printf("Enter the choice\n");
	scanf("%d",&ch);
	printf("Enter the hexadecimal number\n");
	scanf("%d",&d);
	switch(ch)
	{
		case 1: printf("%x",x||d);
				break;
		case 2: printf("%x",x&d);
				break;
		case 3: printf("%x",x^d);
				break;
		default:break;
	}
}
void main()
{
	int x, d = 0;
	int ch;
	printf("Enter the hexadecimal number\n");
	scanf_s("%X", &x);
	
	d = (int)x;
	printf("CHOOSE A.1's complement\n B.Masking operation\n C.Carry a bit shift\n D.Exit\n");
	scanf_s("%d", &ch);
	//printf("hey\n");
	switch (ch)
	{
	case 1: complement(x);
			break;
	case 2:masking(x);
			break;
	case 3:shift(x);
			break;
	case 4: exit;
		break;
	default:
		break;
	}
}
