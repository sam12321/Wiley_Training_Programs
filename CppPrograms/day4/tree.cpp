#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
	};

void createNode(Node *root,int val){
if(val < root->data)
{
if(root->left==NULL)
{
	root->left=new Node;
	root->left->data=val;
	root->left->left=NULL;
	root->left->right=NULL;
}
else{
	createNode(root->left,val);
    } 
}

else if(val > root->data)
{
if(root->right==NULL)
{
        root->right=new Node;
        root->right->data=val;
        root->right->left=NULL;
        root->right->right=NULL;
}
else{
	createNode(root->right,val);
    }
  }
}

void inOrder(Node *root){
if(root->left!=NULL)
	inOrder(root->left);
cout<<root->data<<endl;
if(root->right!=NULL)
	inOrder(root->right);
}

void preOrder(Node *root){
	cout<<root->data<<endl;
	if(root->left!=NULL)
		preOrder(root->left);
	if(root->right!=NULL)
		preOrder(root->right);
}

void postOrder(Node *root){
        if(root->left!=NULL)
                postOrder(root->left);
        if(root->right!=NULL)
                postOrder(root->right);
        cout<<root->data<<endl;
}

int main(){
int numbers[]={57,98,3,46,64,82,19,28,62,1};
Node *root = new Node;
root->data=numbers[0];
root->left=NULL;
root->right=NULL;

for(int i=1;i<10;i++){
	createNode(root,numbers[i]);
}
cout<<"------INORDER-------"<<endl;
inOrder(root);
cout<<"------PREORDER-------"<<endl;
preOrder(root);
cout<<"------POSTORDER-------"<<endl;
postOrder(root);

return 0;
}
