// Abstract Class
// Defn : Incomplete Class
// has at least one virtual function
// Does not have an object
// Used as reference or interface to other classes

#include<iostream>
using namespace std;

class Human
{
char gender;
bool is_preg;
public:
  virtual char getGender()=0; // cannot be decided at this point
  virtual bool isPregnant()=0;
};

class Male:public Human{
	public:
		char getGender(){
			return 'M';
		}
		bool isPregnant(){
			return false;
		}

};


class Female:public Human{
        public:
                char getGender(){
                        return 'F';
                }
                bool isPregnant(){
                        return true;
                }

};


void showDetails(Human *m){
	cout<<m->getGender()<<","<<m->isPregnant()<<endl;
}

int main(){
// Human *h=new Human() // Not Allowed
Male *m=new Male();
showDetails(m);
Female *f=new Female(); // Not allowed
showDetails(f);
return 0;
}
  
