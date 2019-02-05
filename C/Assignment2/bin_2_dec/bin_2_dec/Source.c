#include<stdio.h>
#include<string.h>
#include<math.h>
void bin2dec()
{
	int num=0,len=0,i=0,j=0;
	char ch[20];
	printf("Enter the binary\n");
	scanf_s("%s", ch);
	len = strlen(ch);
	for (i = len - 1,j=0; i >= 0; i--,j++)
	{
		num = num + ch[i] * pow(2, j);
	}
	printf("%d", num);
}
void dec2bin()
{
	int num, len = 0, i = 0;
	printf("Enter the number");
	scanf_s("%d", &num);
	len = log2(num);
	len++;
	int *bin = (int *)malloc(sizeof(int)*len);
	for (i = len - 1; i >= 0; i--)
	{
		bin[i] = num % 2;
		num = num / 2;
	}
	for (i = 0; i < len; i++)
		printf("%d", bin[i]);
}
void main()
{
	char ch;
	printf("Enter the choice\n");
	scanf_s("%c", &ch);
	switch (ch) {
	case 'A':dec2bin();
		break;
	case 'B':bin2dec();
		break;
	default:
		break;
	}
	getch();
}