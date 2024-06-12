#include<iostream>
using namespace std;
class animal
{
public:
    void eat()
    {
        cout<<"Eating"<<endl;
    }
};
class dog: public animal
{
public:
    void berk()
    {
        cout<<"Barking"<<endl;
    }
};
class babydog: public dog
{
public:
    void weep()
    {
        cout<<"Weeping";
    }
};
int main()
{
    babydog b1;
    b1.eat();
    b1.berk();
    b1.weep();
}
