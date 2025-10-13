#include<iostream>
using namespace std;
class Cars{
    public:
            void startengine()
            {
                cout<<"engine Started"<<endl;
            }
};
class Driver:public Cars
{
    public:
            void Driving()
            {
                cout<<"Drives the car"<<endl;
            }
};

int main()
{
    Cars ca;
    Driver D;
    ca.startengine();
    D.startengine();
    return 0;
}