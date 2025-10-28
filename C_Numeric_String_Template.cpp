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
        vector<int> integerVector(vectorSize);

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
            int integerValue = integerVector[i];
        }

        int numberOfString;
        cin >> numberOfString;

        for (int i = 0; i < numberOfString; i++)
        {
            map<int, set<char>> integerMap;
            map<char, set<int>> characterMap;

            string inputString;
            cin >> inputString;

            int stringSize = inputString.length();

            if (vectorSize != stringSize)
            {
                cout << "NO\n";
                continue;
            }

            for (int i = 0; i < stringSize; i++)
            {
                int integerValue = integerVector[i];
                char individualCharacter = inputString[i];

                integerMap[integerValue].insert(individualCharacter);
                characterMap[individualCharacter].insert(integerValue);
            }

            bool flag = true;

            for (int i = 0; i < vectorSize; i++)
            {
                int integerValue = integerVector[i];
                char characterValue = inputString[i];

                if (integerMap[integerValue].size() > 1 || characterMap[characterValue].size() > 1)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}