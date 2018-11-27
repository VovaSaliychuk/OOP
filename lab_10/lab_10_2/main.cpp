#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file;
    file.open ("myfile.txt");

    string  name, surName,fatherName;
    string placeStudy, phoneNumber,bday;

    file>>surName >> name >>fatherName>> bday >> phoneNumber>>placeStudy;
    cout << surName << "   " <<name <<" "<<fatherName<< "   " << phoneNumber <<  "   " <<bday <<  "   " <<placeStudy;
    file.close();


    return 0;
}
