#include <stdio.h>

int main()
{
    int i, j, k, n, s, x, y, a, b, c, temp;

    // 8.21
    printf("8.21:\n");
    n = 10;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.22
    printf("8.22:\n");
    n = 10;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.23
    printf("8.23:\n");
    a = 5;
    b = 15;
    for (i = a; i <= b; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.24
    printf("8.24:\n");
    n = 12;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.25
    printf("8.25:\n");
    a = 12;
    b = 18;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.26
    printf("8.26:\n");
    a = 12;
    b = 18;
    k = 1;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            k = i;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 8.27
    printf("8.27:\n");
    a = 12;
    b = 18;
    for (i = (a > b ? a : b); ; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    printf("\n");

    // 8.28
    printf("8.28:\n");
    n = 123;
    s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.29
    printf("8.29:\n");
    n = 123;
    k = 0;
    while (n > 0)
    {
        k++;
        n /= 10;
    }
    printf("%d\n", k);
    printf("\n");

    // 8.30
    printf("8.30:\n");
    n = 123;
    while (n > 0)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    printf("\n\n");

    // 8.31
    printf("8.31:\n");
    n = 456;
    x = 0;
    while (n > 0)
    {
        x = x * 10 + (n % 10);
        n /= 10;
    }
    printf("%d\n", x);
    printf("\n");

    // 8.32
    printf("8.32:\n");
    n = 121;
    a = n;
    x = 0;
    while (a > 0)
    {
        x = x * 10 + (a % 10);
        a /= 10;
    }
    if (x == n)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    printf("\n");

    // 8.33
    printf("8.33:\n");
    x = 10;
    y = 20;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d\n", x, y);
    printf("\n");

    // 8.34
    printf("8.34:\n");
    a = 10;
    b = 20;
    c = 30;
    temp = a;
    a = b;
    b = c;
    c = temp;
    printf("%d %d %d\n", a, b, c);
    printf("\n");

    // 8.35
    printf("8.35:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 8.36
    printf("8.36:\n");
    n = 5;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 8.37
    printf("8.37:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 8.38
    printf("8.38:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // 8.39
    printf("8.39:\n");
    n = 10;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        s += i * i;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.40
    printf("8.40:\n");
    n = 5;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        k = 1;
        for (j = 1; j <= i; j++)
        {
            k *= j;
        }
        s += k;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.41
    printf("8.41:\n");
    x = 2;
    n = 3;
    s = 0;
    k = 1;
    for (i = 1; i <= n; i++)
    {
        k *= x;
        s += k;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.42
    printf("8.42:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }
    printf("\n\n");

    // 8.43
    printf("8.43:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i * i * i);
    }
    printf("\n\n");

    // 8.44
    printf("8.44:\n");
    n = 5;
    a = 0;
    b = 1;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n\n");

    // 8.45
    printf("8.45:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.46
    printf("8.46:\n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.47
    printf("8.47:\n");
    a = 10;
    b = 20;
    s = 0;
    k = 0;
    for (i = a; i <= b; i++)
    {
        s += i;
        k++;
    }
    printf("%d\n", s / k);
    printf("\n");

    // 8.48
    printf("8.48:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\n");

    // 8.49
    printf("8.49:\n");
    n = 10;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            k = 0;
            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    k++;
                }
            }
            if (k == 2)
            {
                printf("%d ", i);
            }
        }
    }
    printf("\n\n");

    // 8.50
    printf("8.50:\n");
    a = 12;
    b = 18;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    printf("%d\n", a);
    printf("\n");

    return 0;
}
