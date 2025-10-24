#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int vectorSize;
        cin >> vectorSize;

        set<int> integerSet;
        for (int i = 0; i < vectorSize; i++)
        {
            int inputValue;
            cin >> inputValue;
            integerSet.insert(inputValue);
        }

        int firstSetSize = integerSet.size();

        int queries;
        cin >> queries;

        for (int i = 0; i < queries; i++)
        {
            string inputString;
            cin >> inputString;

            set<char> characterSet;
            int stringSize = inputString.length();

            if (vectorSize != stringSize)
            {
                cout << "NO\n";
                continue;
            }

            for (int i = 0; i < stringSize; i++)
            {
                characterSet.insert(inputString[i]);
            }

            int secondSetSize = characterSet.size();
            if (firstSetSize != secondSetSize)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}