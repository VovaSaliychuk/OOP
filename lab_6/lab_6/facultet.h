#ifndef FACULTET_H
#define FACULTET_H
#include"grupa.h"
#include<string>
#include<iostream>

using namespace std;

class Facultet
{
        string name;
        Grupa *groups;
        int count;

public:
    Facultet();
    ~Facultet();
    friend ostream& operator<<(ostream& _cout,Facultet& A);
};

#endif // FACULTET_H
