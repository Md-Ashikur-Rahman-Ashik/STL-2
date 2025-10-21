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
        int vectorSize, queries;
        cin >> vectorSize >> queries;
        map<int, set<int>> integerMap;

        for (int i = 1; i <= vectorSize; i++)
        {
            int integerValue;
            cin >> integerValue;
            integerMap[integerValue].insert(i);
        }

        for (int i = 1; i <= queries; i++)
        {
            int leftIndex, rightIndex;
            cin >> leftIndex >> rightIndex;

            if (integerMap.find(leftIndex) == integerMap.end() || integerMap.find(rightIndex) == integerMap.end())
            {
                cout << "NO\n";
            }
            else
            {
                int leftMostIndex, rightMostIndex;
                leftMostIndex = *integerMap[leftIndex].begin();
                rightMostIndex = *integerMap[rightIndex].rbegin();

                if (leftMostIndex <= rightMostIndex)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}