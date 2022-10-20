#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

void printClosest(int x1, int y1, int x2,int y2)
{
    int d1 = sqrt(pow(x1, 2) + pow(y1, 2));
    int d2 = sqrt(pow(x2, 2) + pow(y2, 2));
    if (d1 <= d2)
    {
        cout << "(" << x1 << ", " << y1 << ")";
    }
    else
    {
        cout << "(" << x2 << ", " << y2 << ")";
    }
}

void multipling(int num) {
    string numStr = to_string(abs(num));
    int even = 0;
    int odd = 0;
    for (char digit : numStr) 
    {
        if (digit % 2 == 0)
        {
            even += digit - 48;
        }
        else {
            odd += digit - 48;
        }
    }
    cout << even * odd;
}

int main()
{
    /*int x1, y1, x2, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    printClosest(x1, y1, x2, y2);*/
    int num;
    cin >> num;
    multipling(num);
}
