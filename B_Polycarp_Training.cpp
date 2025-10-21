#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vectorSize;
    cin >> vectorSize;

    multiset<int> integerSet;
    int count = 0;

    for (int i = 1; i <= vectorSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerSet.insert(inputValue);
    }

    int i = 1;

    while (!integerSet.empty())
    {
        auto it = integerSet.lower_bound(i);
        if (it != integerSet.end())
        {
            i++;
            count++;
            integerSet.erase(it);
        }
        else
        {
            break;
        }
    }

    cout << count;

    return 0;
}