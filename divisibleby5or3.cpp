#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a number"<<endl;
   int n; cin>>n;
   if(n%5==0 || n%3==0)
   {
    cout<< n <<" is divisible by 5 and 3"<<endl;
   }
   else 
{
    cout<< n <<" is not divisible by 5 and 3"<<endl;
}

}