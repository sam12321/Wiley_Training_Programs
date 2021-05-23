#include<iostream>
#include<stdio.h>

using namespace std;

void show_text(char *ab){
cout<<"Text :"<<ab<<endl; 
ab[1]='X'; // *(a+1)='X'
}

int main(){

	char name[64]="SAMPLE TEXT";
	show_text(name);
	cout<<"Text after show_text :"<<name<<endl;
	return 0;
}
