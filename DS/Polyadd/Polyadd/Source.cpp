#include<iostream>
using namespace std;
struct poly {
	int pow;
	int val;
	struct poly *next;
};
class List
{
	struct poly *start;
public:
	List()
	{
		start = NULL;

	}
	void link(int p, int v)
	{
		struct poly *temp,*curr;
		temp = new poly;
		temp->next = NULL;
		temp->pow = p;
		temp->val = v;
		cout << "initial" << temp->pow <<" "<< temp ->val << endl;
		if (start == NULL)
		{
			start = temp;
		}
		else
		{
			curr = start;
			while (curr->next != NULL)
			{
				curr = curr->next;
			}
			curr->next = temp;
		}
	}
	void display()
	{
		struct poly *curr;
		if (start == NULL)
			cout << "No list" << endl;
		else
		{
			curr = start;
			while (curr != NULL)
			{
				cout << " The result=" << curr->val << " with power" << curr->pow << endl;;
				curr = curr->next;
			}
		}
	}
	friend void addition(List *l1, List *l2);
	
};

void addition(List *l1, List* l2)
{
	struct poly *t1, *t2;
	List l3;
	int v;
	t1 = l1->start;
	t2 = l1->start;
	if (t1 == NULL)
	{
		cout << "The result is the second poly" << endl;
	}
	else if (t2 == NULL)
	{
		cout << " The result is the first poly" << endl;
	}
	else if (t1 == NULL&&t2 == NULL)
	{
		cout << "No polys taken" << endl;
	}
	else
	{
		while (t1 != NULL&&t2 != NULL)
		{
			if (t1->pow == t2->pow)
			{
				v = t1->val + t2->val;
				l3.link(t1->pow, v);
				cout << "here" << t1->pow << endl;
				t1 = t1->next;
				t2 = t2->next;
				
			}
			else if (t1->pow > t2->pow)
			{
				l3.link(t1->pow, t1->val);
				t1 = t1->next;
			}
			else
			{
				l3.link(t2->pow, t2->val);
				t2 = t2->next;
			}
		}
	}
	l3.display();
	cout << "Ended" << endl;
}
void main()
{
	List l1, l2;
	l1.link(1, 2);
	l2.link(1, 2);
	l1.link(2, 3);
	l2.link(3, 3);
	cout << "hello" << endl;
	addition(&l1, &l2);
	system("pause");
}