#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a "<<endl;
   cin>>a;
  cout<<"enter b "<<endl;
  cin>>b;
  cout<<"enter c "<<endl;
  cin>>c;
  if((a+b)>c && (c+a)>b && (b+c)>a)
  {
    cout<<"valid triangle"<<endl;
  }else 
  {
    cout<<"invalid triangle"<<endl;
  }
   

}