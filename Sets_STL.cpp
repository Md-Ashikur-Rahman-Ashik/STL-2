#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    set<int> integerSet;

    while (testcase--)
    {
        int operation, inputValue;
        cin >> operation >> inputValue;

        if (operation == 1)
        {
            integerSet.insert(inputValue);
        }
        else if (operation == 2)
        {
            auto it = integerSet.find(inputValue);
            if (it != integerSet.end())
            {
                integerSet.erase(inputValue);
            }
        }
        else
        {
            auto it = integerSet.find(inputValue);
            if (it != integerSet.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}