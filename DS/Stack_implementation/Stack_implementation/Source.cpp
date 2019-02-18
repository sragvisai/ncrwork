#include<iostream>
using namespace std;
struct stack1 {
	int size;
	int *s;
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
		stk.s = new int[n];
	}
	void push(int ele)
	{
		if (!IsFull())
			stk.s[++stk.top] = ele;
		else
			cout << "Overflow" << endl;
	}
	bool IsFull()
	{
		cout << stk.size<<endl;
		cout << stk.top;
		return(stk.top == (stk.size - 1));
	}
	int pop()
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
	int peek()
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
	stack2 st;
	int op,n,ele;
	cout << "Enter the size";
	cin >> n;
	st.getsize(n);
	while (1)
	{
		cout << "Choose the option" << endl;
		cin >> op;
		switch (op)
		{
		case 1:cout << "Enter the ele" << endl;
			cin >> ele;
			st.push(ele);
			break;
		case 2:cout << "Popped out" << st.pop() << endl;;
			break;
		case 3:cout << "Peeked " << st.peek() << endl;
			break;
		case 5: st.display();
			break;
		case 4: exit(0);
		default:
			break;
		}
	}
	system("pause");
}