// Operator Overloading

#include<iostream>
using namespace std;



class Number{

	public:
	int no;

	Number(int no){
this->no=no;
	}
	void operator*(int i) // overloading the operators
	{
		cout<<"In operator int+"<<i<<endl;
		this->no=this->no*i;

	}

	int operator+(Number &n) // overloading the operators
        {
                cout<<"In operator int+"<<endl;
                return(this->no+n.no);

        }

};


int main(){

Number n1(10),n2(20);

cout<<"before:"<<n1.no<<endl;
n1*2;
cout<<"after:"<<n1.no<<endl;

int result =n1 + n2;
cout<<"result is :"<<result<<endl;
// n1+n2 // will give error

return 0;
}
