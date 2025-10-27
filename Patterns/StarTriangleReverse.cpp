#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a rows :";
    cin>>n;
    for(int i=1;i<=n;i++) // loop for rows
    {
      for(int j=1;j<=n-i;j++)
      {
      cout<<"  ";
    }
       for(int j=1;j<=i;j++) // loop for column
       {
        cout<<"* ";
       }
       cout<<endl;
    }
}