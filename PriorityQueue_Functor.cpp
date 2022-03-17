// Functor = Functional Object

#include<bits/stdc++.h>
using namespace std;

class Fun{
  public:
     void operator()(){
         cout<<"Having Fun inside Operator() Fn!"<<endl;
     }
     void operator()(string s){
         cout<<"Having Fun with "<<s<<endl;
     }
};



int main()
{
    Fun f; // f is object of Fun class  Constructor call
    f();   // Overloaded () operator call = looks like function call where f is an object
    f("C++");

  
    return 0;
}