#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int multisetSize;
    cin >> multisetSize;

    multiset<int> integerMultiset;
    for (int i = 0; i < multisetSize; i++)
    {
        int integerValue;
        cin >> integerValue;
        integerMultiset.insert(integerValue);
    }

    // auto it = integerMultiset.begin();

    // for (auto individualValue : integerMultiset)
    // {
    //     cout << individualValue << " ";
    // }

    // auto it = integerMultiset.find(5);
    // auto it = integerMultiset.erase(5);

    // cout << integerMultiset.count(5) << '\n';

    // auto it = integerMultiset.lower_bound(5);
    auto it = integerMultiset.upper_bound(5);

    return 0;
}