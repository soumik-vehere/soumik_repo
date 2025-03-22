#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "First program in C++" << endl;
    cout << "Enter two intergers: ";
    cin >> a >> b;
    int c = a + b;
    cout << "Sum = " << c << endl;
    c = a * b;
    cout << "Product = " << c << endl;

    return 0;
}