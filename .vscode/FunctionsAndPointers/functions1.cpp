#include<iostream>
using namespace std;

class One
{
    friend class Two;
    int a = 24;
    public:
    void show()
    {
        cout <<"this is class one"<<endl;
    }
};
class Two
{
    friend class One;
    public : 
    void show2()
    {
        cout << "And this is class Two"<<endl;
    }

void accessOneprivate(One &obj)
{
    cout<<"Accessing data of  base class"<<obj.a<<endl;
}

};
int main()
{
One O1;
Two O2; 
O2.accessOneprivate(O1);
}

#include<iostream>
using namespace std;

class Hero{
    protected:
    int power;
    public:

    void set_power(int p){
        power = p;
    }

    int get_power(){
        return power;
    }
};
class Villan{
    protected:
    int power;

public:
    void set_power(int p)
    {
        power = p;
    }

    int get_power()
    {
        return power;
    }
};

class Comparision: private Hero, private Villan{

    public:
    void power_comp(Hero &H, Villan &V){
        if(H.get_power()>V.get_power()){
            cout<<"Hero is stronger"<<endl;
            return;

        }
        cout<<"Villan is stronger"<<endl;
    }
};

int main(){
    Hero CA;
    Villan Skull;
    CA.set_power(150);
    Skull.set_power(100);
    Comparision C;
    C.power_comp(CA, Skull);
}

#include<iostream>
using namespace std;

class Myfriend {
public:
    virtual void Myshoes() {
        cout << "these are my friend's shoes";
    }
};

class Me: public Myfriend
{
    public : 
    void Myshoes() override{
        cout << "these are my shoes now";
    }
};
