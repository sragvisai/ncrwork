#include<stdio.h>
#include<stdlib.h>

struct MyStruct
{
	int i;
	char s;
};
union MyUnion
{
	int j;
	char t;
};
void main()
{
	printf("%d\n", sizeof(struct MyStruct));
	printf("%d\n", sizeof(union MyUnion));
	getch();
}