// infix to postfix using stack

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

template<typename T>
class Op
{
T stack[100];
int index=-1;

public:

void push(T ele)
{
	index++;
	stack[index]=ele;
}

T pop()
{
	//stack[index]=;
	string s = stack[index];
	index--;
	return s;
}

void display()
{
	for(int i=0;i<=index;i++)
	{
		cout<<"element :"<<stack[i]<<endl;
		cout<<"--------------"<<endl;
	}

}
};
/*
bool isoperator(string a)
{
if(a=='+' or a=='*' or a=='/')
	return true;
else 
	return false;
}*/

int main()
{
string str="++a*/bcd/ef";
Op<string> obj;

char c[2]={'\0','\0'};

for(int i=str.length()-1;i>=0;i--)
{
//	if(!isoperator(str[i]))
	if(str[i]>=97&&str[i]<=122)
	{
	c[0]=str[i];
	obj.push(string(c));
	}
	else
	{	
		string op1=obj.pop();
		string op2=obj.pop();
//		cout<<"op1:"<<op1<<" op2:"<<op2<<endl;
		c[0]=str[i];
		string str2=op1+op2+string(c);
		//cout<<str2<<endl;
		obj.push(str2);		
	}
}

cout<<str<<endl;
obj.display();

return 0;
}
