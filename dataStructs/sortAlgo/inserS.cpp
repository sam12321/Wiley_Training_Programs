// Insertion Sort

#include<iostream>
using namespace std;

int main()
{

int arr[5]={4,2,5,1,3};

int n=5;

int sb=0;

for(int i=0;i<n;i++)
{
	int temp =arr[i];
	int j=i-1;
	
	while(j>=0 &&temp<=arr[j])
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
}

for(int i=0;i<5;i++)
{
cout<<arr[i]<<endl;
}

return 0;
}
