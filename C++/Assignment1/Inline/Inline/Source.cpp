#include<iostream>
using namespace std;
inline int add(int a, int b) { return (a + b); }
inline int sub(int a, int b) { return (a - b); }
inline int mul(int a, int b) { return (a * b); }
inline int divi(int a, int b) { return (a / b); }
int main()
{
	int a = 0, b = 0,res=0;
	cout << "Enter the digits\n";
	cin >> a >>b;
	res=add(a+b, b-a);
	cout << "After the add" << res << endl;
	res=sub(a, b);
	cout << "After the sub" << res << endl;
	res=mul(a, b);
	cout << "After the mul" << res << endl;
	res=divi(a, b);
	cout << "After the divison" << res << endl;
	getchar();
	return 0;
}