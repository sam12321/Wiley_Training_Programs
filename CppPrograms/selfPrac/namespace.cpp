
// namespace is used when we have to give multiple variables of same name
// multiple versions of same variable

#include<iostream>
using namespace std;

namespace n1{
	namespace n2{
		int a=20;
	}

	int a=10;
}
namespace {int a=40;} // same as declaring globally | avoids usage by other files
namespace n3{
	int a=30;
}
int main(){
//	using namespace n1; // will create ambiguity and give error
cout<<a<<endl;
	return 0;
}
