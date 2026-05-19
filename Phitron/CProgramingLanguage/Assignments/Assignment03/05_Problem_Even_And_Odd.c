#include <stdio.h>

void odd_even()
{
    int N;
    scanf("%d", &N);

    int array[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    int count_odd = 0;
    int count_even = 0;

    for (int i = 0; i < N; i++)
    {
        if (array[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }

    printf("%d %d", count_even, count_odd);
}

int main()
{

    odd_even();

    return 0;
}