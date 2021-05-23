#include<iostream>
using namespace std;

int main(){
int i=10;
int *p=&i;
int **q=&p;
cout<<i<<endl; // 10
cout<<*p<<endl; // 10
cout<<**q<<endl; // 10
	return 0;
}
