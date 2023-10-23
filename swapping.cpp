#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers to swap: ";
    cin >> a >> b;

    // Swap the values using a temporary variable
    temp = a;
    a = b;
    b = temp;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
