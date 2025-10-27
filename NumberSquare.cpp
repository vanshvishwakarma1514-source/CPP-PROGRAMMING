// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter a rows :";
//     cin>>n;
//     int m;
//     cout<<"enter a column :";
//     cin>>m;
//     for(int i=1;i<=n;i++) // loop for rows
//     {
//        for(int j=1;j<=m;j++) // loop for column
//        {
//         cout<<j<<" ";
//        }
//        cout<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter a rows :";
//     cin>>n;
//     int m;
//     cout<<"enter a column :";
//     cin>>m;
//     for(int i=1;i<=n;i++) // loop for rows
//     {
//        for(int j=1;j<=m;j++) // loop for column
//        {
//         cout<<i<<" ";
//        }
//        cout<<endl;
//     }
// }

// Alphabet square pattern 

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
        cout<<char (j+64)<<" ";
       }
       cout<<endl;
    }
}