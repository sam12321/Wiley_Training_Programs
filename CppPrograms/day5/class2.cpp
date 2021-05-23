#include<iostream>
using namespace std;

class Student{

int id=5;
char gender;
public:

Student(int i,char gen){ // parameterized constructor
	id=i;
	gender=gen;
	//cout<<"id :"<<id<<endl;
	//cout<<"gender :"<<gender<<endl;
}

Student(){ // empty constructor
cout<<"no parameters given......"<<endl;
}

Student(Student &s){

id=s.id;
gender=s.gender;
//temp=NULL;
}

~Student(){
cout<<"destructor called..."<<endl;
//delete temp;
}

void setID(int i){
id=i;
}

int showID(){
return id;
}

void setGen(char gen){
	gender=gen;
}

char showGen(){
	return gender;
}
};

int main(){
#if 0
Student f1(); // not an obeject | function with return type as Student
#endif
Student s1; // will create in stack
cout<<s1.showID()<<endl; 
Student *s2=new Student(); // Student and base address | will create in heap
cout<<s2->showID()<<endl;
delete s2; //Clearing stack
return 0;
}
