#include<iostream>
using namespace std;

class Student{

int id=5;
char gender;
public:

Student(int id,char gender){ // parameterized constructor
	this->id=id;
	this->gender=gender;
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
Student s1(99,'Y'); // S1 is function with ret type as  Student
cout<<s1.showID()<<" "<<s1.showGen()<<endl;	
return 0;
}
