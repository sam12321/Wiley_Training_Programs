#include<iostream>
using namespace std;

char* create_memory(int bytes){ // using return
char* p=new char[bytes];
return p;
}

// without return

void create_memory(char* m,int bytes){ // will create code dump
	m=new char[bytes];
}

void create_memory(char** m,int bytes){ // will work
	m*=new char[bytes];
}

int main(){
char* mem=NULL;
//char *mem = create_memory(10);
create_memory(&mem,10);
cout<<"before...."<<endl;
*mem='A';
cout<<"after...."<<endl;
*(mem+1)='B';
cout<<*mem<<endl;
cout<<*(mem+1)<<endl;
delete [] mem;

return 0;
}
