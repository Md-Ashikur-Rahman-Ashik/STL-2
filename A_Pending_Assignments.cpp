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
        long long int numberOfAssignments, individualTime, numberOfDays;
        cin >> numberOfAssignments >> individualTime >> numberOfDays;

        long long int totalTime = numberOfDays * 24 * 60;
        long long int usedTime = numberOfAssignments * individualTime;

        if (usedTime <= totalTime)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}