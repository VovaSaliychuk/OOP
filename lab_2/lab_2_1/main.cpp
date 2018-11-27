#include <iostream>

using namespace std;

struct Elem
{
   int data;
   Elem * next, * prev;
};

class List
{
   Elem * Head, * Tail;
   int Count;

public:
   List();
   ~List();
   int GetCount();
   void operator +=(int n);
   Elem* GetElem(int);
   void Print();;

};

List::List()
{
   Head = Tail = nullptr; //список пустий
   Count = 0;
}

List::~List()
{
}
void List::operator+=(int n){
    Elem * temp = new Elem;
    temp->next = nullptr;
    temp->data = n;
    temp->prev = Tail;
    if(Tail != nullptr)
       Tail->next = temp;
    if(Count == 0)
       Head = Tail = temp;
    else
    Tail = temp;
    Count++;
 }
void List::Print()
{
   if(Count != 0)
   {
      Elem * temp = Head;
      cout << "( ";
      while(temp->next != nullptr)
      {
          cout << temp->data << ", ";
          temp = temp->next;
      }

      cout << temp->data << " )\n";
   }
}



int main()
{
   List A;
   int n;
   cin>>n;
   for(int i =0;i<n++;i++)
   {
       A+=i;
   }
   A.Print();
   return 0;
}
