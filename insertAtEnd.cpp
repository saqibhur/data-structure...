#include <iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node* next;
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
//insert at head
void insertAtEnd(Node* &head,int data)
{   
	Node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	Node* lastNode=new Node(data);
	temp->next=lastNode;
	
}
//Print using while loop
void print(Node* &head)
{
Node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;	
}
int main()
{
	Node* head=NULL;
	Node* node1=new Node(6);
	head=node1;
	Node* node2=new Node(12);
	node1->next=node2;
	
	print(head);
	
	insertAtEnd(head,18);
	print(head);
	
	insertAtEnd(head,24);
	print(head);
	
}
