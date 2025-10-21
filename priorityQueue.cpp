#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // priority_queue<int> integerQueue;
    // integerQueue.push(5);
    // // cout << integerQueue.top() << '\n';
    // integerQueue.pop();
    // integerQueue.size();
    // cout << integerQueue.empty() << '\n';

    priority_queue<int, vector<int>, greater<int>> integerQueue;
    while (!integerQueue.empty())
    {
        int integerValue = integerQueue.top();
        cout << integerValue << '\n';
        integerQueue.pop();
    }

    return 0;
}