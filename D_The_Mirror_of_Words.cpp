#include <bits/stdc++.h>
using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    int stringSize = inputString.length();

    string newString = inputString;
    reverse(newString.begin(), newString.end());

    vector<string> stringVector;
    string anotherString;

    int countSize = 0;

    for (int i = 0; i < stringSize; i++)
    {
        if (inputString[i] == newString[i])
        {
            anotherString.push_back(inputString[i]);
        }
        else
        {
            int finalStringSize = anotherString.length();
            if (finalStringSize > countSize)
            {
                stringVector.push_back(anotherString);
                countSize = finalStringSize;
                anotherString = "";
            }
        }
    }

    int vectorSize = stringVector.size();
    

    for (int i = vectorSize - 1; i >= 0; i--)
    {
        string firstString = stringVector[i];
        string reversedString = firstString;
        reverse(reversedString.begin(), reversedString.end());
        if (firstString == reversedString)
        {
            cout << firstString;
            break;
        }
    }

    return 0;
}