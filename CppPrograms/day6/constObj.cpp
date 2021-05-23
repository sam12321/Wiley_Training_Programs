// Constant Objects

#include<iostream>
using namespace std;

class Data
{
	private:
		int count=50;
	public:
		Data(){count=100;}
		void incCount(){
			count=count+1;
		}
		int getCount(){
			return count;
		}
};
int main(){
const Data d; // a constant object
cout<<d.getCount();
//d.incCount(); // will give error as object is constant and cannot increment count
//cout<<d.getCount();

return 0;
}
  
