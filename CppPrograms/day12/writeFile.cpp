// ofstream
// writing to a file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream out("output.txt",ios::out|ios::trunc);

out<<"hello how are you?"; // to write characters but not binary data

out.put('A'); // can put a single char only in the file

out.put('\n'); // puts new line

int i=999;

out.write((char*) &i,sizeof(i)); // can write binary char also | puts 999 in hexa value

out.close();

//char name[64]="Test data";
//out.write(name,strlen(name); // takes only character pointer

ifstream inf("output.txt");
int j=0;
inf.read((char *) &j,4);
inf.close();

return 0;
}
