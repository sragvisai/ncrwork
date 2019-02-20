#include<iostream>
using namespace std;
template <class T>
T linearsearch(T a[], int n, T ele) {
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		if (a[i] == ele)
		{
			cout << "Found" << endl;
			return 0;
			break;
		}
	}
	if (i == n)
		cout << "Element not found" << endl;
}
int main()
{
	int n, *a;
	int ele;
	float ef, *af;
	cout << "Enter the size" << endl;
	cin >> n;
	cout << "Enter the search" << endl;
	cin >> ele;
	cout << "Enter the ele for float" << endl;
	cin >> ef;
	a = new int[n];
	af = new float[n];
	cout << "Enter the ele" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> af[i];
	}
	linearsearch(a, n, ele);
	linearsearch(af, n, ef);
	system("pause");
	return 0;
}