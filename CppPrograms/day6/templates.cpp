// Templates
// Very useful when have to create many similar functions
// Compile time polymorphism

#include<iostream>
#include<string.h>
using namespace std;

template <typename T>

T add(T a,T b)
{
	return a+b;
}

template<> // TEMPLATE SPECIALIZATION | don't create on your own use my function instead
char* add(char *dst, char *src){
cout<<"specialized function ..."<<endl;
strcat(dst,src);
return NULL;

}

/*
int add(int a ,int b){

	cout<<"in int"<<endl;
	return a+b;
}

int add(double a, double b){
	cout<<"in double"<<endl;
	return a+b;
}
*/

int main(){
cout<<add(10,20)<<endl;
cout<<add(10.5,20.5)<<endl;
char name1[64]="SAMPLE";
char name2[64]="TEST";
add(name1,name2);
return 0;
}
