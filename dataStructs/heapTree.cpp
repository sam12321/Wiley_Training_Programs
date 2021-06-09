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

//---

void set_tree(int *ht,int root_index,int last_index) // For deletion
{
  if(last_index == 2)
  {
    if(ht[0] > ht[1])
    {
      int temp = ht[0];
      ht[0] = ht[1];
      ht[1] = temp;
    }
    return;
  }
	int left_index=root_index*2 + 1;
	int right_index = root_index*2 + 2;

	if(left_index<last_index && right_index<last_index)
	{

	  if(ht[root_index]<ht[left_index] && ht[root_index]<ht[right_index])
	  	  return;
	  else
	  {
		if(ht[left_index]<ht[right_index])
		{
			int temp=ht[root_index];
			ht[root_index]=ht[left_index];
			ht[left_index]=temp;
			set_tree(ht,left_index,last_index);
		}

		else 
		{	int temp=ht[root_index];
                        ht[root_index]=ht[right_index];
                        ht[right_index]=temp;
			set_tree(ht,right_index,last_index);
		}
	  }
        }
	else if(left_index<last_index)
	{
		if(ht[root_index]<ht[left_index])
		{
                        int temp=ht[root_index];
                        ht[root_index]=ht[left_index];
                        ht[left_index]=temp;

		}
	}
	else if(right_index<last_index)
	{
		if(ht[root_index]<ht[right_index])
		{
			int temp=ht[root_index];
                        ht[root_index]=ht[right_index];
                        ht[right_index]=temp;

		}
	}
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

//-------------------------day-2------------------------

current_index--;

while(current_index>0)
{
	int deleted=ht[0];
	cout<<"deleted element : "<<deleted<<endl;
	ht[0]=ht[current_index];
	set_tree(ht,0,current_index);
	//print_tree(ht,current_index);
	current_index--;
	//break;

}
cout<<ht[current_index]<<endl;
return 0;
}
