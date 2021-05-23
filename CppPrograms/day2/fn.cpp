#include<iostream>
using namespace std;

void display(){

	cout<<"I am in displayy!!!"<<endl;

}
void add(int *a){
*a=*a+20;
cout<<"value of a is :"<<*a<<endl;

}
int main(){
	cout<<"start...."<<endl;
	display();
	int i=5;
	int *j=&i;
	add(j);
cout<<"value of i after add :"<<i<<endl;
	cout<<"end...."<<endl;
return 0;
}
