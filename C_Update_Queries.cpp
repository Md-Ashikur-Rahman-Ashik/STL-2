#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int stringSize, vectorSize;
        cin >> stringSize >> vectorSize;

        string firstString;
        cin >> firstString;

        set<int> integerSet;
        for (int i = 0; i < vectorSize; i++)
        {
            int inputValue;
            cin >> inputValue;
            integerSet.insert(inputValue);
        }

        string secondString;
        cin >> secondString;

        sort(secondString.begin(), secondString.end());

        int i = 0;

        for (auto integerValue : integerSet)
        {
            firstString[integerValue - 1] = secondString[i];
            i++;
        }

        cout << firstString << "\n";
    }

    return 0;
}