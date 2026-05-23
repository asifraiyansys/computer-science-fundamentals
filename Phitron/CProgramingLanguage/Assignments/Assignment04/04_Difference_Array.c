#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {

        int N;
        scanf("%d", &N);
        int A[N];
        int B[N];
        int C[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }


        for (int i = 0; i < N - 1; i++)
        {

            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        for (int i = 0; i < N; i++)
        {
            C[i] = A[i] - B[i];

            printf("%d", abs(C[i]));
            if (i != N - 1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}