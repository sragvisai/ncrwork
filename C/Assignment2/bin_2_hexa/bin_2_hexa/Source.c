#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void bin_hexa()
{
	char bin[100];
	int i = 0,sum=0,l=0,j=0;
	printf("Enter the binary\n");
	scanf_s("%s", bin);
	for (i = 0,j=l-1; i < strlen(bin); i++,j--)
	{
		sum = sum + (bin[j] * pow(2, i));
	}
	printf("%X", sum);
}
void hexa_bin()
{
	long int hex,dec;
	int i = 0, sum = 0, l = 0,len=0,j=0;
	printf("Enter the hexa number\n");
	scanf_s("%X", &hex);
	//printf("%x", hex);
	dec = (int)hex;
	//printf("\n");
	//printf("%d", hex);
	len = log2(dec);
	len++;
	printf("\n");
	//printf("%d", len);
	printf("\n");
	int *bin2 = (int *)malloc(sizeof(int)*len);
	j = len - 1;
	while (dec > 0 )
	{
		if (dec % 2 == 0)
			bin2[j] = 0;
		else
			bin2[j] = 1;
		j--;
		dec = dec / 2;
	}
	for (i = 0; i<len; i++)
		printf("%d", bin2[i]);
}
void main()
{
	char ch;
	printf("Enter the choice\n");
	scanf_s("%c", &ch);
	switch (ch)
	{
	case 'A': hexa_bin();
		break;
	case 'B': bin_hexa();
		break;
	default:
		break;
	}
	getch();
}