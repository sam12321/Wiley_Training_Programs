// Fstream | Reading from a file and printing it's characters

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream inf("demo.txt");
char ch;

while(!inf.eof())
{
	inf.get(ch);
	cout<<"char :"<<ch<<endl;
}


return 0;
}
