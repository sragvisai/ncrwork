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
	friend Complex add_complex(Complex c1, Complex c2);
	friend Complex mul_complex(Complex c1, Complex c2);
};
Complex add_complex(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;

}
Complex  mul_complex(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real*c2.real;
	temp.img = c1.img*c2.img;
	return temp;
}
int main()
{
	float c2_rel, c2_img, c1_both;
	cout << "Enter the value for c1 for a single parameter" << endl;
	cin >> c1_both;
	cout << "Enter the values for real part and imaginary part of c2" << endl;
	cin >> c2_rel >> c2_img;
	Complex c1(c1_both);
	Complex c2(c2_rel, c2_img);
	Complex c3 = add_complex(c1, c2);;
	cout << "ADDITION---Real part--" << c3.real << "Imaginary part--" << c3.img << endl;
	Complex c4 = mul_complex(c1, c2);
	cout << "Multiplication---Real part--" << c4.real << "Imaginary part--" << c4.img << endl;
	system("pause");
	return 0;
}