#include<iostream>
#include<string>
using namespace std;
int main(){
cout<<"----------String Functions ------------"<<endl;
string str("SAMPLE TEXT");
cout<<"string : "<<str<<endl;
cout<<"str.length() : "<<str.length()<<endl;
cout<<"str.back() : "<<str.back()<<endl;
cout<<"str.front() : "<<str.front()<<endl;
cout<<"str.empty() : "<<str.empty()<<endl;
str.push_back('I');
cout<<"str.push_back('I') : "<<str<<endl;
cout<<"str.capacity() : "<<str.capacity()<<endl;
cout<<"sizeof(str) : "<<sizeof(str)<<endl;
str.append("ABC");
cout<<"str.append('ABC') : "<<str<<endl;
cout<<"str.capacity() : "<<str.capacity()<<endl;
cout<<"sizeof(str) : "<<sizeof(str)<<endl;
str.clear();
cout<<"str.clear() : "<<str<<endl;

return 0;
}
