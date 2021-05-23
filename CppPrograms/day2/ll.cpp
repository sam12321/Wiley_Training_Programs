#include<iostream>
#include<stdio.h>
using namespace std;

struct Node
{
	int id;
	Node *next;
};

void createNode(Node *temp,int id){
if(temp->next==NULL){
	Node *t=new Node;
	t->id=id;
	t->next=NULL;
	temp->next=t;
    }
else{
	while(temp->next!=NULL){
	temp=temp->next;
	}
	Node *t=new Node;
	t->id=id;
	t->next=NULL;
	temp->next=t;
}
}

void showList(Node* temp){
while(temp->next!=NULL){
cout<<temp->id<<endl;
temp=temp->next;
}
cout<<temp->id<<endl;
}

void delNode(Node* temp,int id){
if(temp->next==NULL){
delete temp;
}
while(temp->next->id!=id){
temp=temp->next;
}
temp->next=temp->next->next;
}

void printRev(Node* head)
{
if(head->next!=NULL)
	printRev(head->next);
cout<<head->id<<endl;
}

int main(){
	// Node1
	Node *head = new Node;
	head->id=1;
	head->next=NULL;
	createNode(head,2);
	createNode(head,3);
	createNode(head,4);
//	delNode(head,3);
	cout<<"displaying list..."<<endl;
	showList(head);
	cout<<"printing in reverse order..."<<endl;
	printRev(head);
	return 0;
}
