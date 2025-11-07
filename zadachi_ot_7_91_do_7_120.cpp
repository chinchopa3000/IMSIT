#include <stdio.h>

int main()
{
    int i, j, k, s, a, b, c, found;

    // 7.91
    printf("7.91:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j <= 6) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.92
    printf("7.92:\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j >= 6) printf("X ");
            else printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    // 7.93
    printf("7.93:\n");
    for (i = 1; i <= 1000; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0) s += j;
        }
        if (s == i) printf("%d ", i);
    }
    printf("\n\n");

    // 7.94
    printf("7.94:\n");
    for (i = 1; i <= 30; i++)
    {
        printf("%d: ", i);
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 7.95
    printf("7.95:\n");
    for (i = 1; i <= 30; i++)
    {
        k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) k++;
        }
        printf("%d: %d\n", i, k);
    }
    printf("\n");

    // 7.96
    printf("7.96:\n");
    for (i = 1; i <= 30; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) s += j;
        }
        printf("%d: %d\n", i, s);
    }
    printf("\n");

    // 7.97
    printf("7.97:\n");
    int max_k = 0;
    for (i = 1; i <= 30; i++)
    {
        k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) k++;
        }
        if (k > max_k) max_k = k;
    }
    printf("%d\n\n", max_k);

    // 7.98
    printf("7.98:\n");
    int max_s = 0;
    for (i = 1; i <= 30; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) s += j;
        }
        if (s > max_s) max_s = s;
    }
    printf("%d\n\n", max_s);

    // 7.99
    printf("7.99:\n");
    for (i = 10; i <= 99; i++)
    {
        for (j = 10; j <= 99; j++)
        {
            if (i + j == 100) printf("%d+%d ", i, j);
        }
    }
    printf("\n\n");

    // 7.100
    printf("7.100:\n");
    for (i = 1; i <= 100; i++)
    {
        for (j = 1; j <= 100; j++)
        {
            if (i * i + j * j == 1000) printf("%d,%d ", i, j);
        }
    }
    printf("\n\n");

    // 7.101
    printf("7.101:\n");
    for (i = 1; i <= 20; i++)
    {
        for (j = 1; j <= 20; j++)
        {
            for (k = 1; k <= 20; k++)
            {
                if (i * i + j * j == k * k) printf("%d,%d,%d ", i, j, k);
            }
        }
    }
    printf("\n\n");

    // 7.102
    printf("7.102:\n");
    for (i = 100; i <= 999; i++)
    {
        a = i / 100; b = (i / 10) % 10; c = i % 10;
        if (a * a * a + b * b * b + c * c * c == i) printf("%d ", i);
    }
    printf("\n\n");

    // 7.103
    printf("7.103:\n");
    for (i = 1; i <= 500; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0) s += j;
        }
        if (s == i) printf("%d ", i);
    }
    printf("\n\n");

    // 7.104
    printf("7.104:\n");
    for (i = 1; i <= 100; i++)
    {
        k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) k++;
        }
        if (k == 2) printf("%d ", i);
    }
    printf("\n\n");

    // 7.105
    printf("7.105:\n");
    for (i = 10; i <= 99; i++)
    {
        if (i % (i / 10 + i % 10) == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.106
    printf("7.106:\n");
    for (i = 100; i <= 999; i++)
    {
        if (i % (i / 100 + (i / 10) % 10 + i % 10) == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.107
    printf("7.107:\n");
    for (i = 10; i <= 99; i++)
    {
        a = i / 10; b = i % 10;
        if ((a * b) > 0 && (a * b) % (a + b) == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.108
    printf("7.108:\n");
    for (i = 100; i <= 999; i++)
    {
        a = i / 100; b = (i / 10) % 10; c = i % 10;
        if ((a + b + c) > 0 && i % (a + b + c) == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.109
    printf("7.109:\n");
    for (i = 1; i <= 100; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) s += j;
        }
        if (s % 2 == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.110
    printf("7.110:\n");
    for (i = 1; i <= 100; i++)
    {
        k = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) k++;
        }
        if (k % 2 != 0) printf("%d ", i);
    }
    printf("\n\n");

    // 7.111
    printf("7.111:\n");
    for (i = 1; i <= 100; i++)
    {
        found = 0;
        for (j = 2; j * j <= i; j++)
        {
            if (i % (j * j) == 0 && i % (j * j * j) != 0) found = 1;
        }
        if (found) printf("%d ", i);
    }
    printf("\n\n");

    // 7.112
    printf("7.112:\n");
    for (i = 10; i <= 99; i++)
    {
        a = i / 10; b = i % 10;
        if ((a + b) + (a + b) * (a + b) == i) printf("%d ", i);
    }
    printf("\n\n");

    // 7.113
    printf("7.113:\n");
    for (i = 10; i <= 99; i++)
    {
        if (2 * (i / 10 * i % 10) == i) printf("%d ", i);
    }
    printf("\n\n");

    // 7.114
    printf("7.114:\n");
    for (i = 100; i <= 999; i++)
    {
        a = i / 100; b = (i / 10) % 10; c = i % 10;
        if (a + b + c == a * b * c) printf("%d ", i);
    }
    printf("\n\n");

    // 7.115
    printf("7.115:\n");
    for (i = 1; i <= 100; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) s++;
        }
        if (s == 3) printf("%d ", i);
    }
    printf("\n\n");

    // 7.116
    printf("7.116:\n");
    for (i = 1; i <= 100; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) s++;
        }
        if (s == 4) printf("%d ", i);
    }
    printf("\n\n");

    // 7.117
    printf("7.117:\n");
    for (i = 1; i <= 100; i++)
    {
        s = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0) s++;
        }
        if (s == 5) printf("%d ", i);
    }
    printf("\n\n");

    // 7.118
    printf("7.118:\n");
    for (i = 10; i <= 99; i++)
    {
        if ((i / 10 + i % 10) > 10) printf("%d ", i);
    }
    printf("\n\n");

    // 7.119
    printf("7.119:\n");
    for (i = 100; i <= 999; i++)
    {
        if ((i / 100 + (i / 10) % 10 + i % 10) < 5) printf("%d ", i);
    }
    printf("\n\n");

    // 7.120
    printf("7.120:\n");
    for (i = 10; i <= 99; i++)
    {
        if ((i / 10) * (i % 10) > 20) printf("%d ", i);
    }
    printf("\n\n");

    return 0;
}
