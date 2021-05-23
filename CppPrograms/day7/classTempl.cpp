// Class Templates
// similar to class functions

#include<iostream>
using namespace std;
template<typename T,typename U>
class List{

	T a[10];
	U b[10];
	int count;

public:
	List()
	{
	  count=0;
	}
	void add(T e)
	{
	  a[count]=e;
	  b[count]=(U)e;
	  count++;
	}
void show()
{
for(int i=0;i<count;i++)
	cout<<a[i]<<" , "<<b[i]<<endl;
}

};

int  main(){
List <int,float> list1;
list1.add(10);
list1.add(11.5f);
list1.add(12.6f);
list1.add(15.2f);
list1.show();
return 0;
}
