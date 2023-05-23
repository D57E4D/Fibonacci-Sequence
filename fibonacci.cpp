#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 10;
    cout << "First " << n << " numbers in Fibonacci sequence: ";
    for (int i = 0; i < n; i++)
        cout << fib(i) << " ";
    cout << endl;

    return 0;
}