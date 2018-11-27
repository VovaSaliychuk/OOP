#include <iostream>

using namespace std;

template<typename T>
void sumMidlle(const T * array,int count)
{
    T sum=0;
    for(int i = 0;i<count;i++)
        sum+=array[i];
    cout<<sum/count<<endl;
}

int main()
{
    int arr1[3]={56,12,43};
    sumMidlle(arr1,3);
    double arr2[3]={31.1,21.5,27.29};
    sumMidlle(arr2,3);
    char arr3[5] ="MARS";
    sumMidlle(arr3,4);
    return 0;
}
