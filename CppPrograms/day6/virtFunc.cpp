// Virtual FUnctions 
#include<iostream>
using namespace std;

class A{
private:
	int a;
public:
	A(){
	cout<<"A : default const"<<endl;
	a=5;
	}
	virtual void display(){ // if no other fn with same name then use this
		cout<<"display in A"<<a<<endl;
	}
};

class B : public A{
	public:
	void display(){
		cout<<"display in B"<<endl;
	}
};	
	
int main(){
// B *b=new B();
A *a=new B();
a->display();
return 0;
}
