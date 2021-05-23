// Class Level Variables
#include<iostream>
using namespace std;

class Student{

int id=5;
char gender;
public:
int static count; // Class Level Variables | Like a notice board
// created before objects
// if one object updates it other objects see the updated value

static void display(){ // Class level function
	cout<<"In Student::display()"<<endl;
// id=5; // error as object variables are not created yet
cout<<count<<endl;
}

Student(int id,char gender){ // parameterized constructor
	this->id=id;
	this->gender=gender;
}
Student(){
}
};

int Student::count=100;
int main(){
Student s1;
cout<<s1.count<<endl;	
s1.count+=100;
Student s2;
cout<<s2.count<<endl;

Student::display();
return 0;
}
