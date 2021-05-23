#include <iostream>

using namespace std;

void display(){
	cout<<"in display..."<<endl;
}
int add(int a,int b){
	return a+b;
}

int main()
{
/*
void (*p) ()=&display;
p(); */
int (*p) (int ,int)=&add;
cout<<p(10,20)<<endl;
}
