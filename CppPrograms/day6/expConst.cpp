// explicit constructors
#include<iostream>
using namespace std;

class A{
private:
	int i;
public:
	A(){
	out<<"A : default const"<<Endl;
	i=5;
	}
	explicit A(int i){ // force users to use explicit declaration of objects
		this->i=i
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
};	
	
void show(int i){
cout<<"show: i value : "<<i<<endl;
}
int main(){
A a(10); // explicit 
A a=10; //implicit |  a a(10) -> a.A(10)

return 0;
}
