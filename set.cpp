#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int setSize;
    cin >> setSize;
    set<int> integerSet;

    for (int i = 0; i < setSize; i++)
    {
        int integerValue;
        cin >> integerValue;
        integerSet.insert(integerValue);
    }

    // auto it = integerSet.begin();
    // cout << *it << '\n';

    // for (auto individualValue : integerSet)
    // {
    //     cout << individualValue << " ";
    // }

    // cout << '\n';

    // auto it = integerSet.find(6);
    // if (it != integerSet.end())
    // {
    //     cout << "Found\n";
    // }
    // else
    // {
    //     cout << "Not Found\n";
    // }

    // integerSet.erase(6);
    // cout << integerSet.count(6) << '\n';

    int inputValue;
    cin >> inputValue;
    auto it = integerSet.lower_bound(inputValue);
    auto secondIterator = integerSet.upper_bound(inputValue);

    return 0;
}