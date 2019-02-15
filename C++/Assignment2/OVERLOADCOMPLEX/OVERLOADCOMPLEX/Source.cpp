#include<iostream>
using namespace std;
class Complex {
	float rel;
	float img;

public:
	Complex()
	{
		cout << "In the default" << endl;
	}
	Complex(float i, float j)
	{
		rel = i;
		img = j;
	}
	Complex(Complex &c)
	{
		rel = c.rel;
		img = c.img;
	}
	~Complex()
	{
		cout << "Destructor" << endl;
	}
	Complex operator+(Complex c)
	{
		Complex temp;
		temp.rel =rel + c.rel;
		temp.img = img + c.img;
		return temp;
	}
	Complex operator-(Complex c)
	{
		Complex temp;
		temp.rel = rel - c.rel;
		temp.img = img - c.img;
		return temp;
	}
	Complex operator-()
	{
		Complex temp;
		temp.rel = -(this->rel);
		temp.img = -(this->img);
		return temp;
	}
	Complex operator++()
	{
		++rel;
		++img;
		return(*this);
	}
	Complex operator++( int x)
	{
		Complex temp;
		temp.rel = rel++;
		temp.img = img++;
		return temp;
	}
	Complex operator+= (Complex &c)
	{
		rel = rel + c.rel;
		img = img + c.img;
		return(*this);
	}
	Complex operator,(Complex c)
	{
		return c;
	}
	Complex operator=(Complex c)
	{
		rel = c.rel;
		img = c.img;
		return (*this);
	}
	friend ostream &operator<<(ostream &cout, Complex c);

};
ostream &operator<<(ostream &cout, Complex c)
{
	cout << c.rel << endl;
	cout << c.img <<endl;
	return (cout);
}

void main()
{
	Complex c1;
	Complex c2(2.5, 3.5);
	Complex c3(c2);
	Complex c4;
	c1 = c2 + c3;
	cout << "Addition" << endl;
	cout << c1;
	c1 = c2 - c3;
	cout << "Subtraction" << endl;
	cout << c1;
	cout << "Unary minus" << endl;
	c1 = -c2;
	cout << c1;
	cout << "post increment" << endl;
	c4=c2++;
	cout << c4;
	cout << "pre increment" << endl;
	c4 = ++c2;
	cout << c4;
	cout << "+= operator" << endl;
	c1 += c2;
	cout << c1;
	cout << "Comma operator" << endl;
	c1 = c2, c3;
	cout << c1;
	c1 = (c2, c3);
	cout << c1;
	system("pause");
}