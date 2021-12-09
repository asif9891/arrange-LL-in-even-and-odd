#include<iostream>
#include"Header.h"
using namespace std;

Node<int>* takeInput()
{
	int data;
	cin >> data;
	Node<int>* head = NULL;
	Node<int>* tail = NULL;
	while (data!=-1)
	{
		Node<int>* Address = new Node<int>(data);
		if (head == NULL)
		{
			head = Address;
			tail = Address;
		}
		else
		{
			tail->next = Address;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}

void print(Node<int>* root)
{
	while (root != NULL)
	{
		cout << root->data << " ";
		root = root->next;
	}
	cout << endl;
}
Node<int>* EvenLinked(Node<int>* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	Node<int>* evenhead = NULL;
	Node<int>* eventail = NULL;
	while (root != NULL)
	{
		if (root->data % 2 == 0)
		{
			Node<int>* even = new Node<int>(root->data);
			if (evenhead == NULL)
			{
				evenhead = even;
				eventail = even;
			}
			else
			{
				eventail->next = even;
				eventail = eventail->next;
			}
		}
		root = root->next;
	}
	return evenhead;
}
Node<int>* oddLinked(Node<int>* root)
{
	if (root == NULL)
	{
		return NULL;
	}
	Node<int>* oddhead = NULL;
	Node<int>* oddtail = NULL;
	while (root != NULL)
	{
		if (root->data % 2 == 1)
		{
			Node<int>* even = new Node<int>(root->data);
			if (oddhead == NULL)
			{
				oddhead = even;
				oddtail = even;
			}
			else
			{
				oddtail->next = even;
				oddtail = oddtail->next;
			}
		}
		root = root->next;
	}
	return oddhead;
}
void arrange(Node<int>* root)
{

}
int main()
{
	Node<int>* root = takeInput();
	root = oddLinked(root);
	print(root);
}