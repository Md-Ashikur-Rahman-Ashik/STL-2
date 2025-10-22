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

        map<int, int> integerMap;
        for (int i = 0; i < vectorSize; i++)
        {
            int integerValue;
            cin >> integerValue;
            integerMap[integerValue]++;
        }

        priority_queue<int> integerQueue;
        for (auto [value, count] : integerMap)
        {
            integerQueue.push(count);
        }

        while (!integerQueue.empty())
        {
            int firstValue, secondValue;
            firstValue = integerQueue.top();
            integerQueue.pop();

            if (!integerQueue.empty())
            {
                secondValue = integerQueue.top();
                integerQueue.pop();
            }
            else
            {
                integerQueue.push(firstValue);
                break;
            }

            firstValue--;
            secondValue--;

            if (firstValue != 0)
            {
                integerQueue.push(firstValue);
            }

            if (secondValue != 0)
            {
                integerQueue.push(secondValue);
            }
        }

        if (!integerQueue.empty())
        {
            cout << integerQueue.top() << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }

    return 0;
}