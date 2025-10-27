#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    string testString = "01010100";

    while (testcase--)
    {
        string inputString;
        cin >> inputString;

        int stringSize = inputString.length();

        for (int i = 0; i < stringSize; i++)
        {
            if (inputString[i] == 'A' || inputString[i] == 'E' || inputString[i] == 'I' || inputString[i] == 'U' || inputString[i] == 'O')
            {
                inputString[i] = '1';
            }
            else
            {
                inputString[i] = '0';
            }
        }

        if (testString == inputString)
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