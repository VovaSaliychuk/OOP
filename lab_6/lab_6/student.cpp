#include "student.h"

student::student()
{
    cout<<"Wtite name: ";
    cin>>name;
     cout<<"Wtite surname: ";
    cin>>surName;
     cout<<"Wtite fathername: ";
    cin>>fatherName;
     cout<<"Wtite number of Book: ";
    cin>>numberBook;
     cout<<"Wtite studType(1-derz,0-plat): ";
    cin>>studentType;
}
student::student(string _name,string _surName,string _fatherName, int _numberBook,bool _studentType )
{
    name=_name;
    surName=_surName;
    fatherName=_fatherName;
    numberBook=_numberBook;
    studentType=_studentType;
}
ostream& operator<<(ostream& _cout,student& A)
{
    _cout<<A.name<<" "<<A.surName<<" "<<A.fatherName<<" "<<A.numberBook<<" "<<A.studentType;
return _cout;
}
