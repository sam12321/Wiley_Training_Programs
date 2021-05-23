#include<iostream>
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
int main(){
//int (*p) (int ,int) =&add;
typedef int (*fptr) (int,int);
fptr p[4];
p[0]=&add;
p[1]=&sub;
p[2]=&mul;

cout<<p[0](100,50)<<endl;
cout<<p[1](100,50)<<endl;
cout<<p[2](100,50)<<endl;
//cout<<p(10,20);
return 0;
}
