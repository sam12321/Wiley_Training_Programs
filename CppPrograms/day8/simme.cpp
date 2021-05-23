#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> sims;
sims.push_back(10);
sims.push_back(20);
sims.push_back(30);
sims.push_back(40);
sims.push_back(50);
sims.push_back(60);

vector<int>::iterator it=sims.begin();
while(it!=sims.end())
{
cout<<*it<<endl;
it++;
}
return 0;
}
