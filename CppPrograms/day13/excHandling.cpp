#include<iostream>
using namespace std;

float div()
{
int a,b;
cin>>a;
cin>>b;
if(b==0){
	cout<<"how dare you!!"<<endl;
	throw 111; // const* int pointer
//	throw "abc";
//	throw 'A';
//	throw 11.09f; // will go to global exception 
}
else
return (float)a/b;

}

int main()
{
	
	try
	{	
		float f=div();
		cout<<"div:"<<f<<endl;
	}
	catch(int ex) // catch for integer
		{
			cout<<"caught!!..."<<endl;
		}
	catch(const char* ex) // catch for string array
	{
		cout<<"caught (const char*)"<<endl;
	}
	catch(char ex) // catch for character
	{
		cout<<"caught (char)"<<endl;
	}
	catch
	catch(...)
	{
	cout<<"global exception..."<<endl;
	}
return 0;
}
