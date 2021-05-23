// Maps
// key-value pairs
#include<iostream>
#include<map>
using namespace std;

int main()
{

map<int,int> mymap;

mymap.insert(pair<int,int>(10,100));

mymap[20]=200;

mymap.insert({30,300});
cout<<"size:"<<mymap.size()<<endl;

cout<<mymap[10]<<endl;
cout<<mymap[20]<<endl;
cout<<mymap[30]<<endl;

mymap[20]=2000;
mymap[22]=2200;

cout<<"displaying pairs..."<<endl;

for(pair<int,int> p :mymap)
{
	cout<<p.first<<"=>"<<p.second<<endl;
}

cout<<"---------Using Iterators-----------"<<endl;

map<int,int>::iterator it=mymap.begin();

while(it!=mymap.end())
{
cout<<(*it).first<<"->"<<(*it).second<<endl;
it++;
}

return 0;
}
