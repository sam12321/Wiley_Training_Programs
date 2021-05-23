// Class Casting
// useful when we are writing base class fn not for derived class
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
		cout<<"display in A"<<a<<endl;
	}
};

class B : public A{
	public:
	void display(){
		cout<<"display in B"<<endl;
	}
	void display2(){
		cout<<"display2 in B"<<endl;
	}
};	
	
void show(int i){
cout<<"show: i value : "<<i<<endl;
}
int main(){

B b;
A a=b;
a.display();
// a.display2(); // will give error as A class does not have display2

return 0;
}
