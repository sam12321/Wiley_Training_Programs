#include<iostream>
using namespace std;

int main(){
int a[5]={1,2,3,4,5};
a[3]=33;
cout<<"a[3]:"<<a[3]<<endl;
*(a+3)=333;
cout<<"a[3]="<<a[3]<<endl;

cout<<"----------------------------------"<<endl;
cout<<"address of a :"<<a<<endl; // will give address | a is pointing at first element
cout<<"printing using for loops:"<<endl;

for(int i=0;i<5;i++){
cout<<a[i]<<endl;
}

cout<<"printing value at a:"<<endl;
cout<<*a<<endl; // printing value at a
return 0;
}
