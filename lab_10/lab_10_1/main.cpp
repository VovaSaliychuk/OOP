#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{

    string name;
    string surName;
    string fatherName;
    string phoneNumber;
    string bday;
    string placeStudy;

    ofstream out("myfile.txt", ios::out | ios::binary);
    if(!out)
    {
        cout << "Не вдається відкритифайл" << endl;
        return 1;
    }
    cout<<"Write name,surName,fatherName,phomeNumber,bday,placeStudy:"<<endl;
    cin>>name;
    cin>>surName;
    cin>>fatherName;
    cin>>phoneNumber;
    cin>>bday;
    cin>>placeStudy;

    out<<name<<" "<<surName<<" "<<fatherName<<" "<<phoneNumber<<" "<<bday<<" "<<placeStudy;
    out<<"    "<<"Saliychuk Vlodymyr Mukolayovuch "<<" "<<"0680883184"<<" "<<"01:01:2000"<<" "<<"TC_TNTU";
    out.close();
    return 0;
}
