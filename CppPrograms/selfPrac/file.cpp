#include<iostream>
using namespace std;

class A{

	public:
	A(int a)
	{
		cout<<a<<endl;
	}
};

class B:public A{
	public:
		B(int b,int c):A(c){
			cout<<b<<endl;
		}
};

int main(){
B b(10,8);


return 0;
}
