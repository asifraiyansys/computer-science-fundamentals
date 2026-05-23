#include <stdio.h>
#include <stdbool.h>
int main()
{

    int n;
    int m;

    scanf("%d %d", &n, &m);

    int matrix[n][m];

    bool isJaduMatrixs = false;
    bool isBreak = false;

    if (n != m)
    {
        isJaduMatrixs = false;
    }
    else
    {

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (i == j)
                {
                    if (matrix[i][j] != 1)
                    {
                        isJaduMatrixs = false;
                        isBreak = true;
                        break;
                    }
                    else
                    {
                        isJaduMatrixs = true;
                    }
                }

                else if (i == m - j - 1)
                {
                    if (matrix[i][j] != 1)
                    {
                        isJaduMatrixs = false;
                        isBreak = true;
                        break;
                    }
                    else
                    {
                        isJaduMatrixs = true;
                    }
                }
                else
                {

                    if (matrix[i][j] != 0)
                    {
                        isJaduMatrixs = false;
                        isBreak = true;
                        break;
                    }
                    else
                    {
                        isJaduMatrixs = true;
                    }
                }
            }
            if (isBreak == true)
            {
                break;
            }
        }
    }

    if (isJaduMatrixs == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}