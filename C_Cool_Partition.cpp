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
        int vectorSize;
        cin >> vectorSize;
        vector<int> integerVector(vectorSize);
        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
        }

        set<int> firstSet;
        set<int> secondSet;

        firstSet.insert(integerVector[0]);
        int count = 1;

        for (int i = 1; i < vectorSize; i++)
        {
            auto it = firstSet.find(integerVector[i]);
            if (it != firstSet.end())
            {
                firstSet.erase(it);
                secondSet.insert(integerVector[i]);
            }
            else
            {
                secondSet.insert(integerVector[i]);
            }

            if (firstSet.empty())
            {
                count++;
                firstSet = secondSet;
                secondSet.clear();
            }
        }

        cout << count << "\n";
    }

    return 0;
}