#include<iostream>
using namespace std;

int main(){

const char *ptr="Hello"; // pointer to a constant
char const* cptr="name" // constant poier
a[10]="hi"; 
// ptr[1]='a'; // will give error bec pointer to a constant
// cptr=&a; // will give error because cptr is constant pointer
return 0;
}
