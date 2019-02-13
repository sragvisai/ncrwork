#include<stdio.h>
struct MyStruct
{
	float real;
	float img;
};
void main()
{
	int ch,flag=0;
	struct MyStruct s1,s2;
	printf("Enter the values for the numbers\n");
	scanf_s("%f%f", &s1.real, &s1.img);
	scanf_s("%f%f", &s2.real, &s2.img);

	enum MyEnum
	{
		ADD, SUB,EX
	};
	do{

	printf("Enter the choice\n");
	scanf_s("%d", &ch);
		switch (ch)

		{
		case ADD:printf("ADDING \n");
				printf("%f-%f", (s1.real + s2.real), (s1.img + s2.img));
				break;
		case SUB:printf("SUB \n");
			printf("%f-%f", (s1.real - s2.real), (s1.img - s2.img));
				break;
		case EX:exit();
		default:flag == 1;
				break;
		}
	} while (flag == 0);
}