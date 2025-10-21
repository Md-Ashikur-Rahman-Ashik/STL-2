#include <bits/stdc++.h>
using namespace std;

int main()
{
    int multiSetSize, queries;
    cin >> multiSetSize >> queries;
    multiset<int> integerSet;

    for (int i = 0; i < multiSetSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerSet.insert(inputValue);
    }

    for (int i = 0; i < queries; i++)
    {
        int inputValue;
        cin >> inputValue;

        auto it = integerSet.lower_bound(inputValue);
        if (*it >= inputValue)
        {
            auto anotherIT = --it;
            if (anotherIT != integerSet.begin())
            {
                cout << *anotherIT << "\n";
                integerSet.erase(anotherIT);
            }
            else
            {
                cout << *++anotherIT << "\n";
                integerSet.erase(anotherIT);
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}