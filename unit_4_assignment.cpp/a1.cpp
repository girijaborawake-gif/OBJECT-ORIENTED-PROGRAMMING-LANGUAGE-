#include <iostream>
using namespace std;

// Function template to find higher price
template <class T>
T higherPrice(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    int p1, p2;
    float p3, p4;

    // Comparing integer prices
    cout << "Enter two integer prices: ";
    cin >> p1 >> p2;

    cout << "Higher integer price: " << higherPrice(p1, p2) << endl;

    // Comparing floating-point prices
    cout << "Enter two floating-point prices: ";
    cin >> p3 >> p4;

    cout << "Higher floating-point price: " << higherPrice(p3, p4) << endl;

    return 0;
}
