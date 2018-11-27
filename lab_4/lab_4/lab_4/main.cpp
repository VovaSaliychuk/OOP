#include<iostream>
#include<string>

using namespace std;
class quadrangle
{protected:
    double a, b;
public:
    quadrangle(){}
    ~quadrangle() {}

    void getDate()
    {
        cout << "Write a ";
        cin >> a;
        cout << "Write b ";
        cin >> b;
    }
    double operation()
    {
        double ab;
        ab = a * b;
        return ab;
    }
    void putDate()
    {
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "Sum = " << operation() << endl;
    }
};
class trapeze:public quadrangle
{
    double h;
public:
    trapeze(){}
    trapeze(double _a, double _b, double _h) { a = _a; b = _b; h = _h; }
    ~trapeze() {}
    void getDate()
    {
        quadrangle::getDate();
        cout << "Write h ";
        cin >> h;
    }
    double S()
    {
        double S;
        S = 0.5*(a + b)*h;
        return S;
    }
};

int main()
{
    trapeze obj1;
    trapeze obj2(3, 4, 7);


    obj1.getDate();
    cout << "S1 = " << obj1.S() << endl;

    cout << "S2 = " << obj2.S() << endl;

    system("pause");
    return 0;
}
