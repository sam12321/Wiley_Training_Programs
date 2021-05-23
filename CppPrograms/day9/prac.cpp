#include<iostream>
#include<map>
using namespace std;

int main()
{
map<int,int> mymap;

mymap.insert({10,100});
mymap[20]=200;
mymap.insert(pair<int,int> (30,200));

for(pair<int,int> p:mymap){
	cout<<p.first<<"->"<<p.second<<endl;
}

mymap[40]=400;

cout<<"---------Using Iterator----------"<<endl;

map<int,int>::iterator it= mymap.begin();

while(it!=mymap.end())
{
cout<<(*it).first<<"->"<<(*it).second<<endl;
it++;
}

return 0;
}
