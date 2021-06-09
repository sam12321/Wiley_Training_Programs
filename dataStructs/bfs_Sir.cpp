#include <iostream>

#define MAX 100

using namespace std;

template <typename T>
class Stack
{
  private: int index;
	   T stack[MAX];

  public:
	   Stack()
	   {
	      index = -1;
	   }

	   bool is_empty()
	   {
	     return index == -1;
	   }

	   void push(T e)
	   {
	     stack[++index] = e;
	   }

	   T top()
	   {
	     return stack[index];
	   }

	   T pop()
	   {
	     return stack[index--];
	   }

	   int length()
	   {
	     return index + 1; 
	   }
};

bool visited[5]; // 0,1,2,3,4

int route[5][5];

void add_edge(int from, int to)
{
  route[from][to] = 1;
}

int next_vertex(int vertex)
{
  for(int i=0; i < 5; i++)
  {
    if(route[vertex][i] == 1 && !visited[i])
     return i;
  }
  return -1;
}

#if 0
void bfs(int vertex, int prv_index)
{
  cout << "vertex:" << vertex << ",prv_index:" << prv_index << endl;
  int nv = next_vertex(vertex);
  if(nv != -1)
  {
    cout << "next vertex:" << nv << endl;
    visited[nv] = true;
    bfs(nv, vertex);
  }
  else
  {
    cout << "go back to again " << prv_index << endl;
    bfs(2,0);
  }
}
#endif

int main()
{
  for(int i=0; i < 5; i++)
  {
    visited[i] = false;
    for(int j=0; j < 5; j++)
      route[i][j]=0;
  }
  
  add_edge(0,1);
  add_edge(0,3);
  add_edge(0,4);
  add_edge(1,2);
  //add_edge(2,3);
  add_edge(2,4);

  visited[0] = true;
  int vertex = 0;
  Stack<int> stack;
  stack.push(0);

  cout << "now at : 0" << endl;
  bool found = false;
  while(stack.length() > 0)
  {
    found = false;
    int current_vertex = stack.top();
    cout << "now current node: " << current_vertex << endl;
    for(int i=0; i < 5; i++)
    {
      if(route[current_vertex][i] == 1 && !visited[i])
      {
         cout << "now at :" << i << endl;
	 int nv = i;
	 stack.push(nv);
	 visited[i] = true;
	 found = true;
	 break;
      }
    }
    if(!found)
    {
      int old = stack.pop();
      cout << "no more route from " << old << endl;
    }
  }
  cout << endl;
}

