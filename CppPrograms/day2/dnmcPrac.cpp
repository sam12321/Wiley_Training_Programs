#include<iostream>
#include<stdio.h>
using namespace std;

/*

int* get_i(){
int i=1122;
int *p=&i;
cout<<"address stored in p is :"<<p<<endl;
cout<<"value stored at address is :"<<*p<<endl;
return p;
}

*/

int* get_i(){

int* p = new int;
cout<<"current address of p :"<<p<<endl;
*p=1234;
cout<<"current value of p :"<<*p<<endl;
return p;

}

int main(){
cout<<"inside main function......"<<endl;
int* r=get_i();
cout<<"value stored at p :"<<*r<<endl;
delete r;
return 0;
}
