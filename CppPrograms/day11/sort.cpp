// Sort Function
// Sorts the given data container

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(int a,int b)
{
return a<b;

}

int main()
{

	int a[]={10,5,7,2,9,3,4,1,8,6};

	for(int i:a)
		cout<<i<<endl;
	//sort(a,a+10);
	sort(a,a+10,compare); // using compare function
	cout<<"sorted..."<<endl;

	for(int i:a)
		cout<<i<<endl;

return 0;

}
