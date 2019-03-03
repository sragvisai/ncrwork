#include<iostream>
#include<stdlib.h>
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
		//cout << "initial" << temp->pow <<" "<< temp ->val << endl;
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
				cout << "value =" << curr->val << " with power=" << curr->pow << endl;;
				curr = curr->next;
			}
		}
	}
	void freeing_memory()
	{
		cout << "Freeing the memory" << endl;
		poly *curr,*temp;
		curr = start;
		while (curr != NULL)
		{
			temp = curr->next;
			delete curr;
			curr = temp;
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
	t2 = l2->start;
	if (t1 == NULL)
	{
		cout << "The result is the second poly" << endl;
		l2->display();
	}
	else if (t2 == NULL)
	{
		cout << " The result is the first poly" << endl;
		l1->display();
	}
	else if (t1 == NULL && t2 == NULL)
	{
		cout << "No polys taken" << endl;
	}
	else
	{
		while (t1 != NULL && t2 != NULL)
		{
			if (t1->pow == t2->pow)
			{
				v = t1->val + t2->val;
				l3.link(t1->pow, v);
				//cout<< t1->pow << endl;
				t1 = t1->next;
				t2 = t2->next;

			}
			else if (t1->pow > t2->pow)
			{
				cout << "t1->pow>t2->pow" << endl;
				l3.link(t1->pow, t1->val);
				t1 = t1->next;
			}
			else
			{
				l3.link(t2->pow, t2->val);
				t2 = t2->next;
			}
		}

		if (t1 != NULL)
		{
			l3.link(t1->pow, t1->val);
			t1 = t1->next;
		}
		if (t2 != NULL)
		{
			l3.link(t2->pow, t2->val);
			t2 = t2->next;
		}
		cout << "The resultant polynomial is " << endl << endl << endl;
		l3.display();
		cout << "Ended" << endl;
	}
}
void main()
{
	List l1, l2;
	int power, value,ch=1;
	while(ch==1)
	{
		cout << "Enter the first polynomial" << endl;
		cout << "Enter the choice 1. YES CONTINUE ADDING 2. NOPE ITS ENOUGH" << endl;
		cin >> ch;
		if (ch == 1) {
			cout << "Enter the power" << endl;
			cin >> power;
			cout << "Enter the value" << endl;
			cin >> value;
			l1.link(power, value);
		}
	} 
	ch = 1;
	while (ch == 1)
	{
		cout << "Enter the second polynomial" << endl;
		cout << "Enter the choice 1. YES CONTINUE ADDING 2. NOPE ITS ENOUGH" << endl;
		cin >> ch;
		if (ch == 1) {
			cout << "Enter the power" << endl;
			cin >> power;
			cout << "Enter the value" << endl;
			cin >> value;
			if()
			l2.link(power, value);
		}
	}
	cout << "The taken polys are" << endl;
	cout << "The first one" << endl;
	l1.display();
	cout << "The second one" << endl;
	l2.display();
	addition(&l1, &l2);
	l1.freeing_memory();
	l2.freeing_memory();
	system("pause");
}