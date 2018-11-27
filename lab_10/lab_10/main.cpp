#include <iostream>
#include<fstream>
#include<string.h>

using namespace std;
const int n=20;
int main()
{
    setlocale(LC_ALL,"rus");
    char* name[n];
    char* surName[n];
    char* fatherName[n];
    char* phoneNumber[n];
    char* bday[n];
    char* placeStudy[n];

    ofstream out("myfile.txt", ios::out | ios::binary);
    if(!out)
    {
       cout << "Не вдається відкритифайл" << endl;
       return 1;
    }
//   cout<<"Write name,surName,fatherName,phomeNumber,bday,placeStudy:"<<endl;
//  for(int i=0;i<n;i++){cin>>name[i];}
//  for(int i=0;i<n;i++){cin>>surName[i];}
//  for(int i=0;i<n;i++){cin>>fatherName[i];}
//  for(int i=0;i<n;i++){cin>>phoneNumber[i];}
//  for(int i=0;i<n;i++){cin>>bday[i];}
//  for(int i=0;i<n;i++){cin>>placeStudy[i];}
//  int count=0;
//  while(count!=20){ out<<*name[n];count++;}
//   count=0;
//  while(count!=20){out<<*surName[n];count++;}
//   count=0;
//  while(count!=20){out<<*fatherName[n];count++;}
//   count=0;
//  while(count!=20){out<<*phoneNumber[n];count++;}
//   count=0;
//  while(count!=20){out<<*placeStudy[n];count++;}

    out<<"Saliychuk Vlodymyr Mukolayovuch "<<endl<<"0680883184"<<endl<<"01:01:2000"<<endl<<"TC_TNTU"<<endl;
    return 0;
}
