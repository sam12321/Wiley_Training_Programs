#include<iostream>
#include<stdio.h>

using namespace std;

void add(int x){

	x=x+10;
	cout<<"value of x inside funciton is :"<<x<<endl;

}

void add(int *x){
*x=*x+10;
cout<<"value of x inside func is :"<<*x<<endl;

}

/*
void add(int &x){
x=x+10;
cout<<"value after reference function is :"<<x<<endl;
}
*/


int main(){
cout<<"start!!....."<<endl;
int i=5;
int *j=&i;
int &k=i;
add(i);
cout<<"after normal function :"<<i<<endl;
add(j);
cout<<"after using pointers in function :"<<i<<endl;
cout<<"end!!......"<<endl;
return 0;
}
