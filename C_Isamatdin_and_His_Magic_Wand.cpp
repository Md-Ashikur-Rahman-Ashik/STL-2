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
        vector<bool> checkVector(vectorSize);
        multiset<int, greater<int>> evenSet;
        multiset<int, greater<int>> oddSet;
        vector<int> finalVector;

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
            if (integerVector[i] % 2 == 0)
            {
                checkVector[i] = true;
                evenSet.insert(integerVector[i]);
            }
            else
            {
                checkVector[i] = false;
                oddSet.insert(integerVector[i]);
            }
        }

        for (int i = 0; i < vectorSize; i++)
        {
            if (checkVector[i] == false)
            {
                if (!evenSet.empty())
                {
                    int integerValue = *evenSet.rbegin();
                    finalVector[i] = integerValue;

                    if (integerValue == integerVector[i])
                    {
                        auto it = evenSet.end();
                        --it;
                        evenSet.erase(it);
                    }
                }
            }
            else
            {
                if (!oddSet.empty())
                {
                    int oddValue = *oddSet.rbegin();
                    int evenValue = INT_MAX;

                    if (!evenSet.empty())
                    {
                        evenValue = *evenSet.rbegin();
                    }

                    if (evenValue < oddValue)
                    {
                        finalVector[i] = evenValue;
                        auto it = evenSet.end();
                        --it;
                        evenSet.erase(it);
                    }
                    else
                    {
                        finalVector[i] = oddValue;
                        auto it = oddSet.end();
                        --it;
                        oddSet.erase(it);
                    }
                }
            }
        }

        for (int integerValue : integerVector)
        {
            cout << integerValue << " ";
        }

        cout << "\n";
    }

    return 0;
}