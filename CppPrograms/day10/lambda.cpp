// Lambda Function

#include<iostream>
#include<list>
#include<vector>
using namespace std;

int main()
{
/*

auto g=[] () {cout<<"hello";};
g();
*/

list<int> ls;

cout<<"inserting elements..."<<endl;
for(int i=1;i<=10;i++)
ls.push_back(i);

cout<<"removing even elements..."<<endl;
ls.remove_if([](int a){return a%2==0;}); // will remove all even values as they return true

for(int i:ls)
	cout<<i<<endl;

cout<<"-----------"<<endl;

int count=10;

auto f = [&count] (int i) mutable {count = count+90; return i +count;};
// mutable allows us to modify values of variables but does not store it
// with the help of reference we can change the values directly of the variable

cout<<f(10)<<endl;
cout<<count<<endl; // without reference count value will not be changed

return 0;
}
