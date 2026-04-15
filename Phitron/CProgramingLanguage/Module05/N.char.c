#include <stdio.h>

int main()
{
    char input;
    scanf("%c\n", &input);

    if (input >= 97 && input <= 122)
    {
        printf("%c", input - 32);
    }
    else
    {
        printf("%c", input + 32);
    }

    return 0;
}