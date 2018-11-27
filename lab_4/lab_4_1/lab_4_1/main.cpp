#include<iostream>
#include<string>

using namespace std;

class publication
{
    string name;
    float price;

public:
    publication() {}
    ~publication() {}
    void getDate()
    {

        cout << "Name ";
        cin >> name;
        cout << "Price ";
        cin >> price;
    }
    void putDate()
    {

        cout << "Name " << name << endl;
        cout << "price " << price << endl;
    }
};
class sales
{
    float mas[3];
public:
    sales() {}
    ~sales() {}
    void getDate()
    {
        for (int i = 0; i<3; i++)
        {
            cout << "month " << 1+i << " = ";
            cin >> mas[i];

        }
    }
    void putDate()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "month" << 1+i << " = " << mas[i] << " grn" << endl;
        }
    }
};
class book :public publication, public sales
{
    int n;
public:
    book() {}
    ~book() {}
    void getDate()
    {

        publication::getDate();
        cout << "n = ";
        cin >> n;
        sales::getDate();
    }
    void putDate()
    {

        publication::putDate();
        cout << "n " << n << endl;
        sales::putDate();
    }
};
class type :public publication ,public sales
{
    string time;
public:
    type() {}
    ~type() {}

    void getDate()
    {
        publication::getDate();
        cout << "time = ";
        cin >> time;
        sales::getDate();
    }
    void putDate()
    {

        publication::putDate();
        cout << "time " << time << endl;
        sales::putDate();
    }
};

int main()
{
    book obj1;
    obj1.getDate();
    obj1.putDate();


    type obj2;
    obj2.getDate();
    obj2.putDate();

    system("pause");
    return 0;
}
