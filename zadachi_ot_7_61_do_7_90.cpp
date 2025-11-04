#include <stdio.h>

int main()
{
    int i, j, k, n, s, m;

    // 7.61
    printf("7.61:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d ", i * i + j * j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.62
    printf("7.62:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.63
    printf("7.63:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.64
    printf("7.64:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i - j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.65
    printf("7.65:\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.66
    printf("7.66:\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.67
    printf("7.67:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", (i + j) % 2);
        }
        printf("\n");
    }
    printf("\n");

    // 7.68
    printf("7.68:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", (i * j) % 2);
        }
        printf("\n");
    }
    printf("\n");

    // 7.69
    printf("7.69:\n");
    for (i = 1; i <= 100; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0) s += j;
        }
        if (s == i) printf("%d ", i);
    }
    printf("\n\n");

    // 7.70
    printf("7.70:\n");
    for (n = 1; n <= 100; n++)
    {
        k = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0) k++;
        }
        if (k == 2) printf("%d ", n);
    }
    printf("\n\n");

    // 7.71
    printf("7.71:\n");
    for (i = 10; i <= 99; i++)
    {
        if ((i / 10 + i % 10) % 2 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.72
    printf("7.72:\n");
    for (i = 100; i <= 999; i++)
    {
        if ((i / 100 + (i / 10) % 10 + i % 10) == 15) printf("%d ", i);
    }
    printf("\n\n");

    // 7.73
    printf("7.73:\n");
    for (i = 10; i <= 99; i++)
    {
        if (i % 3 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.74
    printf("7.74:\n");
    for (i = 100; i <= 999; i++)
    {
        if (i % 7 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.75
    printf("7.75:\n");
    for (i = 10; i <= 99; i++)
    {
        if (i % 11 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.76
    printf("7.76:\n");
    for (i = 10; i <= 99; i++)
    {
        if (i % 2 != 0 && i % 3 != 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.77
    printf("7.77:\n");
    for (i = 100; i <= 999; i++)
    {
        if (i % 5 == 0 && i % 7 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.78
    printf("7.78:\n");
    for (i = 10; i <= 99; i++)
    {
        if ((i / 10) == (i % 10)) printf("%d ", i);
    }
    printf("\n\n");

    // 7.79
    printf("7.79:\n");
    for (i = 100; i <= 999; i++)
    {
        if ((i / 100) == (i % 10)) printf("%d ", i);
    }
    printf("\n\n");

    // 7.80
    printf("7.80:\n");
    for (i = 100; i <= 999; i++)
    {
        if ((i / 100) != ((i / 10) % 10) && (i / 100) != (i % 10) && ((i / 10) % 10) != (i % 10))
            printf("%d ", i);
    }
    printf("\n\n");

    // 7.81
    printf("7.81:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i * i <= 100) printf("%d ", i * i);
    }
    printf("\n\n");

    // 7.82
    printf("7.82:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i * i * i);
    }
    printf("\n\n");

    // 7.83
    printf("7.83:\n");
    for (i = 1; i <= 10; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++) s += j;
        printf("%d ", s);
    }
    printf("\n\n");

    // 7.84
    printf("7.84:\n");
    for (i = 1; i <= 10; i++)
    {
        m = 1;
        for (j = 1; j <= i; j++) m *= j;
        printf("%d ", m);
    }
    printf("\n\n");

    // 7.85
    printf("7.85:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.86
    printf("7.86:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j == 6) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.87
    printf("7.87:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.88
    printf("7.88:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 3) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.89
    printf("7.89:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i <= j) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.90
    printf("7.90:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i >= j) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
