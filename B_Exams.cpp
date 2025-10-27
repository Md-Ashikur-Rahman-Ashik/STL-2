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
        long long int numberOfSchools, eachStudent, totalPassed;
        cin >> numberOfSchools >> eachStudent >> totalPassed;

        long long int totalAppeared = numberOfSchools * eachStudent;
        long long int halfOfTotal = totalAppeared / 2;

        if (totalPassed > halfOfTotal)
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