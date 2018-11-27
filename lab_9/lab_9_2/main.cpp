#include <iostream>
using namespace std;
#include <process.h> //for exit()
const int LIMIT = 100;
class ARROVER{
public:
    void exeption(int n){
        try {
            if(n< 0 || n>=LIMIT)
            {
                throw 404;
            }
        } catch (int i) {
            cout<<"Error-"<<i<<endl<<"error index-"<<n<<endl;
        }
    }
};

class safearay
 {
 private:
 int arr[LIMIT];
 public:
 int& operator [](int n)
 {
 if( n< 0 || n>=LIMIT )
 { cout << "\nIndex out of bounds"; exit(1); }
 return arr[n];
 }
 };

int main()
 {
 safearay sa1;
 ARROVER a;
 for(int j=0; j<LIMIT; j++)
 sa1[j] = j*10;
 for(int j=0; j<LIMIT; j++)
 {
 int temp = sa1[j];
 cout << "Element " << j << " is " << temp << endl;
 }
 a.exeption(101);
 a.exeption(66);
 return 0;
 }
