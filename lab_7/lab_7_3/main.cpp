#include <iostream>
#include<string>

using namespace std;

template<typename T>

class Turn
{
    int count;
    T* mas;
public:
    Turn(int _count)
    {
        count=_count;
    mas=new T[count];
    }
    ~Turn(){delete  mas;}

    void putDate()
    {
        for(int i=0;i<count;i++)
        {
            cout<<"Write mas["<<i<<"]=";
            cin>>mas[i];
        }

    }
    void getDate()
    {
        for(int i=0;i<count;i++)
        {
            cout<<"Mas["<<i<<"]="<<mas[i]<<endl;
        }
    }
    void minTurn()
    {
        T min = mas[0];
        for(int i=1;i<count;i++)
        {
            if(min>=mas[i])
            min=mas[i];
        }
     cout<<"MIN = "<<min<<endl;;
    }

};

int main()
{
    int n;
    cout<<"Write size : ";
    cin>>n;
    Turn<int> a(n);
    Turn<double> b(n);
    Turn<char> c(n);

    a.putDate();
    a.getDate();
    a.minTurn();

    b.putDate();
    b.getDate();
    b.minTurn();

    c.putDate();
    c.getDate();
    c.minTurn();

    return 0;
}
