#include<iostream>
using namespace std;

void addele(int *a)
{
	*a=*a+1;
}

int main(){
int i=5;
int *p=&i;

addele(p);
cout<<i<<endl;
return 0;
}
