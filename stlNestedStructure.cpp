#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // vector<set<int>> setVector;
    // vector<multiset<int>> vectorOfSet;

    // map<int, int> integerMap;
    // map<vector<int>, int> mapOfVector;

    // vector<int> integerVector;
    // integerVector.push_back(2);

    // mapOfVector[integerVector] = 5;

    // for (auto [valueVector, value] : mapOfVector)
    // {
    //     for (auto individualValue : valueVector)
    //     {
    //         cout << individualValue << " ";
    //     }
    // }

    map<int, set<int>> mapOfSet;

    set<int> firstSet;
    firstSet.insert(2);

    set<int> secondSet;
    secondSet.insert(5);

    set<int> thirdSet;
    thirdSet.insert(2);

    mapOfSet[5] = firstSet;
    mapOfSet[7] = secondSet;
    mapOfSet[10] = thirdSet;

    // for (auto [integerValue, integerSet] : mapOfSet)
    // {
    //     cout << integerValue << '\n';
    //     for (auto individualValue : integerSet)
    //     {
    //         cout << individualValue << " ";
    //     }
    // }

    int firstValue = 6, secondValue = 8;
    auto firstLowerBound = mapOfSet.lower_bound(firstValue);
    if(firstLowerBound != mapOfSet.end()){
        int integerValue = firstLowerBound->first;
    }

    return 0;
}