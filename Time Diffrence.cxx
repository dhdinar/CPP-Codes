#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    int calculate_seconds()
    {
        return hours * 3600 + minutes * 60 + seconds;
    }

    friend int time_difference(Time t1, Time t2);
};
int time_difference(Time t1, Time t2)
{
    int seconds1 = t1.calculate_seconds();
    int seconds2 = t2.calculate_seconds();
    if(seconds1 >= seconds2)
        return seconds1 - seconds2;
    else
        return seconds2 - seconds1;
}

int main()
{
    Time t1(10, 5, 20);
    Time t2(10, 15, 20);

    int diff = time_difference(t1, t2); //time diffrence in seconds

    int hours = diff / 3600;
    int minutes = (diff % 3600) / 60;
    int seconds = (diff % 3600) % 60;
    cout << "Time difference: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;

    return 0;
}
