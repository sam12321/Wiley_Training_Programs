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

Student obj(10,'M');
//obj.setID(100);
//obj.setGen('F');
Student obj2(obj);
cout<<obj.showID()<<" "<<obj.showGen()<<endl;
cout<<"-----------obj2-----------"<<endl;
cout<<obj2.showID()<<" "<<obj2.showGen()<<endl;
return 0;
}
