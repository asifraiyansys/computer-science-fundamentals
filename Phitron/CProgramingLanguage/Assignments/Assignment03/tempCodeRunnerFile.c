#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    int countElement1 = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = N - 1; j >= i; j--)
        {
            printf(" ");
        }

        if (i % 2 != 0)
        {
            for (int j = 1; j <= countElement1; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= countElement1; j++)
            {
                printf("-");
            }
        }

        printf("\n");
        countElement1 += 2;
    }

    return 0;
}