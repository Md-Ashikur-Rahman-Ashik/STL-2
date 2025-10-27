#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int numberOfSongs, requiredSongs, language;
        cin >> numberOfSongs >> requiredSongs >> language;

        multiset<int> integerSet;

        for (int i = 0; i < numberOfSongs; i++)
        {
            long long int length, currentLanguage;
            cin >> length >> currentLanguage;

            if (currentLanguage == language)
            {
                integerSet.insert(length);
            }
        }

        int setSize = integerSet.size();
        if (setSize == 0)
        {
            cout << -1 << "\n";
            continue;
        }

        int count = 0;
        long long int currentLength = 0;
        for (auto it = integerSet.rbegin(); it != integerSet.rend(); it++)
        {
            if (count < requiredSongs)
            {
                int integerValue = *it;
                currentLength = currentLength + integerValue;
                count++;
            }
            else
            {
                break;
            }
        }

        cout << currentLength << "\n";
    }

    return 0;
}