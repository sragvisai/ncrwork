#include<iostream>
using namespace std;
class  Complex
{
public:
	float img;
	float real;
public:
	Complex()
	{
		real = 0;
		img = 0;
	}
	Complex(float n)
	{
		real = img = n;
	}
	Complex(float i, float j)
	{
		real = i;
		img = j;
	}
	friend void add_complex(Complex c1, Complex c2);
	friend void mul_complex(Complex c1, Complex c2);
};
	 void add_complex(Complex c1, Complex c2)
	{
		c1.real = c1.real + c2.real;
		c1.img = c1.img + c2.img;
		cout << "Addition:" << c1.real << "-" << c1.img << endl;;
	}
	 void  mul_complex(Complex c1, Complex c2)
	{
		c1.real = c1.real*c2.real;
		c1.img= c1.img*c2.img;
		cout << "Multiplication:" << c1.real <<"-"<< c1.img;
	}
int main()
{
	Complex c1(23);
	Complex c2(21, 23);
	Complex c3;
	add_complex(c1, c2);
	mul_complex(c1, c2);
	getchar();
	return 0;
}