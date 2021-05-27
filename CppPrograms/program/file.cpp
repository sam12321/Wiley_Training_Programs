#include<iostream>
#include<map>
#include<fstream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

ifstream inf("data.txt"); // data file

char ln[80];

map<string,vector<int>> mps;
while(inf.getline(ln,80))
{
	vector<int> vec;	
	int i=0;	
	string nm; 
	string mrks;
	string line=ln;
	// getting name
	while(line[i]!=',')
	{
		nm+=line[i];
		i++;
	}
	i++;
	cout<<nm<<endl;
	// getting marks
	while(i!=line.length())
	{
		mrks+=line[i];
		i++;
	}
	cout<<mrks<<endl;
	int mk1=stoi(mrks.substr(0,2));
	int mk2=stoi(mrks.substr(3,5));
	int mk3=stoi(mrks.substr(6,8));
	// inserting marks in vector
	vec.push_back(mk1);
	vec.push_back(mk2);
	vec.push_back(mk3);
	// inserting name and marks in hashmap
	mps[nm]=vec;

}

vector<int> rank; // used for sorting

// calculating and inserting sum of marks
for(pair<string,vector<int>> p:mps)
{
	int sum=0;
	for(int i:p.second)
		sum+=i;
	p.second.push_back(sum);
	mps[p.first]=p.second;
	rank.push_back(sum);
}

sort(rank.begin(),rank.end(),greater<>()); // sorting sum of marks in reverse order

// for rank
for(pair<string,vector<int>> p:mps)
{
	vector<int>::iterator it=rank.begin();
	int n=1;
	while(it!=rank.end())
	{
		if(*it==p.second[3]) // using rank vector to find out rank of student
			break;
		else
		{
			n++;
			it++;
		}
	}
	p.second.push_back(n); // inserting rank in vector of hashmap
	mps[p.first]=p.second;
}

// displaying values in hash map
for(pair<string,vector<int>> p:mps)
{
        cout<<p.first<<":";
        for(int i:p.second)
        	cout<<i<<",";
	cout<<endl;
}

ofstream op("output.txt");

// inserting values in file
for(pair<string,vector<int>> p:mps)
{

	op<<p.first<<":";
	for(int i:p.second)
        op<<i<<",";
	op<<'\n';

}

return 0;
}
