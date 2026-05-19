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
            for (int k = 1; k <= countElement1; k++)
            {
                printf("#");
            }
        }
        else
        {
            for (int k = 1; k <= countElement1; k++)
            {
                printf("-");
            }
        }

        printf("\n");
        countElement1 += 2;
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        if (N % 2 == 0)
        {
            if (i % 2 == 0)
            {
                for (int j = 1; j < countElement1 - 3; j++)
                {
                    printf("-");
                }
            }
            else
            {
                for (int j = 1; j < countElement1 - 3; j++)
                {
                    printf("#");
                }
            }
        }
        else
        {
            if (i % 2 != 0)
            {
                for (int j = 1; j < countElement1 - 3; j++)
                {
                    printf("-");
                }
            }
            else
            {
                for (int j = 1; j < countElement1 - 3; j++)
                {
                    printf("#");
                }
            }
        }

        countElement1 -= 2;

        printf("\n");
    }

    return 0;
}