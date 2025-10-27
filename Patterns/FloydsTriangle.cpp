#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a rows :";
    cin>>n;
    int m;
    cout<<"enter a column :";
    cin>>m;
    int a ;
    a = 0;
    a++;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++) 
       {
        cout<<a++<<" ";
       }
       cout<<endl;
    }
}