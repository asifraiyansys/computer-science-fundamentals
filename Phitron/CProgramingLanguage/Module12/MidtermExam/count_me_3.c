#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int totalCapitalLetter = 0;
    int totalSmallLetter = 0;
    int totalDigit = 0;

    char arr[10001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s\n", arr);
        for (int i = 0; i < strlen(arr); i++)
        {
            char ch = arr[i];
            if (ch >= 65 && ch <= 90)
            {
                totalCapitalLetter++;
            }
            else if (ch >= 97 && ch <= 122)
            {
                totalSmallLetter++;
            }
            else if(ch >=48 && ch<=57)
            {
                totalDigit++;
            }
        }
        printf("%d %d %d\n", totalCapitalLetter, totalSmallLetter, totalDigit);
        totalCapitalLetter = 0;
        totalSmallLetter = 0;
        totalDigit = 0;
    }

    return 0;
}