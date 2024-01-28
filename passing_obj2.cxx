#include <iostream>
using namespace std;

class dinar {
public:
	int a;
    dinar()
    {
        cout<<"constructor"<<"\n";
    }
    ~dinar()
    {
        cout<<"destructor"<<"\n";
    }
    

	// This function will take an object as an argument .
    // This function will only work when dinar typr of object will pass.
	void add(dinar D)
	{
		a = a + D.a;
	}
};


int main()
{

	dinar D1, D2;

	// Values are initialized for both objects.
	D1.a = 50;
	D2.a = 100;

	cout << "Initial Values \n";
	cout << "Value of object1 = " << D1.a <<"\n";
	cout << "Value of object2 = " << D2.a <<"\n\n";
		

	// Passing object as an argument to function add()
	
	D2.add(D1);
    

	// Changed values after passing object as argument
	
	cout << "New values \n";
	cout << "Value of object1 = " << D1.a <<"\n";
	cout << "Value of object2 = " << D2.a<<"\n\n";

	return 0;
}
