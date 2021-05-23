// Dybamiic Array

#include<iostream>
using namespace std;

#define MAX 64

class DynArray{
	
	public:
		int count;
		int array[MAX];
		int somenum; // used in operator >>
	DynArray(){
		count=0;
	}
	int get(int index)
	{
		if(index<count)
			return array[index];
		return -1;
	}
	void add(int i){
		if(count<MAX)
		{
			array[count]=i;
			count++;
		}
	}
	int& operator[](int index) // take point of &
	{	if(index<count)
			return array[index]; // reterns the reference of that location
		return array[0];
	}

	void operator*(int mul){
		for(int index=0;index<count;index++)
			array[index]=array[index]*mul;
	}
	/*
	void operator++(int i){
		cout<<"operator with i:"<<i<<endl;
	}*/
};
	void operator<<(ostream &out,DynArray &d){
	cout<<d.count<<endl;
	}

	void operator>>(istream &in,DynArray &d){
	cout<<"Give data to d"<<endl;
	cin>>d.somenum;
	cout<<"number taken!!..."<<endl;
	}


int global=100;
int ret_global(){
	return global;
}

int main(){

DynArray d;
d.add(10);
d.add(20);
d.add(40);
d.add(30);
d.add(50);

d[1]=111;

cout<<d[1]<<endl;
d[1]=111;
d*10; //d.operator*[10]
cout<<d[1]<<endl;


cout<<"------------"<<endl;
cout<<d;

cin>>d;

return 0;
}
