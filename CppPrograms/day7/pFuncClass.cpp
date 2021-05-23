// Pointing to a class Function

#include<iostream>
using namespace std;

class Test{
	public:
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

	static int mul(int a,int b)
	{
		cout<<"Test::mul.."<<a*b<<endl;
	}
};

int main()
{
	Test t1;
	Test t2;
	int (Test::*p) (int, int) = &Test::sum; // signature example | point to fn which have this nature
	
	//P is a pointer to the function "sum" in Test class  and points sum function
// in ANY OF OBJECTS OF Test
	cout<<(t1.*p)(10,20)<<endl;
	p = &Test::sub; // pointing to sub | same parameters 
	cout<<(t1.*p)(20,10)<<endl;

	int (*sp) (int,int)=&Test::mul; // static functions don't need objects as they are already created before object creation
	cout<<(*sp)(20,10)<<endl;
	return 0;
}
