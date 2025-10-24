#include <bits/stdc++.h>
using namespace std;

int main()
{
    int setSize, queries;
    cin >> setSize >> queries;

    multiset<int> integerSet;
    for (int i = 0; i < setSize; i++)
    {
        int inputValue;
        cin >> inputValue;
        integerSet.insert(inputValue);
    }

    while (queries--)
    {
        int operation;
        cin >> operation;

        if (operation == 0)
        {
            int inputValue;
            cin >> inputValue;

            integerSet.insert(inputValue);
        }
        else if (operation == 1)
        {
            auto minimumElement = integerSet.begin();
            cout << *minimumElement << "\n";

            auto firstElement = integerSet.begin();
            integerSet.erase(firstElement);
        }
        else
        {
            auto maximumElement = integerSet.rbegin();
            cout << *maximumElement << "\n";

            auto lastElement = integerSet.end();
            lastElement--;
            integerSet.erase(lastElement);
        }
    }

    return 0;
}