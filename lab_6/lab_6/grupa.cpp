#include "grupa.h"

Grupa::Grupa()
{
    cout<<"Write name of group: ";
    cin>>groupName;
    cout<<"Write specialty: ";
    cin>>specialty;
    cout<<"Write count students : ";
    cin>>count;

   students=new student[count];
    for(int i=0;i<count;i++)
   {
       students[i];
   }
}

Grupa::Grupa(int _count,string _groupName,string _specialty, student *_students)
{
    groupName=_groupName;
    specialty=_specialty;
    _students = new student [_count];

    for(int i=0;i<_count;i++)
   {
     students[i]=_students[i];
   }
}

Grupa::~Grupa(){delete students;}

ostream& operator<<(ostream& _cout,Grupa& A)
{
    _cout<<A.groupName<<" "<<A.specialty<<endl;
    for(int i=0;i<A.count;i++)
    {
       cout<<A.students[i];
    }
    return _cout;
}
