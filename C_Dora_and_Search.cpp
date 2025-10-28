#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int vectorSize;
        cin >> vectorSize;
        vector<int> integerVector(vectorSize);
        set<int> integerSet;

        for (int i = 0; i < vectorSize; i++)
        {
            cin >> integerVector[i];
            int integerValue = integerVector[i];
            integerSet.insert(integerValue);
        }

        int leftIndex = 0;
        int rightIndex = vectorSize - 1;

        int desiredMinimum = INT_MAX;
        int desiredMaximum = INT_MIN;

        while (leftIndex < rightIndex)
        {
            auto minElement = integerSet.begin();
            auto maxElement = integerSet.rbegin();

            if (integerVector[leftIndex] == *minElement)
            {
                leftIndex++;

                auto it = minElement;
                if (++it != integerSet.end())
                {
                    cout << *it << " " << *minElement << "\n";
                    minElement++;
                }
            }
            else if (integerVector[leftIndex] == *maxElement)
            {
                leftIndex++;

                auto it = maxElement;
                if (--it != integerSet.rend())
                {
                    maxElement--;
                }
            }

            
        }
    }

    return 0;
}