// Function Pointer Array

#include <iostream>

using namespace std;

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

// struct Student{};

int main()
{
/* Typedef Meaning
int i;
typedef int INT; // defining int as INT
*/

typedef int (*FPTR) (int, int);
FPTR p[3];
p[0]=&add;
p[1]=&sub;
p[2]=&mul;
cout<<p[0](10,20)<<endl;
cout<<p[1](10,20)<<endl;
cout<<p[2](10,20)<<endl;
}
