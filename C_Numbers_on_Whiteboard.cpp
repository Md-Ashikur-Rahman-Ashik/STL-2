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
        int inputValue;
        cin >> inputValue;

        int currentValue = inputValue;

        cout << 2 << "\n";

        for (int i = inputValue - 1; i >= 1; i--)
        {
            cout << i << " " << currentValue << "\n";
            currentValue = ceil((currentValue + i) / 2.0);
        }
    }

    return 0;
}