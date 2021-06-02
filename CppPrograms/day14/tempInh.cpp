#include<iostream>
using namespace std;

template<typename T>
class A
{

	public:

		T a;

		T add(T a,T b)
		{
			return a+b;
		}

		A(T a)
		{
			this->a=a;
			cout<<this->a<<endl;
		}

};

template<typename T,typename U>
class B: public A<T>
{
	public:
	B(U b,T a):A<T>::A(a)
	{
		cout<<"DErived :a="<<a<<endl;
		cout<<"float:"<<b<<endl;
	}

};

int main()
{

//A<int> obj(5);
//cout<<obj.add(8,9)<<endl;

B obj(5.9f,5);
return 0;
}
