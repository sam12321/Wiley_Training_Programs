// C++ String Class
#include<iostream>
#include<string>
using namespace std;

int main(){
//string str="sample text";
string str("sample text");
int len = str.length();
cout<<"str.length : "<<len<<endl; // gets length
cout<<str[5]<<endl;
cout<<"str.at[5] : "<<str.at(5)<<endl; // gets the value at 5th pos
char &ch=str.back(); // gets last charcter
cout<<"last char : "<<ch<<endl;
char *data = str.data();
const char *data2=str.data();
cout<<"data : "<<data2<<endl;
cout<<"str.empty : "<<str.empty()<<endl; // checks if string empty or not
str.clear(); // empties the string

cout<<"........"<<endl;

string str2("sample text");
cout<<"initial capacity : "<<str2.capacity()<<endl;
cout<<str2.length()<<endl;
str2.append("Abbhjb");
cout<<"new capacity : "<<str2.capacity()<<endl;
cout<<str2.length()<<endl;

char ch[64];
getline(cin,ch); // can take spaces also cin will not
cout<<ch<<endl;
return 0;
}
