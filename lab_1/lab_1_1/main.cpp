#include<iostream>

using namespace std;

int counter = 0;

class Int
{
    int c;
    int pole;
 public:
     Int(int _pole){  cout << "create with param" << endl; c = 2;  pole = _pole; }
     Int():Int(0) { c = 1;   };
     ~Int() { cout << "Destruct " << c << endl; };
     void GetNulling() { pole = 0;};
     int Setpole() { return pole; }
     void ShowC() { cout << c << endl; }
};

int main()
{
    Int *FirstObject = new Int();


    FirstObject->GetNulling();
    cout << " pole = " << FirstObject->Setpole() << endl;
    FirstObject->ShowC();
    delete FirstObject;

    system("pause");
    return 0;
}

