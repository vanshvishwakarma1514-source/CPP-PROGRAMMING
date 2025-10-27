#include<iostream>
using namespace std;
void usa()

{
cout<<"you are in usa";
}
void india()
{
    cout<<"you are in India"<<endl;
    usa();
}
int main()
{
    india(); // function call
}