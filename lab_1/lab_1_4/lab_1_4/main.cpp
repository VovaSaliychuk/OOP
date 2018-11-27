#include<iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    Time(){}
    Time(int _hour, int _minute, int _second)
    {
        hour = _hour;
        minute = _minute;
        second = _second;
    }
    void getTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
    void sumTime(Time time1, Time time2)
    {

        hour = time1.hour + time2.hour;
        minute = time1.minute + time2.minute;
        second = time1.second + time2.second;
    }

};

int main()
{
    Time time1(0,0,0), time2(12,32,13);
    Time time3;
    time3.sumTime(time1, time2);
    time1.getTime();
    time2.getTime();
    time3.getTime();
    system("pause");
    return 0;
}

