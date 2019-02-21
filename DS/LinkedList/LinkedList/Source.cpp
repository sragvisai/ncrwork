#include<iostream>
using namespace std;
struct node

{

	int data;

	struct node *next;

};

class __list__

{

	struct node *start;

public:

	__list__();

	void Insert_First(int);

	void Insert_Last(int);

	void Insert_After(int, int);

	void Insert_Before(int sel, int ele);

	int Delete_First();

	int Delete_Last();

	void Delete_Spec(int);

	void Travel_Forward();

	void Travel_Backward();

	void Reverse();

	~__list__();
	friend void print(struct node *temp);
};

__list__::__list__()

{

	start = NULL;

}

void __list__::Insert_First(int ele)

{

	struct node *temp;

	temp = new node;

	temp->data = ele;

	temp->next = start;

	start = temp;

}

void __list__::Insert_Last(int ele)

{

	struct node *temp, *p = NULL;

	temp = new node;

	temp->data = ele;

	temp->next = NULL;
	cout << "initialized" << endl;

	if (start == NULL)

		start = temp;

	else {
		p = start;
		while (p->next != NULL)

			p = p->next;

		p->next = temp;
	}
	cout << "last" << endl;

}

void __list__::Insert_After(int sel, int ele)

{

	if (start != NULL)

	{

		struct node *p;

		p = start;

		while (p != NULL && p->data != sel)

			p = p->next;

		if (p != NULL)

		{

			struct node *temp;

			temp = new node;

			temp->data = ele;

			temp->next = p->next;

			p->next = temp;

		}

		else

			cout << "Element not found";

	}

	else

		cout << "List is Empty";

}


void __list__::Insert_Before(int sel, int ele)

{
	struct node *temp = NULL;
	struct node *curr = NULL;
	if (start->data == sel)
	{
		Insert_First(ele);
	}
	else
	{
		temp = new node;
		temp->next = NULL;
		temp->data = ele;
		while (curr->next != NULL&&curr->next->data != sel)
		{
			curr = curr->next;
		}
		if (curr->next != NULL)//the element is found
		{
			temp->next = curr->next;
			curr->next = temp;
		}
		else
			cout << "The element is not in the list" << endl;

	}
}

int __list__::Delete_First()

{

	int x = -999;

	if (start != NULL)

	{

		struct node *temp;

		temp = start;

		start = start->next;

		x = temp->data;

		delete temp;

	}

	else

		cout << "List Empty";

	return x;

}

int __list__::Delete_Last()

{

	int x = -999;

	if (start != NULL)

	{

		if (start->next == NULL)

		{

			x = start->data;

			delete start;

			start = NULL;

		}

		else

		{

			struct node *p;

			p = start;

			while (p->next->next != NULL)

				p = p->next;

			x = p->next->data;

			delete p->next;

			p->next = NULL;

		}

	}

	else

		cout << "List is empty";

	return x;

}

void __list__::Delete_Spec(int ele)

{

	struct node *temp, *p;

	if (start != NULL)

	{

		if (start->data = ele)

		{

			temp = start;

			start = temp->next;

			delete temp;

		}

		else

		{

			p = start;

			while (p->next != NULL && p->next->data != ele)

				p = p->next;

			if (p->next != NULL)

			{

				temp = p->next;

				p->next = temp->next;

				delete temp;

			}

			else

				cout << "Element not found";

		}

	}

	else

		cout << "List is Empty";

}
void __list__::Travel_Forward()
{
	if (start == NULL)
		cout << "The list is empty" << endl;
	else
	{
		struct node *curr;
		curr = start;
		while (curr != NULL)
		{
			cout << " " << curr->data << endl;
			curr = curr->next;
		}
	}
}
void __list__::Travel_Backward()
{
	if (start != NULL)
		print(start);

}
void print(struct node *curr)
{
	if (curr != NULL)
	{
		print(curr->next);
		cout << curr->data << endl;
	}
}
void __list__::Reverse() {
	struct node *Rev = NULL;
	struct node *temp;
	if (start != NULL)
	{
		if (start->next != NULL)
		{
			while (start != NULL)
			{
				temp = start;
				start = temp->next;
				temp->next = Rev;
				Rev = temp;

			}
		}
		start = Rev;
	}
}
__list__::~__list__()
{
	struct node *temp;
	while (start != NULL)
	{
		temp = start;
		start = temp->next;
		delete temp;
	}
}




int main()

{
	__list__ l;
	int ch, ele, sel;
	

	while (1)
	{
		cout <<endl<< "Enter the selection 1.Enter the at first" << endl << "2.insert at last " << endl << "3.Insert after this ele" << endl << "4.Insert before this ele" << endl << "5.Delete the first ele" << endl << "6.Delete the last ele" << endl << "7.Delete specific ele" << endl << "8.PRINT" << endl << "9.reverse print" << endl<<"10.Reverse the list"<<endl<<"11.Exit"<<endl;

		cin >> ch;
		switch (ch)
		{
		case 1:cout << "Enter the ele at the first" << endl;
			cin >> ele;
			l.Insert_First(ele);
			break;
		case 2:cout << "Enter the ele at the last" << endl;
			cin >> ele;
			l.Insert_Last(ele);
			break;
		case 3:cout << "INSERT AFTETR THIS ELEMENT" << endl;
			cin >> sel;
			cout << "Enter the ele" << endl;
			cin >> ele;
			l.Insert_After(sel, ele);
			break;
		case 4: cout << "INSERT before THIS ELEMENT" << endl;
			cin >> sel;
			cout << "Enter the ele" << endl;
			cin >> ele;
			l.Insert_Before(sel, ele);
			break;
		case 5:cout << "DELETE THE FIRST ELE" << endl;
			ele = l.Delete_First();
			cout << "DELETED " << ele << endl;
			break;
		case 6:cout << "Delete last" << endl;
			ele = l.Delete_Last();
			cout << "Delted " << ele << endl;
			break;
		case 7: cout << "Delete spec" << endl;
			cin >> sel;
			l.Delete_Spec(sel);
			cout << "Deleted " << ele;
			break;
		case 8: cout << "Printing" << endl;
			l.Travel_Forward();
			cout << endl;
			break;
		case 9: cout << "Reverse printing" << endl;
			l.Travel_Backward();
			cout << endl;
			break;
		case 11:exit(0);
		case 10:cout << "Reversing the linked list" << endl;
			l.Reverse();
			cout << endl;
			break;
		default:
			break;
		}
	}
	getchar();

	return 0;

}


