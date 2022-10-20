#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    string numString;
    for (int i = 0; i < input.length(); i++)
    {
        if (isdigit(input[i]))
        {
            numString += input[i];
        }
    }
    cout << sqrt(stoi(numString));
}
