#include<iostream>
using namespace std;

class MyStr{

public:
char *str;

MyStr(char *str){
this->str=str;
}

//char str2[64]="hhehe";
int length(){
  int i=0;
  while(str[i]!='\0')
  {
   i=i+1;
  }
return i;
}

char at(int i){
return str[i];
}

void append(char *str2){

//if(sizeof(str)+sizeof(str2)	
	
	
int len=length();
int len2=0;
  while(str2[len2]!='\0')
  {
   len2=len2+1;
  }
int v=0;
for(int i=len;i<len+len2;i++){
	str[i]=str2[v];
	v++;
   }  
}
};

int main(){
char name[64]="Hello";
char name2[20]=" HI";
MyStr obj(name);
cout<<"length of string : "<<obj.length()<<endl;
cout<<"character at 2nd position : "<<obj.at(2)<<endl;
obj.append(name2);
cout<<name<<endl;
return 0;
}
