#include<iostream>
using namespace std;
class Car
{
	public:
		virtual void showName()=0;
		virtual void getPrice()=0;
};

class Dezire:public Car
{
	public:
		void showName()
		{
			cout<<"I am Dezire"<<endl;
		}
		void getPrice(){
			cout<<"pprice is 222"<<endl;
		}
	};

class WagonR:public Car
{
        public:
                void showName()
                {
                        cout<<"I am wagonr"<<endl;
                }
                 void getPrice(){
                        cout<<"price is 334443"<<endl;
                }
        };

class Alto:public Car
{
	public:
		void showName()
		{
			cout<<"I am Alto"<<endl;
		}
		 void getPrice(){
                        cout<<"price is 333"<<endl;
                }
        };

class Kia1 : public Car
{
  public:
        void showName()
        {
          cout << "I am Kia1" << endl;
        }

        void getPrice()
        {
          cout << "My price is 6666" << endl;
        }
};


class Kia2 : public Car
{
  public:
        void showName()
        {
          cout << "I am Kia3" << endl;
        }

        void getPrice()
        {
          cout << "My price is 77777" << endl;
        }
};

class Kia3 : public Car
{
  public:
        void showName()
        {
          cout << "I am Kia3" << endl;
        }

        void getPrice()
        {
          cout << "My price is 9999" << endl;
        }
};




class CarFactory
{
	public:
	static CarFactory* getCarFactory(char fc);
	virtual Car* getCar(char code)=0;
};

class MaruthiFactory:public CarFactory
{
public:

	Car* getCar(char code)
{
	if(code=='W')
		return new WagonR();
	else if(code=='A')
		return new Alto();
	else if(code=='D')
		return new Dezire();
	else 
		return NULL;
}
};
//---------
class KiaFactory: public CarFactory
{

public:

	Car* getCar(char code)
{
        if(code=='1')
                return new Kia1();
        else if(code=='2')
                return new Kia2();
        else if(code=='3')
                return new Kia3();
        else
                return NULL;
}
};

CarFactory* CarFactory::getCarFactory(char fc)
{
        if(fc=='M')
                return new MaruthiFactory();
        else if(fc=='K')
                return new KiaFactory();
}



int main()
{
/*	Car *car =getCar('W');
	//Car *car=new WagonR();
	car->showName();
	car->getPrice();
*/
	CarFactory *cf = CarFactory::getCarFactory('M');
	Car *car =cf->getCar('W');
	car->showName();
	car->getPrice();
	

}

