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
        map<int, int> integerMap;

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
            int integerValue = integerVector[i];
            integerMap[integerValue]++;
        }

        int numberOfString;
        cin >> numberOfString;

        for (int i = 0; i < numberOfString; i++)
        {
            map<char, int> characterMap;

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
                char individualCharacter = inputString[i];
                characterMap[individualCharacter]++;
            }

            bool flag = true;

            for (int i = 0; i < vectorSize; i++)
            {
                int integerValue = integerVector[i];
                char characterValue = inputString[i];

                if (integerMap[integerValue] != characterMap[characterValue])
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