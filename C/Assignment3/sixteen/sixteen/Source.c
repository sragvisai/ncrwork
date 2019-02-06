

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
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		sum = sum + (bin[i] * pow(2, j));
	}
	printf("%X", sum);
	printf("%x", ~num);
}
void main()
{
	int x, d = 0;
	char ch;
	printf("Enter the hexadecimal number\n");
	scanf_s("%X", &x);
	d = (int)x;
	printf("CHOOSE A.1's complement\n B.Masking operation\n C.Carry a bit shift\n D.Exit\n");
	scanf_s("%c", &ch);
	switch (ch)
	{
	case 'A': complement(x);
		break;
	case 'B':masking(x);
		break;
	case 'C':shif(x);
		break;
	case 'D': exit;
		break;
	default:
		break;
	}
}