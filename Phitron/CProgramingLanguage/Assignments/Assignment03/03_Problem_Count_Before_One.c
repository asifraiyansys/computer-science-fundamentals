#include <stdio.h>

int count_before_one(int array[], int N)
{
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (array[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int N;
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    int count = count_before_one(array, N);

    printf("%d", count);
}