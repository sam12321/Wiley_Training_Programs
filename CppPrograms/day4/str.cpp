#include<iostream>
#include<string.h>
using namespace std;

int mystrlen(char *p){

int len=0;
while(p[len]!='\0')
	++len;
return len-1;

}

int main(){
char name1[64]="SAMPLETEXT";
char name2[64]="VAMPLETEXT";
cout<<strlen(name1)<<endl;
//strcpy(name2,name1);  
cout<<name2<<endl;
int result = strcmp(name1,name2); // will give difference of change if not equal
cout<<"result :"<<result<<endl; // S-V
return 0;

}
