#include<iostream>
using namespace std;
int prec(char c)
{
	if (c == '*' || c == '/')
		return 10;
	else if (c == '+' || c == '-')
		return 9;
	/*else if (c == '{' || c == '(' || c == '[')
		return 15;*/
	else
		return 0;
}
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
		/*cout << stk.size << endl;
		cout << stk.top;*/
		return(stk.top == (stk.size - 1));
	}
	char pop()
	{
		if (!Isempty())
			return(stk.s[stk.top--]);
		else
			cout << "UnderflowA";
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
	char getele(int n)
	{
		return(stk.s[n]);
	}
	int givetop()
	{
		return stk.top;
	}

};
void main()
{
	stack2 st;
	int j= 0,size,c=0;
	char str[20],ch,strop[20];
	cout << "Enter the string to be converted";
	cin >> str;
	cout << "Enter the stack  size";
	cin >> size;
	st.getsize(size);
	for (int i = 0; i < strlen(str); i++)
	{
		ch = str[i];
		if (isalpha(ch))
		{	
			//cout << "hello";
			strop[j] = ch;
			j++;
		}
		else
		{
			if (st.Isempty())
			{
				//cout << "hello";
				st.push(ch);
			}
			//else if (ch == ')')
			//{
			//	while (st.peek() != '(' && !st.Isempty())
			//	{
			//		strop[j] = st.pop();
			//		//cout << strop[j] << endl;
			//		j++;
			//	}
			//	st.pop();
			//}
			else if ((prec(st.peek()) >= prec(ch)))
			{
				while ((prec(st.peek()) >= prec(ch))) {
					strop[j] = st.pop();
					j++;
				}
				st.push(ch);
			}
			
			else
			{
				st.push(ch);

			}
		}
	}
	while (!st.Isempty())
	{
		strop[j] = st.pop();
		j++;
	}
	c = j;
	//cout << "j=" << j << endl;
		for (j = 0;j<c ; j++)
			cout << strop[j];
	system("pause");
}