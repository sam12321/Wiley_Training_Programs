#include<iostream>
using namespace std;

int main(){

auto a = 5.9f;
cout<<sizeof(a)<<endl; // sometimes useful to find out type but not always

cout<<typeid(a).name()<<endl; // will print i for integer and f for float like that

//auto b[]={1,2,3} // not valid

return 0;
}
