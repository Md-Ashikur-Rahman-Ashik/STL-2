#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize, queries;
    cin >> vectorSize >> queries;
    vector<int> integerVector(vectorSize + 1);
    for (int i = 1; i <= vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    int integerArray[vectorSize + 1];
    map<int, int> integerMap;

    int count = 0;

    for (int i = vectorSize; i >= 1; i--)
    {
        int integerValue = integerVector[i];
        if (integerMap[integerValue] == 0)
        {
            count++;
            integerMap[integerValue]++;
            integerArray[i] = count;
        }
        else
        {
            integerMap[integerValue]++;
            integerArray[i] = count;
        }
    }

    for (int i = 0; i < queries; i++)
    {
        int inputValue;
        cin >> inputValue;

        cout << integerArray[inputValue] << '\n';
    }

    return 0;
}