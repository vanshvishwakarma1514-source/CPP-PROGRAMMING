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
    for(int i=1;i<=n;i++) // loop for rows
    {
       for(int j=1;j<=m;j++) // loop for column
       {
        cout<<" * ";
       }
       cout<<endl;
    }
}