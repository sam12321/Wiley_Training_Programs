// Deque
// Double ended queues
// can insert or delete from both ends

#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> dq;
	dq.push_back(10);
	dq.push_front(1);
	dq.push_back(9);
	dq.push_front(2);
	dq.push_back(8);
	dq.push_front(3);
	dq.push_back(7);
	dq.push_front(4);
	for(int ele:dq)
	{
		cout<<"element : "<<ele<<endl;
	}
	cout<<"---------------"<<endl;
}
