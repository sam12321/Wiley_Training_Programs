#include<iostream>
#include<deque>
using namespace std;

template <typename T>
class myDeque : public deque<T>
{
	public:
	myDeque():deque<T>::deque()
	{

	}
};

	
int main()
{
 mydeque<int> dq;
 dq.push_back(10);
 dq.push_front(1);
 dq.push_back(9);
 dq.push_back(2);
 dq.push_back(8);
 dq.push_front(3);
 dq.push_front(7);
 dq.push_front(4);

 for(int i:dq)
 {
	 cout<<"element : "<<i<<endl;
 }
 cout<<"------------"<<endl;

}
