#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

	char name[64]="ABCEDFEF";
	const char *p = name; // points to a constant char | i.e can't update the value it's pointing to

/* 
 	char *const p=name;	// p is a constant pointer
	char name2[64]="abcde";
	p= name2; // error
*/

	const char *const p =name; // constant pointer pointing to const value
	p[0] ='X'; // will give error if pointer is pointing to const
	name[1]='X'; // will work
	cout<<name<<endl;
return 0;
}
