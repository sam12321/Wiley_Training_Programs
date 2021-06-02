#include<iostream>
using namespace std;


void check_tree(int *ht,int current_index)
{

	if(current_index==0) return;
	int root_index=(current_index-1)/2;
	if(ht[root_index]>ht[current_index])
	{
		int temp=ht[root_index];
		ht[root_index]=ht[current_index];
		ht[current_index]=temp;
		
		// using recursion
		check_tree(ht,root_index);
	}
}

void print_tree(int *ht,int current_index)
{
	for(int i=0;i<current_index;i++)
		cout<<ht[i]<<",";
	cout<<endl;
}

int main()
{
int data[20] = {3,14,7,46,9,15,32,1,18,26};
int ht[10];
int current_index=0;

for(int i=0;i<10;i++)
{
	ht[current_index]=data[i];
	check_tree(ht,current_index);
	current_index++;
	print_tree(ht,current_index);

}
return 0;
}
