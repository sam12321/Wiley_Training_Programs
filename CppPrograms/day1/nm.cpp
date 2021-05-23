#include<iostream>
using namespace std;

int i=5;

namespace n1{
	int i=100;
};
namespace n2{
	int i=200;
	namespace n3{ // ns within a ns
		int j=300;
	} 

	namespace{  // anony. namespace
		int j=400;
	}

};

namespace{
int i=200; // same as a global variable
};

extern void display();
int main()
{
using namespace n1;
using namespace n2;
cout<<n1::i<<endl;
cout<<n2::n3::j<<endl; // namespace within namespace
cout<<n2::j<<endl; // anonymous namespace

cout<<"using extern variable:"<<endl;
display();
return 0;
}
