// Fstream | Reading from a file and printing it's characters

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream inf("input.txt"); // ../demo.txt - will mean file is in previous directory
char ch;

inf.seekg(5); // goes to the 5th position from beginning
cout<<"at position : "<<inf.tellg()<<endl; // tells the position of the pointer

while(!inf.eof())
{
	inf.get(ch);
	cout<<"char :"<<ch<<endl;
}


return 0;
}
