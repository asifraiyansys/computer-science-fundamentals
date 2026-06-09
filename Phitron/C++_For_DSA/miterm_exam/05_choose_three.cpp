#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        int N;
        int S = INT_MIN;
        cin >> N >> S;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int flag = 0;

        for (int m = 0; m < N; m++)
        {
            for (int n = m + 1; n < N; n++)
            {

                for (int x = n + 1; x < N; x++)
                {

                    if (arr[m] + arr[n] + arr[x] == S)
                    {

                        flag = 1;
                        break;
                    }
                }
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}