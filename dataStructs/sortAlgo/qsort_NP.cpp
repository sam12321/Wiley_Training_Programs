#include<iostream>
using namespace std;

int main()
{
	int a[5]={12,5,7,32,45};

	int pivot=a[0];
	int i=0;
	int j=1;

	while(j<10 &&)
	{
		if(a[j]<pivot)
		{
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		j++;
	}
	int temp=a[i];
	a[i]=pivot;
	a[0]=temp;
	
	for(int i=0;i<5;i++)
	cout<<a[i]<<endl;

return 0;
}
