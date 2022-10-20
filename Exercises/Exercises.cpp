#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    while (b != 0)
    {
        int z = b;
        b = a % b;
        a = z;
    }
    cout << a;
}