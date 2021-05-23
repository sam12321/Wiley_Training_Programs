#include<iostream>
using namespace std;
//#define DEBUG
//
//can also define with g++11 -D DEBUG macro2.cpp
int main(){
#ifdef DEBUG
	cout<<"hello"<<endl;
#endif
	cout<<"outside of debugs"<<endl;
#ifdef DEBUG
	cout<<"again inside debug"<<endl;
#endif
return 0;
}
