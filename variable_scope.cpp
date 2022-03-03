#include<bits/stdc++.h>
using namespace std;

// Scope of variable  -> defined for variables(accessible -> lifetime and visibility)
// 1. Local Scope -> variables defined inside a function
// 2. Global Scope -> variables defined outside a function


// Global scope
int x=100;

int main()
{
 
   int x=10;
   // int x=20;  // error -> redeclaration of variable, hum ek hi variable ko redeclare ek hi scope me nhi kr skte hai
   cout<<"x = "<<x<<endl;   // x = 10 (local scope)(pahle local me search hota he agar nhi milta he to phir global me search hota he)
   

   for(int x=0;x<=5;x++)
   {
       cout<<"Loop Scope "<<x<<endl;
   }

   
   cout<<"x = "<<x<<endl;   // x = 10 (local scope)(pahle local me search hota he agar nhi milta he to phir global me search hota he)


   cout<<"x = "<<::x<<endl; // x = 100 (global scope) 
    return 0;
}