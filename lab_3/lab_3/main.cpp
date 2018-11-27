#include <iostream>

using namespace std;

class Int {
private:
      int Inte;
public:
      Int(long double a){
          if(a>2147483684 || a<-2147483684){
              cout<<"ERROR"<<endl;
          }
          else{
          Inte = (int)a;
          }
      }
    void setInt(int _Int) {

        Inte = _Int;
    }
    int getInt() {
        return Inte;
    }
    void set0() {
        Inte = 0;
    }
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
    int operator +(Int& a)
    {
        return Inte+a.Inte;
    }
    int operator -(Int& a)
    {
        return Inte-a.Inte;
    }
    int operator *(Int& a)
    {
        return Inte*a.Inte;
    }
    double operator /(Int& a)
    {
        return ((double (Inte))/a.Inte);
    }
};
int main()
{
    Int a(29), b(27);
    Int c = a+b;
    Int d(9999999999);
    cout<<c.getInt()<<endl<<a/b<<endl;
     return 0;
}
