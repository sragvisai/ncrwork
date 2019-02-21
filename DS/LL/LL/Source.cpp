#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class List
{
	struct node *start;
public:
	List()
	{
	};
	~List();
	void insertfirst(int ele)
	{
		struct node *temp;
		temp = new node;
		temp->data = ele;
		temp->next = start;
		start = temp;
	}
	void insert_last(int ele)
	{
		struct node *temp,*curr;
		temp = new node;
		temp->data = ele;
		temp->next + NULL;
		if (start = NULL)
			start = temp;
		else
		{
			curr = start;
			while ((curr->next) != NULL)
				curr = curr->next;
			curr->next = temp;
		}
	}
	void inserafter(int sele, int ele)
	{
		struct node *curr;
		if (start != NULL)
		{
			curr = start;
			while(curr!=NULL&&curr->data!=sele)
		}
	}
};

List::List()
{
	start = NULL;
}

List::~List()
{
}
