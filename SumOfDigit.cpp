#include<iostream>
using namespace std;
int main ()
{
   cout<<"enter a num:";
   int n;
   cin>>n;
   int sum =0;
   while(n!=0)
   {
    int ld= n%10;
    n= n/10;
    sum += ld;  //sum mai last digit add hoga

   }
   cout<<sum;
}