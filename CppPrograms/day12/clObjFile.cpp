// Practice
//
// Storing am object in binary format and then reading it

#include<iostream>
#include<fstream>
using namespace std;

class A{

	public:
		int id;
		A(int i){
		id=i;
		}
		A(){
			id=0;
		}
};

int main()
{
	A obj(10);
//ifstream in("input.txt");
ofstream out("output.txt");

out.write((char *) &obj,sizeof(obj));

out.close();

ifstream in("output.txt");
A j;
in.read((char *) &j,sizeof(obj));
in.close();
cout<<j.id;

return 0;
}
