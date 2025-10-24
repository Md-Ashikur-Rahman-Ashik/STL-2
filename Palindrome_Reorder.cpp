#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string inputString;
    cin >> inputString;

    map<char, int> characterMap;

    for (auto individualCharacter : inputString)
    {
        characterMap[individualCharacter]++;
    }

    int frequencyOfOdd = 0;
    char oddCharacter;
    string finalString;

    for (auto [firstValue, secondValue] : characterMap)
    {
        if (secondValue % 2 == 1)
        {
            frequencyOfOdd++;
            oddCharacter = firstValue;
        }

        for (int i = 1; i <= secondValue / 2; i++)
        {
            finalString.push_back(firstValue);
        }
    }

    if (frequencyOfOdd == 0)
    {
        cout << finalString;
        reverse(finalString.begin(), finalString.end());
        cout << finalString;
    }
    else if (frequencyOfOdd == 1)
    {
        cout << finalString << oddCharacter;
        reverse(finalString.begin(), finalString.end());
        cout << finalString;
    }
    else
    {
        cout << "NO SOLUTION";
    }

    return 0;
}