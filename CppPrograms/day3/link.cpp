#include<iostream>
#include<stdio.h>
using namespace std;

static int count =0;
// #include "Func.h"

extern void get_count();
void display(){
cout<<"value of count :"<<count<<endl;
}

int main(){
get_count();
return 0;
}
