#include <iostream>

using namespace std;

class Quandrandl
{
protected:
    int a,b,c,d;
public:
    Quandrandl(){a=0;b=0;c=0;d=0;}
    ~Quandrandl(){}
    virtual void putDate()
    {
        cout<<"Write a,b,c,d"<<endl;
        cin>>a>>b>>c>>d;
    }
    virtual void S()
    {
        cout<<"S = "<<a*b*c*d<<endl;
    }
};
class Trapeze:public Quandrandl
{
    int h;
public:
    Trapeze(int _a, int _b,int _h){a=_a; b=_b; h=_h;}
    Trapeze(){}
    ~Trapeze(){}

    void S()
    {
        int S;
        S=(a+b)/2*h;
        cout<<"S = "<<S<<endl;
    }
    void putDate()
    {
        cout<<"Write a,b,h"<<endl;
        cin>>a>>b>>h;
    }
};
class Romb:public Quandrandl
{
    int h;
public:
    Romb(int _a,int _h){a=_a; h=_h;}
    Romb(){}
    ~Romb(){}
    void S()
    {
        int S;
        S=a*h;
        cout<<"S = "<<S<<endl;
    }
    void putDate()
    {
        cout<<"Write a,h"<<endl;
        cin>>a>>h;
    }
};

int main()
{
    Trapeze obj_1(3,2,4 );
    Romb obj_3(3,5);

    ////////////////////
    Quandrandl* mas[2];

    ////////////////////
    mas[0]=&obj_1;
    mas[1]=&obj_3;

    for(int i=0;i<2;i++)
    {
        mas[i]->S();
    }

    system("pause");
    return 0;
}
