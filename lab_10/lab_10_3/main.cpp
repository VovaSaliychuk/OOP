#include <iostream>
#include<string>
#include<fstream>

using namespace std;
class Person
{
    string name;
    string surName;
    string fatherName;
    string phoneNumber;
    string bday;
    string placeStudy;

public:
    Person()
    {
        cout<<"Write name,surName,fatherName,phoneNumber,bday,placeStudy: ";
        cin>>name>>surName>>fatherName>>phoneNumber>>bday>>placeStudy;
    }
    ~Person(){}
    friend void operator<<(ofstream &out, Person &p)
    {
     out << p.name << "    " << p.surName <<"    " << p.fatherName <<"    " << p.phoneNumber <<"    " << p.bday<<"    "<<p.placeStudy << endl;
    }
};
int main()
{
    ofstream file;
        Person p;

        file.open ("myfile.txt");
        file << p;
        file.close();
        return 0;
}
