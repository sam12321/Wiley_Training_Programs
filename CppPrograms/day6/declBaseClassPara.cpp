// Passing arguments of Base class when declaring Derived Class
#include<iostream>
using namespace std;

class Base{
	private:
		int i;
	protected:
		int j;
	public:
		int k;
	Base(int i,int j){
		this->i=i;
		this->j=j;
	}
	Base(int i){
	this->i=i;
	}
	void display(){
	cout<<"in base class"<<endl;
	cout<<"value of i :"<<i<<"value of j :"<<j<<endl;
	}

};

class Derived:public Base{
public:
Derived():Base(100,200){}

void display(){
cout<<"in derived class"<<endl;
}
};

int main(){

Derived d;
d.Base::display();

return 0;
}
