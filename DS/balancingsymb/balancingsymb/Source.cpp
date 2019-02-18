#include<iostream>
using namespace std;
struct stack1 {
	int size;
	char *s;
	int top;
};
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
		if (!IsFull())
			stk.s[++stk.top] = ele;
		else
			cout << "Overflow" << endl;
	}
	bool IsFull()
	{
	//	cout << stk.size << endl;
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
void  main()
{	
	stack2 st;
	int flag = 0;
	char s[20], ch;
	int n;
	cout << "Enter the size" << endl;
	cin >> n;
	st.getsize(n);
	cout << "Enter the string" << endl;
	cin >> s;
	for (int i = 0; i < strlen(s); i++)
	{
		ch = s[i];
		switch (ch)
		{
		case '(':
		case '{':
		case '[':st.push(ch);
			break;
		case '}':
		case ')':
		case ']':
			if (((ch == '}' && (st.peek() == '{')) || ((ch == ']' && (st.peek() == '['))) || ((ch == ')' && (st.peek() == '(')))))
				st.pop();
			else
			{
				flag = 1;
				cout << "Unbalanced" << endl;

			}break;
		default:
			break;
		}
	}
	if (flag==0)
	{
		cout << "balenced";
	}
	system("pause");
}