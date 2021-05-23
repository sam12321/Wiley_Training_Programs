#include<iostream>
using namespace std;

int main(){

int i=10;
int &j=i; // j is an alias to i
/*
const int &b=i; // b is a reference to a constant
b=50; // error

int &const b=i; // no need by default constant

*/

int k=30;
j=k;
k=k+30;

cout<<"value of i :"<<i<<endl;
cout<<"value of j :"<<j<<endl;	
cout<<"value of k :"<<k<<endl;	
return 0;
}
