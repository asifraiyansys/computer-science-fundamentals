#include <stdio.h>

int main()
{

    long long int n;
    scanf("%lld", &n);

    long long int arr[n];

    long long int fResult = 0;

    long long int mul = 1;

    long long int result = 0;

    for (long long int i = 0; i < n; i++)
    {

        for (long long int j = 0; j < 4; j++)
        {
            scanf("%lld", &arr[j]);

            if (j == 0)
            {
                fResult = arr[j];
            }
            else
            {
                mul = mul * arr[j];
            }
        }

        if (fResult == 0)
        {
            result = 0;
        }
        else
        {

            if (fResult % mul == 0)
            {
                result = fResult / mul;
            }
            else
            {
                result = -1;
            }
        }

        printf("%lld", result);

        mul = 1;
        result = 0;

        printf("\n");
    }

    return 0;
}