#include<iostream>
using namespace std;
 
class boy{
    public:
    void briliant()
    {
      cout<<"extra ordinary"<<endl;  
    }
};
    class girl
    {
        public:
        void duffer()
        {
            cout<<"brain is empty"<<endl;
        }
    };
int main()
{
    boy b;
    girl g;
    b.briliant();
    g.duffer();
    return 0;
}