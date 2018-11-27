#include <iostream>

using namespace std;

template<typename T>

class Arr{
    T *mas;
public:
    Arr(int count){
        mas=new T[count];
    }
    ~Arr(){delete mas;}
    void setArr(int count){
        for(int i=0;i<count;i++)
            cin>>mas[i];
    }
    void getArr(int count){
        for(int i=0;i<count;i++)
            cout<<mas[i]<<" ";
        cout<<endl;
    }
    void sumMidlle(int count)
    {
        double sum=0;
        for(int i = 0;i<count;i++)
            sum+=mas[i];
        cout<<sum/count<<endl;
    }
    T amax(int count)
    {
        T temp=mas[0];
        for(int i = 0;i<count;i++)
        {
            if(temp<=mas[i])
                temp=mas[i];
        }
        return temp;
    }
};

int main()
{
    Arr<int> a(3);
    Arr<double> b(3);
    cout<<"Write mas A :";
    a.setArr(3);
    cout<<"Mas A :";
    a.getArr(3);
    a.sumMidlle(3);
    cout<<"Write mas B :";
    b.setArr(3);
    cout<<"Mas B :";
    b.getArr(3);
    b.sumMidlle(3);

    return 0;
}
