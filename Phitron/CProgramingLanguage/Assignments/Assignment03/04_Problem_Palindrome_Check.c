#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int result = 1;

    int length = strlen(S);

    int left = 0;
    int right = length - 1;

    for (int i = 0; i < length; i++)
    {

        if (S[i] != '\0')
        {
            if (S[left] != S[right])
            {
                result = 0;
                break;
            }
            left++;
            right--;
        }
    }

    return result;
}

int main()
{
    char S[1001];

    scanf("%s", S);

    int result = is_palindrome(S);

    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}