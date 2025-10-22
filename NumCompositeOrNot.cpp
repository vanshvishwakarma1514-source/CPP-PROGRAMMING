#include<iostream>
using namespace std;
int main()
{
     cout<<"enter a number:";
    int n;
     cin>>n;
     int i;
     bool x = true;  // true means prime
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
       {
           x = false;
           break; // false means composite
       }
    }
       if(x == true)
        cout<<"prime";
       else
        cout<<"composite";
}