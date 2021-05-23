// Class Level Variables
#include<iostream>
using namespace std;

class Student{
	private:
		Student(){
			cout<<"Student constr...."<<endl;
	}
	static Student* myObj;
public:
	static Student* createObj()
	{
                if(Student::myObj==NULL){ // checks if obj allready created
		  Student::myObj=new Student();
		cout<<"self constructor called......"<<endl;
		}
		return Student::myObj;
	}

	void display(){

		cout<<"Student Display....."<<endl;
	}

};

Student* Student::myObj=NULL;

int main(){
Student *o1=Student::createObj();
o1->display();

Student *o2=Student::createObj();

return 0;
}
