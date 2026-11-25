#include <iostream>
using namespace std;

// Function template to swap two values
template <class T>
void swapValues(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    char ch1 = 'A', ch2 = 'B';
    float p = 12.5, q = 25.5;

    cout << "Before swapping integers: " << x << " " << y << endl;
    swapValues(x, y);
    cout << "After swapping integers: " << x << " " << y << endl;

    cout << "\nBefore swapping characters: " << ch1 << " " << ch2 << endl;
    swapValues(ch1, ch2);
    cout << "After swapping characters: " << ch1 << " " << ch2 << endl;

    cout << "\nBefore swapping float values: " << p << " " << q << endl;
    swapValues(p, q);
    cout << "After swapping float values: " << p << " " << q << endl;

    return 0;
}
