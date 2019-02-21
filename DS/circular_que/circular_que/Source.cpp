#include<iostream>
using namespace std;
struct queue {
	int *q;
	int f, r;
	int size;
};
class que {
	struct queue qu;
public:
	que() {
		qu.q = NULL;
		qu.size = 0;
		qu.f = -1;
		qu.r = -1;
	}
	void getsize(int n)
	{
		qu.q = new int[n];
		qu.size = n;
	}
	void display()
	{
		int i = qu.f;
		while (i != qu.r)
		{
			if (i < qu.r)
			{
				cout << " " << qu.q[i];
				i++;
			}
			else if (i==qu.size-1&&i > qu.r && qu.r != -1)
			{
				i--;
				cout << " " << qu.q[i];
			}
			else
			{
				cout << " " << qu.q[i];
				i=(i+1)%qu.size;
			}

		}
		if (i == qu.r)
			cout << " " << qu.q[i];
		cout << "The above one is the q" << endl;
	}
	void enque(int ele)
	{
		//cout << "r"<<qu.r << endl;
		// cout <<"f"<< qu.f << endl;
		if (qu.f == (qu.r + 1) % qu.size) {
			cout << "Overflow" << endl;
		}
		else if (qu.f == -1 && qu.r == -1)
		{
			qu.f = 0;
			qu.r = (qu.r + 1) % (qu.size);
			qu.q[qu.r] = ele;

		}
		else
		{
			cout << "here" << endl;
			qu.r = (qu.r + 1) % (qu.size);
			qu.q[qu.r] = ele;

			// cout << qu.r << endl;
		}
	}
	int deque() {
		cout << "r="<<qu.r << endl;
		 cout <<"f="<< qu.f << endl;
		int x = -999;
		if (qu.r!=qu.size-1&&qu.f == (qu.r + 1) % qu.size) {
			cout << "Undeflow" << endl;
			return x;
		}
		else if (qu.f == qu.r)
		{
			x = qu.q[qu.f];
			qu.f = -1;
			qu.r = -1;
			return x;
		}
		else
		{
			x = qu.q[qu.f];
			qu.f = (qu.f + 1) % qu.size;
		}
	}
};
void main()
{
	que Q;
	int n, ch = 0;
	cout << "Enter the size of thr queue" << endl;
	cin >> n;
	Q.getsize(n);
	while (1)
	{
		cout << "Enter the choice 1,2,3,4" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:int ele;
			cout << "Enter the ele" << endl;
			cin >> ele;
			Q.enque(ele);
			break;
		case 2:cout << "Deq" << endl;
			cout << "Removed" << Q.deque() << endl;
			break;
		case 3: cout << "Display" << endl;
			Q.display();
			cout << endl;
			break;
		case 4:exit(0);
		default:
			break;
		}
	}
	system("pause");
	getchar();

}