#include<stdio.h>
int result=0;
void main()
{
	int num1,num2,ch;
	printf("Enter the numbers\n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("ENTER THE CHOICE\n 1.add\n 2.sub\n 3.multiply\n 4.divide\n");
	scanf_s("%d", &ch);
	switch (ch)
	{
	case 1:add(num1, num2);
			break;
	case 2:sub(num1, num2);
			break;
	case 3:mul(num1, num2);
			break;
	case 4:div(num1, num2);
			break;
	
	}
	printf("%d", result);

}