#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int len = 0;
void lastfour(x)
{
	int b = 1,i=1,c=0;
	for (i = 1; i <= 4; i++)
	{
		if (x&b)
			c++;
		b=b << 1 ;
		
	}
	printf("\n");
	if (c >= 3)
		printf("yes C=%d\n",c);
	else
		printf("No C=%d\n",c);
}
void byteorder(x)
{
	int t =( (x << 8) | (x >> 8)) & 0XFFFF;
	printf("In function %x\n", t);

}
void fourbit(x)
{
	int m = (x >> 4 | x << 12) & 0XFFFF;
	printf("In function %x\n", m);
	
}
void length(v)
{
	len =log2f(v);
}
void main()
{
	int val = 0xCAFE;
	printf("%X\n", val);
	lastfour(val);
	byteorder(val);
	fourbit(val);
	getch();
}