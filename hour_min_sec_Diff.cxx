#include <iostream>
using namespace std;
class time
{
    int min, sec, hour;

public:
    time()
    {
        cout << "Hour: ";
        cin >> hour;
        cout << "Min: ";
        cin >> min;
        cout << "Sec: ";
        cin >> sec;
    }
    void SUB(time &a, time &b)
    {
        

        if (a.sec >= b.sec)
            a.sec = a.sec - b.sec;
        else
        {
            a.sec = 60 - b.sec + a.sec;
            b.min++;
        }

        if (a.min >= b.min)
            a.min = a.min - b.min;
        else
        {
            a.min = 60 - b.min + a.min;
            b.hour++;
        }

        if (a.hour >= b.hour)
            a.hour = a.hour - b.hour;

        else
        {
            a.hour = 24-b.hour+a.hour;
        }
            
    }
    friend void show(time ob1);
};
void show(time ob1)
{
    cout << "\nHour: " << ob1.hour << "\nMin: " << ob1.min << "\nSec: " << ob1.sec;
}
int main()
{
    time ob1, ob2;
    ob1.SUB(ob1, ob2);
    show(ob1);
    return 0;
}
