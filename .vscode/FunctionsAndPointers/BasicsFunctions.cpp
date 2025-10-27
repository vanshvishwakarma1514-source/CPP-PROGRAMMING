#include<iostream>
using namespace std;
void usa()
{
cout<<"good morning";
return;  // return ke neeche jo bhi cout mai hoga print nai hoga...
cout<<"hello";
}
int main()
{
    usa(); // function call
}