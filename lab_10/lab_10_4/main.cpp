#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person{
    string name;
    string surName;
    string fatherName;
    string bday;
    string phoneNumber;
    string placeStudy;
public:
    Person(){

    }

    friend void operator>>(ifstream &out, Person &p){
        out  >> p.name ;
        out  >> p.surName;
        out  >> p.fatherName;
        out  >> p.phoneNumber;
        out >>  p.bday;
        out >>  p.placeStudy;
        cout << endl;
    }
    friend void operator<<(ostream &out, Person &p)
    {
     out << p.name << "    " << p.surName <<"    " << p.fatherName<<"    " << p.phoneNumber <<"    " <<p.bday<<"    "<< p.placeStudy << endl;
    }
};



int main()
{


    ifstream file;
    Person p;

    file.open ("myfile.txt");
    file >> p;
    cout << p;
    file.close();

    return 0;
}
