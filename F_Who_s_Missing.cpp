#include <bits/stdc++.h>
using namespace std;

int main()
{
    int vectorSize;
    cin >> vectorSize;
    vector<int> integerVector(vectorSize);
    for (int i = 1; i < vectorSize; i++)
    {
        cin >> integerVector[i];
    }

    sort(integerVector.begin(), integerVector.end());

    for (int i = 1; i <= vectorSize; i++)
    {
        if (i != integerVector[i])
        {
            cout << i;
            break;
        }
    }

    return 0;
}