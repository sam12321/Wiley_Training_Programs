#include<iostream>
using namespace std;

class A{
	public:
		int j=10;
};

class B{
	public:
		int j=20;
};

class C:public A,public B{
	public:
void display(){
cout<<" value of j :"<<A::j<<endl;
} 
};

int main(){
C obj;
obj.display();
return 0;
}
