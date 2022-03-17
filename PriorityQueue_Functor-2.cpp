// Functor = Functional Object

#include<bits/stdc++.h>
using namespace std;


class Person{
    public:
        string name;
        int age;

    public:
        Person()
        {

        }   
    Person(string s,int n)
    {
        name = s;
        age = n;
    }   
};

class PersonCompare
{
   public:
   bool operator()(Person p1,Person p2)
   {
    //    cout<<"comparing "<<p1.age<<" and "<<p2.age<<endl;
       return p1.age < p2.age;
   }
};

int main()
{
    int n;
    cin>>n;

    priority_queue<Person,vector<Person>,PersonCompare> pq;

    
   for(int i=0;i<n;i++)
   {
       string name;
       int age;
       cin>>name>>age;
       Person p(name,age);
       pq.push(p);
   }
   int k=3;
   for(int i=0;i<k;i++)
{
    Person p = pq.top();
    cout<<p.name<<" "<<p.age<<endl;
    pq.pop();
}
    return 0;
}