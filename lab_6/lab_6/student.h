#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>

using namespace std;

class student
{
    string name;
    string surName;
    string fatherName;
    int numberBook;
    bool studentType;
public:
    student(string,string,string,int,bool);
    student();
    friend ostream& operator<<(ostream& _cout,student& A);
};

#endif // STUDENT_H
