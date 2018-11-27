#include "facultet.h"

Facultet::Facultet()
{
    cout<<"Write facultet-";
    cin>>name;
    cout<<"Write count of  groups in facultet-";
    cin>>count;
    groups=new Grupa[count];
    for(int i=0;i<count;i++)
        groups[i];
}
Facultet::~Facultet(){delete groups;}
ostream& operator<<(ostream& _cout,  Facultet& A)
{
    _cout<<A.name<<" ";
    for(int i=0;i<A.count;i++)
        _cout<<A.groups[i];
    return _cout;
}
