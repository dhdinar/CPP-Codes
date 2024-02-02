#include <iostream>
using namespace std;

class A
{
    int num;

public:
    void set_num(int a)
    {
        num = a;
    }
    int even();
};

int A::even()
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
            cout << i << "=" << "even\n";
        else
            return i;
    }
}
class B : public A
{

    int odd = even();

public:
    void odd_num();
};
void B::odd_num()
{
    cout << odd << " = odd";
}
int main()
{

    int a;
    cin >> a;
    A obj;
    B obj2;
    obj.set_num(a);
    obj.even();
    obj2.odd_num();
}