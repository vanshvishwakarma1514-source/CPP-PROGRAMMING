 // factors of a numbers program

#include<iostream>
using namespace std;
int main()
{
     cout<<"enter a number:";
    int n;
     cin>>n;
     int i;
     int f=1; //store highest factor
    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
       cout<<i<<endl;
       break ;
       
    }
}