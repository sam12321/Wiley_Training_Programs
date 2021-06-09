#include<iostream>
#include<vector>
using namespace std;

struct Node
{
int id;
bool trav;
char name;
};

Node create_node(int i,bool t,char nm)
{
Node a;
a.id=i;
a.trav=t;
a.name=nm;
return a;
}

class Grph
{
	public:
		vector<Node> vec;
		vector<Node> stack;
		char arr[5]={'A','B','C','D','E'};
		int stack[5];
		int mat[5][5];
		//vector<char> stack;
		Grph(int m[][5])
		{
			for (int i=0 ; i < 5; i++)
			{
  				for (int j=0 ; j < 5; j++)
  				{
    					mat[i][j]=m[i][j];
  				}
			}	
		}
		
		void ins(Node a)
		{
			vec.push_back(a);
		}

		void iter()
		{	
			vector<Node>::iterator it=vec.begin();
			while(

		}

		void disp()
		{
			for(Node a:vec)
			{
				cout<<a.id<<endl;
			}
		}
};


int main()
{
// A B C D E

int c_g[5][5]={0,1,1,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,1,1,0};

Grph obj(c_g);
obj.ins(create_node(0,false,'A'));
obj.ins(create_node(1,false,'B'));
obj.ins(create_node(2,false,'C'));
obj.ins(create_node(3,false,'D'));
obj.ins(create_node(4,false,'E'));

obj.disp();

return 0;
}
