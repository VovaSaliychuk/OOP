#ifndef GRUPA_H
#define GRUPA_H
#include<iostream>
#include<string>
#include"student.h"

using namespace std;

class Grupa
{
    string groupName;
    string specialty;
    int count;
    student *students;

public:
    Grupa(int count,string _groupName,string _specialty,student *_students);
    Grupa();
    ~Grupa();

    friend  ostream& operator<<(ostream& _cout,Grupa& A);
};

#endif // GRUPA_H
