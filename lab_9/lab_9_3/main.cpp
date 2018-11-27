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
   Elem* GetElem(int);
   void operator +(int n);
   void operator +=(int n);
   void operator - (int pos);
   void Print();
   void operator<<(int pos);
};

List::List()
{
   Head = Tail = nullptr; //список пустий
   Count = 0;
}

List::~List()
{
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

int List::GetCount()
{
    return Count;
}

void List::operator<<(int pos){
    if(pos < 1 || pos > Count)
    {
       cout << "Incorrect position !!!\n";
       return;
    }
    Elem * temp;
    if(pos <= Count / 2)
    {
       temp = Head;
       int i = 1;

       while(i < pos)
       {
          temp = temp->next;
          i++;
       }
    }
    else
    {
       temp = Tail;
       int i = 1;

       while(i <= Count - pos)
       {
          temp = temp->prev;
          i++;
       }
    }
    cout << pos << " element: ";
    cout << temp->data << endl;

}


void List::operator+(int n)
{
    cout << "ok" << endl;
    try {
        if(n<0)
        {
            throw 333;
        }
    } catch (int i) {
        cout<<"error-"<<i<<endl<<"Restart program"<<endl;
        system("pause");

    }
   Elem * temp = new Elem;
   temp->prev = nullptr;
   temp->data = n;
   temp->next = Head;
   if(Head != nullptr)
      Head->prev = temp;
   if(Count == 0)
      Head = Tail = temp;
   else
      Head = temp;

   Count++;
}
void List::operator+=(int n){
    cout << "ok" << endl;
    try {
        if(n<0)
        {
            throw 333;
        }
    } catch (int i) {
        cout<<"error-"<<i<<endl<<"Restart program"<<endl;
        system("pause");

    }
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
void List::operator - (int pos)
{
    if(pos == 0)
    {
        cout << "Input position: ";
        cin >> pos;
    }
    if(pos < 1 || pos > Count)
    {
       cout << "Incorrect position !!!\n";
       return;
    }
    int i = 1;
    Elem * Del = Head;
    while(i < pos)
    {
       Del = Del->next;
       i++;
    }
    Elem * PrevDel = Del->prev;
    Elem * AfterDel = Del->next;
    if(PrevDel != nullptr && Count != 1)
       PrevDel->next = AfterDel;
     if(AfterDel != nullptr && Count != 1)
       AfterDel->prev = PrevDel;
    if(pos == 1)
        Head = AfterDel;
    if(pos == Count)
        Tail = PrevDel;
    delete Del;
    Count--;
 }
int main()
{
   List L;
   L+=-6;
   int a[10] = {-1,1,-2,3,4,5,6,7,8,9};
   for(int i = 0; i < 10; i++)
      if(i % 2 == 0)
         L +a[i];
      else
         L+=a[i];
   L-3;
   cout << "List L:"<<endl;
   L.Print();
   cout << endl;
   cout << "List L:"<<endl;
   L.Print();
   L<<2;
   L<<8;

   return 0;
}
