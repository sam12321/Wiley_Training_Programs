#include<iostream> // also a macro
using namespace std;

#define MAX 1000; // Every time MAX is seen will be replaced with 1000
#define MUL(a,b) a*b;
int main(){
#include "other.cpp";
	int i=10;
	i=i+MAX;
	cout<<"value of i: "<<i<<endl;
	cout<<"value of j: "<<j<<endl;
	cout<<"USing MUL macro product is: "<<MUL(i,j);
return 0;
}
