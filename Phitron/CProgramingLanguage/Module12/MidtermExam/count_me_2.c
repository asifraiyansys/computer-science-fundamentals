#include <stdio.h>
#include <string.h>

int main()
{

    char strVal[100001];
    scanf("%s", &strVal);

    int totalConstant = 0;

    for (int i = 0; i < strlen(strVal); i++)
    {
        char ch = strVal[i];
        if (
            ch == 'b' 
            || ch == 'c'
            || ch == 'd'
            || ch == 'f'
            || ch == 'g'
            || ch == 'h'
            || ch == 'j' 
            || ch == 'k'
            || ch == 'l'
            || ch == 'm'
            || ch == 'n'
            || ch == 'p'
            || ch == 'q'
            || ch == 'r'
            || ch == 's'
            || ch == 't'
            || ch == 'v'
            || ch == 'w'
            || ch == 'x' 
            || ch == 'y'
            || ch == 'z'
        
        )
        {
            totalConstant++;
        }
    }

    printf("%d", totalConstant);

    return 0;
}