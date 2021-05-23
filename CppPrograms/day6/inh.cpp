#include<iostream>
using namespace std;

class Base{
	private:
		int i;
	protected:
		int k;
	public:
		int j=10;
	
	Base(int i){
	this->i=i;
	}
	void display(){
		cout<<"BASE CLASS : Display function in base class "<<endl;
	cout<<"i :"<<i<<endl;
	}	

};

class Derived:public Base{
	public:
		int j;
Derived():Base(100)
{
//cout<<"in the derived class..."<<endl;
//j=50;
}
void display(){ // overriding display function of base class
cout<<"DERIVED CLASS : Display function in derived class"<<endl;
} 
};

int main(){
Derived d;
d.display(); // will call display function from derived class | overriding
d.Base::display(); // to call function in base class
return 0;
}
