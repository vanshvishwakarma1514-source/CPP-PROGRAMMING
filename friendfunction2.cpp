#include<iostream>
using namespace std;

class Amit; // Forward declaration

class Suresh {
    friend class Amit;
    int amt;
public:
    void set_amt(int a)
    {
        amt = a;
        cout << "the amount of suresh is " << amt << endl;
    }
};

class Amit {
    friend class Suresh;
    int amt;
public:
    void amount(int a) {
        amt = a;
        cout << "the amount of amit is " << amt << endl;
    }
};

int main()
{
    Suresh suresh;
    Amit amit;
    suresh.set_amt(100);
    amit.amount(200);
    return 0;
}
