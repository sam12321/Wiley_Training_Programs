// Diamond Problem , Inheritance
// Solved Using Virtual Inheritance / Virtual CLasses

#include<iostream>
using namespace std;


class A{
	public:
		int id;
		A(){
			cout<<"in A class"<<endl;
			id=5;
		}

		A(int i){
			cout<<"Class A constructor with integer value : "<<i<<endl;
		id=20;
		}
};

class B : virtual public A
{
	public:
	
	B():A(10){
		cout<<"in B class"<<endl;
	}

};




class C : virtual public A
{
        public:

        C(){
                cout<<"In C class"<<endl;
        }

};
class D : public B,public C
{
        public:

        D():A(10){
                cout<<"in D class"<<endl;
        }

};


int  main(){
D d;
cout<<d.id<<endl; // will create ambiguity without virtual inheritance
return 0;
}
