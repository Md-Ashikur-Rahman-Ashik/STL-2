#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int integerValue;
        cin >> integerValue;

        string finalString;
        for (int i = 0; i < integerValue; i++)
        {
            char individualCharacter = 'a' + i;
            finalString.push_back(individualCharacter);
        }

        vector<string> stringVector;
        stringVector.push_back(finalString);

        map<string, int> stringMap;

        while (next_permutation(finalString.begin(), finalString.end()))
        {
            if (stringMap[finalString] == 0)
            {
                stringVector.push_back(finalString);
            }
        }

        int vectorSize = stringVector.size();
        cout << vectorSize << "\n";
    }

    return 0;
}