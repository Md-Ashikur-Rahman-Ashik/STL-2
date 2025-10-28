#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int firstValue, secondValue, thirdValue, fourthValue;
        cin >> firstValue >> secondValue >> thirdValue >> fourthValue;

        if (firstValue == secondValue && secondValue == thirdValue && thirdValue == fourthValue)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}