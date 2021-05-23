#include<iostream>
#include<string>
#include<stdarg.h>
using namespace std;

/*int sum(int a,int b,int c=0) // can not take more than 3 arguments
{
return a+b+c;
}*/

int sum(int no_args,...){
	va_list list;
	va_start(list,no_args);
	for(int i=1;i<=no_args;i++){
		int temp=va_arg(list,int);
		cout<<"arg:"<<temp<<endl;
	}
	va_end(list);
	return 0;
}

int main(){
cout<<sum(2,10,20)<<endl;
cout<<"-------------"<<endl;
cout<<sum(3,10,20,30)<<endl;
int i=10;
float f=20;
//     todo myprintf("%d %f",i,f);
return 0;
}
