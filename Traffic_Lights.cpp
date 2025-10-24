#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int streetLength, queries;
    cin >> streetLength >> queries;

    set<int> lights;
    multiset<int> distanceSet;

    lights.insert(0);
    lights.insert(streetLength);

    distanceSet.insert(streetLength);

    for (int i = 1; i <= queries; i++)
    {
        int position;
        cin >> position;
        auto it = lights.upper_bound(position);
        int right = *it;

        it--;
        int left = *it;

        distanceSet.erase(distanceSet.find(right - left));
        distanceSet.insert(right - position);
        distanceSet.insert(position - left);

        lights.insert(position);

        cout << *distanceSet.rbegin() << " ";
    }

    return 0;
}