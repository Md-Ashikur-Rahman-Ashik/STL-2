#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int setSize, queries;
    cin >> setSize >> queries;

    multiset<int> integerSet;
    for (int i = 0; i < setSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerSet.insert(inputValue);
    }

    for (int i = 0; i < queries; i++)
    {
        int inputValue;
        cin >> inputValue;
        auto it = integerSet.upper_bound(inputValue);
        if (it == integerSet.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            it--;
            cout << *it << "\n";
            integerSet.erase(it);
        }
    }

    return 0;
}