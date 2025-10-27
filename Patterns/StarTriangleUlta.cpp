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
//     for(int i=1;i<=n;i++)
//     {
//        for(int j=1;j<=n+1-i;j++) 
//        {
//         cout<<"*"<<" ";
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
//     for(int i=1;i<=n;i++)
//     {
//        for(int j=1;j<=n+1-i;j++) 
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
//     for(int i=1;i<=n;i++)
//     {
//        for(int j=1;j<=n+1-i;j++) 
//        {
//         cout<<char (j+64)<<" ";
//        }
//        cout<<endl;
//     }
// }

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
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n+1-i;j++) 
       {
        cout<<i<<" ";
       }
       cout<<endl;
    }
}