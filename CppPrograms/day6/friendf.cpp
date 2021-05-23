#include<iostream>
using namespace std;

class A{
private:
	int a;
public:
	A(){
	a=5;
	}
	void display(){
		cout<<"value of a :"<<a<<endl;
	}
friend void showA(A a);
};

void showA(A a1){
	cout<<"value of private variable a is :"<<a1.a<<endl;
}
int main(){

A a;
showA(a);

return 0;
}
