#include <iostream>

using namespace std;

template<typename T>

T amax(const T * array,int count)
{
    T temp=array[0];
    for(int i = 0;i<count;i++)
    {
        if(temp<=array[i])
            temp=array[i];
    }
    return temp;


}

int main()
{
    int arr1[3]={21,27,29};
    cout<<amax(arr1,3)<<endl;
    double arr2[3]={20.01,29.28,0.07};
    cout<<amax(arr2,3)<<endl;
    char arr3[5] ="MARS";
    cout<<amax(arr3,4)<<endl;

    return 0;
}
