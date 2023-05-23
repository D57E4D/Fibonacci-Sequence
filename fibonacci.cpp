#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n for the nth Fibonacci number: ";
    cin >> n;
    int a = 0, b = 1, c;
    cout << "First " << n << " numbers in Fibonacci sequence: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;

    return 0;
}
