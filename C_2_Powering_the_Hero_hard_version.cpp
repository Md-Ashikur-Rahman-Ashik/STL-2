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

        priority_queue<int> integerQueue;

        long long int sum = 0;

        for (int i = 0; i < vectorSize; i++)
        {
            if (integerVector[i] > 0)
            {
                integerQueue.push(integerVector[i]);
            }
            else
            {
                if (!integerQueue.empty())
                {
                    int integerValue = integerQueue.top();
                    sum = sum + integerValue;
                    integerQueue.pop();
                }
            }
        }

        cout << sum << "\n";
    }

    return 0;
}