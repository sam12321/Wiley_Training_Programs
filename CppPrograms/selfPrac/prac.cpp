#include<iostream>
using namespace std;

struct Node{
	int dat;
	int *ptr;
}

void createNode(Node *head,int val){
Node *node=new Node;
node->dat=val;
node->ptr=NULL;

if(head->next==NULL)
head->next=node;
}


int main(){
Node head=new Node;
head->dat=10;
head->ptr=NULL;

return 0;
}
