#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    scanf("%s", name);
    int n = 7;

    for (int i = 0; i < n; ++i)
    {

        for (int index = 0; index < strlen(name); ++index)
        {

            switch (name[index])
            {
            case 'A':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((j == 0 || j == n - 1) && i != 0) || (i == 0 && j != 0 && j != n - 1) || (i == n / 2))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;

            case 'B':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((i == 0 || i == n / 2 || i == n - 1) && j != 6) || j == 0 || (j == n - 1 && i != 0 && i != n / 2 && i != n - 1))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'C':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((i == 0 || i == n - 1) && j != 0) || (j == 0 && i != 0 && i != n - 1))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'D':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((i == 0 || i == n - 1) && j != n - 1) || j == 0 || (j == n - 1 && i != 0 && i != n - 1))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'E':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ((i == 0 || i == n - 1 || j == 0) || (i == n / 2 && j <= n / 2))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'F':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (i == 0 || j == 0 || (i == n / 2 && j <= n / 2))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'G':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ((i==0 || j==0) || (j==n-1 && i>=n/2) || (j==n-1 && i==1) || (i==n/2 && j>=n/2) || (i==n-1 && j<=n/2) || (j==n/2 && i>=n/2))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'H':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (j == 0 || j == n - 1 || i == n / 2)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'I':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (i == 0 || i == n - 1 || j == n / 2)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'J':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (i == 0 || j == n / 2 || i - j == n / 2)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'K':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (j == 0 || i + j == n / 2 || i - j == n / 2)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'L':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (j == 0 || i == n - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'M':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((i == j || i + j == n - 1) && i <= n / 2) || j == 0 || j == n - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'N':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (j == 0 || j == n - 1 || i == j)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'O':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ((i == 0 || i == n - 1 || j == 0 || j == n - 1) && (i != j && i + j != n - 1))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'P':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ( ((i==0 || i==n/2)&&j!=n-1) || j==0 || (j==n-1 && (i>0 && i<n/2)) )
                        printf("*");
                    else
                        printf(" ");
                    // }
                    // printf("\n");
                }
                break;
            case 'Q':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((j == 0 || j == n / 2 + 1) && (i > 0 && i <= n / 2)) || ((i == 0 || i == n / 2 + 1) && (j > 0 && j <= n / 2)) || (i == j && i >= n / 2))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'R':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ((i == 0 && j < n / 2) || (i == n / 2 && j < n / 2) || (j == n / 2 && i > 0 && i < n / 2) || i - j == n / 2 || j == 0)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'S':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((i == 0 || i == n / 2) && j != 0) || (i == n - 1 && j != n - 1) || (j == 0 && i > 0 && i < n / 2) || (j == n - 1 && i > n / 2 && i < n - 1))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'T':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (i == 0 || j == n / 2)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'U':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (((j == 0 || j == n - 1) && i != n - 1) || (i == n - 1 && j > 0 && j < n - 1))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'V':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ((i == j || i + j == n - 1) && i <= n / 2)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'W':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (j == 0 || j == n - 1 || ((i + j == n - 1 || i == j) && i >= n / 2))
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'X':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (i == j || i + j == n - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'Y':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if ((i == j && i <= n / 2) || i + j == n - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                //     printf("\n");
                // }
                break;
            case 'Z':
                // for (int i = 0; i <= n - 1; ++i)
                // {
                for (int j = 0; j <= n - 1; ++j)
                {
                    if (i == 0 || i == n - 1 || i + j == n - 1)
                        printf("*");
                    else
                        printf(" ");
                }
                // printf("\n");
                // }
                break;

            default:
                break;
            }
            printf(" ");
        }
        printf("\n");
    }
}