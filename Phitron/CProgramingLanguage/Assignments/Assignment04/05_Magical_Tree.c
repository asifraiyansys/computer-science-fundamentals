#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int total = 5;

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            total++;
        }
    }

    int totalCol = 1;

    for (int i = 1; i <= total; i++)
    {

        for (int j = total - i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < totalCol; k++)
        {
            printf("*");
        }
        printf("\n");
        totalCol += 2;
    }

    for (int i = 0; i < 5; i++)
    {
        for(int i = 0; i<5; i++){
            printf(" ");
        }
        for (int j = 0; j < N; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}