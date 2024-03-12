#include <iostream>
using namespace std;
class box
{
    float height, weight, lenght;

public:
    box()
    {
        height = 10;
        weight = 20;
        lenght = 30;
    }
    box(float hgt, float wgt, float len)
    {
        height = hgt;
        weight = wgt;
        lenght = len;
    }
    box(const box &ob)
    {
        height = ob.height;
        weight = ob.weight;
        lenght = ob.lenght;
    }
    float volume()
    {
        return height * weight * lenght;
    }
};
int main()
{

    float len, wgt, hgt;
    cin >> len >> wgt >> hgt;
    box client1(hgt, wgt, len), client2,client3(client1);
    cout << client1.volume() << endl;
    cout << client2.volume() << endl;
    cout << client2.volume() << endl;
}