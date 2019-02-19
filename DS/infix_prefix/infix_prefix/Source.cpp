#include<iostream>
using namespace std;
struct stack1 {
	int size;
	char *s;
	int top;
};
int prec(char ch)
{
	if (ch == '+' || ch == '-')
		return 5;
	else if (ch == '*' ||ch == '/')
		return 10;

}
class stack2
{
	stack1 stk;
public:
	stack2()
	{
		stk.size = 0;
		stk.s = NULL;
		stk.top = -1;
	}
	void getsize(int n)
	{
		stk.size = n;
		stk.s = new char[n];
	}
	void push(char ele)
	{
		//cout << "size is " << stk.size << endl;
		//cout << "top is" << stk.top;
		if (!IsFull())
			stk.s[++stk.top] = ele;
		else
			cout << "Overflow" << endl;
	}
	bool IsFull()
	{
		//cout << stk.size << endl;
		//cout << stk.top;
		return(stk.top == (stk.size - 1));
	}
	char pop()
	{
		if (!Isempty())
			return(stk.s[stk.top--]);
		else
			cout << "Underflow";
	}
	bool Isempty()
	{
		return (stk.top == -1);
	}
	char peek()
	{
		return(stk.s[stk.top]);
	}
	void display()
	{
		for (int i = 0; i <= stk.top; i++)
			cout << stk.s[i] << endl;
	}

};
void main()
{
	char str[20], *strev,stop[20],*stopr;
	int n,j=0;
	stack2 st;
	cout << "Enter the size for stack" << endl;
	cin >> n;
	st.getsize(n);
	cout << "Enter the string" << endl;
	cin >> str;
	strev = _strrev(str);
	cout << "The reversed string" << endl;
	for (int i = 0; i < strlen(strev); i++)
		cout << strev[i];
	cout << endl;
	for (int i = 0; i < strlen(strev); i++)
	{
		if (isalpha(strev[i]))
		{
			stop[j] = strev[i];
			//cout << stop[j];
			//cout << "for j=" << j << stop[j] << endl;
			j++;
		}
		else
		{
			if (st.Isempty())
			{
				st.push(strev[i]);
			}
		else if ((prec(st.peek())) >= (prec(strev[i])))
			{
				stop[j] = st.pop();
				//cout << stop[j];
				//cout << "for j=" << j << stop[j] << endl;
				j++;
				st.push(strev[i]);
			}
			else
				st.push(strev[i]);
		}
	}
	while (!st.Isempty())
	{
		//cout << "Here" << endl;
		stop[j] = st.pop();
		//cout << "for j=" << j << stop[j] << endl;
		j++;
	}
	//cout << "j=" << j << endl;
	stop[j] = '/0';
	/*stopr = _strrev(stop);
	cout << stopr << endl;
	cout << "strlen" << strlen(stop) << endl;*/
	for (int i = j-1; i>=0; i--)
	{
		cout << stop[i];
	}
	system("pause");

}