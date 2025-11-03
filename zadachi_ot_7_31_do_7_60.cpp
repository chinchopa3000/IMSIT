#include <stdio.h>

int main()
{
    int i, j, k, n, s;

    // 7.31
    printf("7.31:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i + j - 1);
        }
        printf("\n");
    }
    printf("\n");

    // 7.32
    printf("7.32:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.33
    printf("7.33:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 6 - i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.34
    printf("7.34:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%d ", i + j - 1);
        }
        printf("\n");
    }
    printf("\n");

    // 7.35
    printf("7.35:\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.36
    printf("7.36:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", 5 - i + j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.37
    printf("7.37:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("%d ", 6 - j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.38
    printf("7.38:\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", 6 - j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.39
    printf("7.39:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", 6 - i);
        }
        printf("\n");
    }
    printf("\n");

    // 7.40
    printf("7.40:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", 5);
        }
        printf("\n");
    }
    printf("\n");

    // 7.41
    printf("7.41:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.42
    printf("7.42:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.43
    printf("7.43:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j == 6) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.44
    printf("7.44:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i >= j) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.45
    printf("7.45:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i <= j) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.46
    printf("7.46:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j <= 6) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.47
    printf("7.47:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j >= 6) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.48
    printf("7.48:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j || i + j == 6) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.49
    printf("7.49:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.50
    printf("7.50:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 3) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.51
    printf("7.51:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i % 2 != 0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.52
    printf("7.52:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j % 2 != 0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.53
    printf("7.53:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i + j) % 2 == 0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.54
    printf("7.54:\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.55
    printf("7.55:\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d\t", i + j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.56
    printf("7.56:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", (i + j) % 10);
        }
        printf("\n");
    }
    printf("\n");

    // 7.57
    printf("7.57:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", (i * j) % 10);
        }
        printf("\n");
    }
    printf("\n");

    // 7.58
    printf("7.58:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // 7.59
    printf("7.59:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.60
    printf("7.60:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
