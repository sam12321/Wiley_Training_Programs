// Initialization List
// to initialize variables directly while defining constructor

#include<iostream>
using namespace std;

class A{
private:
	int i,j;
public:
	A(int i,int j):i(i),j(j){
	}
};

class B:public A{
	private:
	int i,j;
	public:
	B(int i,int j) : i(i),j(j) , A(10,20) // initialization list with base class object declaration
	{
		cout<<i<<j<<endl;
	}
};
class Data{
	private:int i,j;
	public:
		Data(int i,int j) : i(i),j(j) // Initialization List
	{
	}
	void display(){
	cout<<"i : "<<i<<endl;
	cout<<"j : "<<j<<endl;
	}
};	
	
int main(){
Data obj(10,20);
obj.display();
return 0;
}
