// Bubble sort

#include<iostream>
using namespace std;

int main()
{
int arr[5]={4,1,5,2,3};

int n=5;

for(int i=0;i<5;i++)
{
	for(int j=i+1;j<5;j++)
	{
		if(arr[i]>arr[j])
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}
for(int i=0;i<5;i++)
cout<<arr[i]<<endl;


return 0;
}
