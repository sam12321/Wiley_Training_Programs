#include<iostream>
using namespace std;

class Car
{	
	public:
	virtual void showName()=0;
	virtual Car* clone()=0;
	string name;
	void setName(string s){
	name=s;
	}
	string getName()
	{
		return this->name;
	}
};

class Mahindra: public Car
{
	public:
		void showName()
		{
			cout<<name<<endl;
		}
		Car* clone()
			{
				return new Mahindra(*this);
			}
};
int main()
{

	Car *car1=new Mahindra();
	car1->setName("XUV300");
	Car *car2=car1->clone();
	car2->setName("XUV500");
	cout<<"Car1: ";
	car1->showName();
	cout<<endl;
	cout<<"Car2: ";
        car2->showName();
        cout<<endl; 
}	
