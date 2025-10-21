#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // vector<set<int>> setVector;
    // vector<multiset<int>> vectorOfSet;

    // map<int, int> integerMap;
    map<vector<int>, int> mapOfVector;

    vector<int> integerVector;
    integerVector.push_back(2);

    mapOfVector[integerVector] = 5;

    for (auto [valueVector, value] : mapOfVector)
    {
        for (auto individualValue : valueVector)
        {
            cout << individualValue << " ";
        }
    }

    return 0;
}