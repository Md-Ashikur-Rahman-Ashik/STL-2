#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string inputString;
    cin >> inputString;
    sort(inputString.begin(), inputString.end());

    vector<string> stringVector;
    stringVector.push_back(inputString);

    while (next_permutation(inputString.begin(), inputString.end()))
    {
        stringVector.push_back(inputString);
    }

    cout << stringVector.size() << "\n";
    for (auto individualString : stringVector)
    {
        cout << individualString << "\n";
    }

    return 0;
}