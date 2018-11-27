#include<iostream>

using namespace std;

class Int {

 private:
      int Inte;
 public:
    void SetInt(int _Int) {
        Inte = _Int;
    }
    int GetInt() {
        return Inte;
    }
    void Set0() {
        Inte = 0;
    }
    int Sum(int num1, int num2)
    {
        return num1 + num2;
    }


};
int main()
{
    Int int1, int2, int3;

    int1.Set0();
    int2.SetInt(2);
    cout << int1.Sum(int1.GetInt(), int2.GetInt())<<endl;

    system("pause");

    return 0;
}

