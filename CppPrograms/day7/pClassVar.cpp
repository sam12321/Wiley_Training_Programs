
#include<iostream>
using namespace std;

class Test{
	public:
		int id;
		int id2;
		
		Test(){
			id=1;
			id2=2;
		}
		int sum(int a,int b)
		{
			cout<<"sum..."<<endl;
		return a+b;
		}
	int sub(int a,int b)
		{
		  cout<<"Test::sub..."<<endl;
		  return a-b;
		}

	static void abc()
	{
		cout<<"Test::ABC.."<<endl;
	}
};

int main()
{
	int Test::*p=&Test::id; // not yet assigning
	Test t1; // now  we can assign
	cout<<t1.*p<<endl; // using t1 object to use pointer

	p=&Test::id2; // changing variable stored in variable
	cout<<t1.*p<<endl;

	
	
return 0;
}
