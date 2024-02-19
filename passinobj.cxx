#include <iostream>
using namespace std;
class ela
{
    int a;
    int b;

public:
    int kg, gram;

    ela()
    {
        cout << "Kg: ";
        cin >> kg;
        cout << "Gram: ";
        cin >> gram;
        a = kg;
        b = gram;
    }
};
ela Add(ela E1, ela E2)
{
    ela E3 = E1;
    E3.kg = E1.kg + E2.kg;
    E3.gram = E1.gram + E2.gram;
    if (E3.gram >= 1000)
    {
        E3.kg += E3.gram / 1000;
        E3.gram = E3.gram % 1000;
    }
    return E3;
}
main()
{
    ela E1, E2;

    ela total = Add(E1, E2);
    cout << "Total: " << total.kg << "Kg " << total.gram << "Gram" << endl;
    return 0;
}