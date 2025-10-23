#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int queries;
    cin >> queries;

    set<pair<int, int>> pairSet;
    multiset<pair<int, int>> integerSet;
    vector<int> finalVector;

    int customerNumber = 1;

    for (int i = 1; i <= queries; i++)
    {
        int firstValue;
        cin >> firstValue;

        if (firstValue == 1)
        {
            int secondValue;
            cin >> secondValue;

            pairSet.insert({customerNumber, secondValue});
            integerSet.insert({secondValue, -customerNumber});
            customerNumber++;
        }
        else if (firstValue == 2)
        {
            int position = pairSet.begin()->first;
            int money = pairSet.begin()->second;

            finalVector.push_back(position);

            pairSet.erase(pairSet.begin());
            integerSet.erase({money, -position});
        }
        else
        {
            int position = -integerSet.rbegin()->second;
            int money = integerSet.rbegin()->first;

            finalVector.push_back(position);

            integerSet.erase(--integerSet.end());
            pairSet.erase({position, money});
        }
    }

    for (auto individualValue : finalVector)
    {
        cout << individualValue << " ";
    }

    return 0;
}