// Fstream | Reading from a file and printing it's characters
// Getline function
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream inf("input.txt"); // ../demo.txt - will mean file is in previous directory

char line[80];

while(inf.getline(line,80))
{
	cout<<line<<endl;
}


return 0;
}
