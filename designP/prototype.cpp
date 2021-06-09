// Prototyping
// Copying one object into another
// usefull when using Abstract classes as copy constructor will not work
// as no objects are created

#include<iostream>
using namespace std;

class Car 
{
	public:
		virtual void showName()=0;
		virtual Car* clone()=0;
		string name;
		 void setName(string name)
                {this->name=name;
                }
                string getName()
                {
                        return this->name;
                }

};

class WagonR : public Car
{
	public:
		void showName()
		{
			cout<<name<<endl;
		}
		
		Car* clone()
		{
			return new WagonR(*this); // *this returns current class object
		/*WagonR *t=new WagonR(*this);
		return t;*/
		}
};

int main()
{
	Car *car1=new WagonR();
	car1->setName("Accord");
	car1->showName();
	Car *car2=car1->clone();
	car2->setName("Crv");
	cout<<"---------------------"<<endl;
	cout<<"car1: ";
	car1->showName();
	cout<<endl;
	cout<<"car2: ";
	car2->showName();
	cout<<endl;
}
