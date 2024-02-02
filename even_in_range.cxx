#include <iostream>
using namespace std;

class even
{
    int x, y;

public:
    even(int a, int b)
    {
        x = a;
        y = b;
    }
    void get_even();
};

void even::get_even()
{
    cout << "printing even number between " << x << "-" << y << " range:\n";

    for (int i = x; i <= y; i++)
    {
        if (i % 2 == 0)
            cout << i << "\n";
    }
}
int main()
{
    int i, j;
    even obj[4][4] = 
    {
        even(2, 7),even(2, 8),even(2,14),even(2, 17),
        even(2, 9),even(2, 10),even(2, 13),even(2,17),
        even(2, 5),even(2, 4),even(12,19),even(22, 27),
        even(17, 27),even(12, 17),even(21, 27),even(2, 7),
    };

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            obj[i][j].get_even();
    }
    return 0;
}