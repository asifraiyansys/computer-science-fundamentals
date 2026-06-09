#include <bits/stdc++.h>
using namespace std;

int main()
{

    char S[100001];

    while (cin.getline(S, 100001))
    {

        int flag = 0;

        for (int i = 0; i < 100001; i++)
        {

            if (S[i] == '\0')
            {
                break;
            }
            else
            {
                if (S[i] != ' ')
                {
                    S[flag++] = S[i];
                }
            }
        }

        sort(S, S + flag);

        for (int i = 0; i < flag; i++)
        {
            cout << S[i];
        }

        cout << endl;
    }

    return 0;
}