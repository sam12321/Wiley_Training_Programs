#include<iostream>
#include<vector>

using namespace std;

class myVec{
	vector<int> vec;
	vector<int>::iterator it;
	int count=0;	
	public:
		myVec(vector<int> &vec){
		this->vec=vec;
		it=this->vec.begin();
		}
	void show(){
        it=vec.begin();
        while(it!=vec.end()){
                cout<<*it<<endl;
		it++;
	}
	}
	int size() // .size()
	{
	//	return vec.size();
		
	it=vec.begin();
	while(it!=vec.end()){
		count++;
		it++; }
       return count;	

	}

	void push_back(int i){ // .push_back()
	//  vec.end()+1=vec.end();
	 // it=vec.end();
	  //*it=i;
	vec.insert(vec.end(),i);
	}

	void pop_back(){ // .pop_back()
	it=vec.end()-1;
	vec.erase(it);
	}

	int front(){ // .front
	it=vec.begin();
	return *it;
	}
	int back(){ // .back
	it=vec.end()-1;
	return *it;
	}

	void clear(){
		vec.clear();
	}
	void insert(vector<int>::iterator p,int val){
	vec.insert(p,val);
	}

	void erase(vector<int>::iterator p,int val){
	vec.erase(p);
	}

	void remove_if(bool fun(int ))
	{
	it=vec.begin();
	while(it!=vec.end()){
		if(fun(*it)){
			*it=0;
		}
		it++;
	}
	}

	int operator[](int i){
	  it=vec.begin();
	  int j;
	  for(j=0;j<i;j++)
	  it++;
	  return *it;
	}
};


bool is_even(int i){
	if(i%2==0)
	return true;
	else
		return false;
}

int main()
{
vector<int> v;
myVec obj(v);	
obj.push_back(10);
obj.push_back(20);
obj.push_back(30);
obj.push_back(40);
obj.push_back(55);
obj.push_back(60);
cout<<"size of vector : "<<obj.size()<<endl;
cout<<"first element : "<<obj.front()<<endl;
cout<<"last element : "<<obj.back()<<endl;
cout<<"element at 2nd  position : "<<obj[2]<<endl;
cout<<"--------------"<<endl;
cout<<"Displaying vector : "<<endl;
obj.show();
obj.pop_back();
cout<<"last element deleted!!"<<endl;
obj.show();
cout<<"--------------"<<endl;
cout<<"clearing vector"<<endl;
//obj.clear();
//obj.show();

obj.remove_if(is_even);
obj.show();
return 0;
}
