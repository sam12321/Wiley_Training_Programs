#include<iostream>
using namespace std;

void quick_sort(int *a,int low,int high)
{

	int pivot=a[low];
	int i=low;
	int j=low+1;
	if(low>=high) return;

	while(j<high)
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
	  int t=a[i];
	  a[i]=pivot;
	  a[low]=t;

	  quick_sort(a,low,i-1);
	  quick_sort(a,i+1,high);

}

int main()
{
int a[5]={5,2,7,8,1};
//int a[10]={12,5,7,32,45,90,9,19,78,3};
int n=5;
int low=0;
int high=5;

#if 0
Bubble
for (int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

Insertion
for(int i=0;i<n;i++)
{
	int temp=a[i];
	int j=i-1;
	while(j>=0 && temp<a[j])
	{
		int t=a[j+1];
		a[j+1]=a[j];
		a[j]=t;
		j--;
	}
	a[j+1]=temp;

}

#endif

quick_sort(a,low,high);

for(int i=0;i<n;i++)
cout<<a[i]<<endl;

return 0;
}
