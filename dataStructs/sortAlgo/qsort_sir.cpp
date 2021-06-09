#include <iostream>

using namespace std;


void print(int *a, int low, int high)
{
  for(int i=low; i<high;i++)
  {
    cout << a[i] << ",";
  }
  cout << endl << "---------------" << endl;
  cout << endl;
}

void quick_sort(int *a, int low, int high)
{
  int pivot = a[low];
  int i = low;
  int j = low+1;
  if(low >= high) return;
  while(j < high)
  {
    if(a[j] < pivot)
    {
      i++;
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
    j++;
  }
  int temp = a[i];
  a[i] = pivot;
  a[low] = temp;

  quick_sort(a, low, i-1);
  quick_sort(a, i+1, high);
}

int main()
{
  int a[10] = {12,5,7,32,45,90,9,19,78,3};
  int low=0, high=10;
  print(a, low , high);
  quick_sort(a, low, high);
  print(a, low , high);
}
