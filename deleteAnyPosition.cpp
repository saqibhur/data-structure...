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
void deletePosition(Node* &head,int Position)
{
	if(Position==1)
	{
		Node* temp=head;
		head=head->next;
		delete temp;
		return;
	}
	
	Node* temp=head;
	int count=1;
	while(count!=Position-1)
	{
		temp=temp->next;
		count++;
	}
	Node* del=temp->next;
	      temp->next=temp->next->next;
	delete del;
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
	Node* node1=new Node(1);
	head=node1;
	Node* node2=new Node(2);
	node1->next=node2;
	Node* node3=new Node(3);
	node2->next=node3;
	Node* node4=new Node(4);
	node3->next=node4;
	Node* node5=new Node(5);
	node4->next=node5;
	
	print(head);
	
	deletePosition(head,1);
	print(head);
	
    deletePosition(head,3);
	print(head);
	
	deletePosition(head,3);
	print(head);
	
	
	
}
