#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, original, digit, digits = 0;
    long long sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    int temp = n;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}