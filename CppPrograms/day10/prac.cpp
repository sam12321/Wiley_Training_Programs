#include<iostream>
#include<list>
using namespace std;

int main()
{
auto f=[] () {cout<<"hi"<<endl;}; // lambda fn
f();

list<int> ls;

for(int i=1;i<10;i++)
	ls.push_back(i);

ls.remove_if([] (int a) {return a%2==0;});

for(int i:ls)
	cout<<i<<endl;

cout<<"------------"<<endl;

int count=0;

auto g = [&] () {count++;cout<<count<<endl;};
g();
cout<<count<<endl;

return 0;
}
