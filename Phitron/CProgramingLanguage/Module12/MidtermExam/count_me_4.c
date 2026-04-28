#include <stdio.h>
#include <string.h>

int main()
{

    char input[10001];
    scanf("%s", input);

    char ch[256] = {0};

  int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        int val = input[i];
        if (val != 0)
        {

            ch[val]++;
        }
    }

    for (int i = 97; i <= 122; i++)
    {
        int k = ch[i];

        if (k >0)
        {
            printf("%c - %d\n", i, k);
        }
    }

    return 0;
}