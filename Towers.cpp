#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize;
    cin >> vectorSize;
    vector<int> integerVector(vectorSize);
    for (int i = 0; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    multiset<int> integerSet;

    for (int i = 0; i < vectorSize; i++)
    {
        int integerValue = integerVector[i];
        auto it = integerSet.upper_bound(integerValue);
        if (it != integerSet.end())
        {
            integerSet.erase(it);
            integerSet.insert(integerValue);
        }
        else
        {
            integerSet.insert(integerValue);
        }
    }

    cout << integerSet.size();

    return 0;
}