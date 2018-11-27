#include<iostream>
#include<conio.h>

using namespace std;

class Kasa {
private:
    unsigned int numberCar;
    double money;
public:
    Kasa(int _numberCar, double _money) {
        numberCar = _numberCar;
        money = _money;
    }
    void payingCar() {
        numberCar++;
        money += 0.5;
    }
    void nopayingCar() {
        numberCar++;
    }
    void display(){
        cout << numberCar << " -"<<money<<"$"<<endl;
    }
};

int main()
{

    Kasa kasa(0, 0);
    int c;
    while (1){

        c = _getch();
        if (c == ' ')
        {
            kasa.nopayingCar();
        }
        if (c == 'e' || c == 'E')
        {
            kasa.payingCar();
        }
        if (c == 'q' || c == 'Q')
            break;
        kasa.display();
    }
    kasa.display();


    system("pause");

    return 0;
}

