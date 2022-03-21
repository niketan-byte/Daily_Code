#include<bits/stdc++.h>
using namespace std;

class Queue{
  int curr_size;
  list<int> l;

  public:
  Queue()
  {
      curr_size=0;
  }

  // isFull not possible in linked list because list can be added further as the requirement
  bool isEmpty()
  {
      return curr_size==0;
  }
  void push(int data)
  {
   l.push_back(data); 
   curr_size++;  
  }
    void pop()
  {
   if(!isEmpty())
   {
       curr_size--;
       l.pop_front();
   }
  }
  int get_front()
  {
      return l.front();
  }
};

int main()
{
    Queue q;
    for(int i=1;i<=10;i++)
    {
        q.push(i);
    }
    while (!q.isEmpty())
    {
        cout<<q.get_front()<<" ";
        q.pop();
    }
 
    
    return 0;
}