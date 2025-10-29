#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfQueue, queries;
    cin >> numberOfQueue >> queries;

    vector<priority_queue<int>> queueVector(numberOfQueue);

    while (queries--)
    {
        int operation;
        cin >> operation;

        if (operation == 0)
        {
            int queueIndex, inputValue;
            cin >> queueIndex >> inputValue;

            queueVector[queueIndex].push(inputValue);
        }
        else if (operation == 1)
        {
            int queueIndex;
            cin >> queueIndex;

            if (!queueVector[queueIndex].empty())
            {
                cout << queueVector[queueIndex].top() << "\n";
            }
        }
        else if (operation == 2)
        {
            int queueIndex;
            cin >> queueIndex;

            if (!queueVector[queueIndex].empty())
            {
                queueVector[queueIndex].pop();
            }
        }
    }

    return 0;
}