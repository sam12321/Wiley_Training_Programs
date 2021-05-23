// Template Inheritance
// similar to class functions

#include<iostream>
using namespace std;


template<typename T>
class Base{
	public:
		Base(T a)
		{
			cout<<"Base:a="<<a<<endl;
		}
};

template<typename T>
class Derived : public Base<T> // indicate template classs
{
	public:
		Derived(T a):Base<T>::Base(a) // 
	{
		cout<<"Derived:a="<<a<<endl;
	}

};

int  main(){
	Derived d(10);
return 0;
}
