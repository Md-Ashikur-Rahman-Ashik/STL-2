#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int stringSize;
        cin >> stringSize;

        string firstString, secondString;
        cin >> firstString >> secondString;

        sort(firstString.begin(), firstString.end());
        sort(secondString.begin(), secondString.end());

        if (firstString == secondString)
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