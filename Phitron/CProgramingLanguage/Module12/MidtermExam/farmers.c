#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m1;
    int m2;
    int d;

    int totalDays = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        if(m2 == 0){
        printf("%d\n", totalDays);
        totalDays = 0;
        continue;
        }
        
        int x = m1 * d;
        int y = x / (m2+m1);
        totalDays = d-y;
        printf("%d\n", totalDays);
        totalDays = 0;
    }

    return 0;
}