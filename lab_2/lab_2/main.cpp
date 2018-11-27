//ЗАВДАННЯ 1
//Реалізувати один простий клас згідно варіанту індивідуального завдання, що містить закриті данні,
//а саме два типа даних : числове та рядкове, реалізоване через покажчик на char.
//Потрібно створити декілька екземплярів класу статично і динамічно, а також масив та продемонструвати дію всіх конструкторів і методів.
//Реалізувати методи :
// Scan - ввід даних з клавіатури у поля класу;
// Print - констатний метод виводу даних на екран;
// Конструктор по замовчуванню;
// Конструктор ініціалізації Клас(сhar*, int);
// Конструктор копіювання Клас(const Клас&);
// Деструктор
// Методи доступу та закритих данних  Get та Set.


#include<iostream>
#include<math.h>

using namespace std;

struct Node
{
    int x;
    Node *Next, *Prev;
};


class Computer
{
    char *Owner = new char[40];
    int Processor;

public:
    Computer(char* owner, int processor) {  Owner = owner; Processor = processor; };
    Computer() :Computer((char*)("Other"), 0) {};
    Computer & operator=(const Computer & Computer){}
    void SetOwner(const char*);
    char*GetOwner();
    void SetProcessor(int);
    int GetProcessor();
    void Print();
    void Input();
    ~Computer() { cout << "delete" << endl;};
};

void  Computer::SetOwner( const char* owner)
{
    Owner = new char[40];
    for (int i = 0; i < 40; i++)
        Owner[i] = owner[i];
}

char* Computer ::GetOwner(){ return Owner;}
void Computer::SetProcessor(int n) {Processor = n;}
int Computer::GetProcessor() {return Processor;}
void Computer::Print()
{
    cout << "Processor   " << Processor << endl;
    cout << "Owner       " << Owner << endl<<endl;


}
void Computer::Input()
{

    cout << "Write processor  ";
    cin >> Processor;
    cout << "Write owner   ";
    char * str = new char[40];
    cin >> str;
    SetOwner(str);
    cout << endl;
}

bool simple(int n) {
    int r = sqrt(n);
    for (int i = 2; i <= r; i++)
        if ((n%i) == 0)
            return false;
    return true;
}
int main()
{
    Computer PC_1;
    Computer PC_2((char*)("AMD"), 21);
    Computer *PC_3 = new Computer;
    Computer *PC_4 = new Computer((char*)"AMD", 21);

    PC_1.Input();
    PC_2.Input();
    PC_3->Input();
    PC_4->Input();

    PC_1.Print();
    PC_2.Print();
    PC_3->Print();
    PC_4->Print();

    system("pause");

    return 0;
}
