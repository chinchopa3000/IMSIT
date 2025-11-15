#include <stdio.h>

int main()
{
    int i, j, k, n, s, x, y, a, b, c, temp, found;

    // 8.51
    printf("8.51:\n");
    a = 12;
    b = 18;
    x = a;
    y = b;
    while (x != y)
    {
        if (x > y)
        {
            x -= y;
        }
        else
        {
            y -= x;
        }
    }
    printf("%d\n", (a * b) / x);
    printf("\n");

    // 8.52
    printf("8.52:\n");
    n = 28;
    s = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        printf("perfect\n");
    }
    else
    {
        printf("not perfect\n");
    }
    printf("\n");

    // 8.53
    printf("8.53:\n");
    for (i = 1; i <= 500; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                s += j;
            }
        }
        if (s == i)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.54
    printf("8.54:\n");
    n = 10;
    a = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a += 2;
    }
    printf("\n\n");

    // 8.55
    printf("8.55:\n");
    n = 10;
    a = 2;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a += 2;
    }
    printf("\n\n");

    // 8.56
    printf("8.56:\n");
    n = 5;
    a = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a *= 2;
    }
    printf("\n\n");

    // 8.57
    printf("8.57:\n");
    n = 5;
    a = 1;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        s += a;
        a *= 2;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.58
    printf("8.58:\n");
    n = 12345;
    temp = n;
    k = 0; // max digit
    while (temp > 0)
    {
        if (temp % 10 > k)
        {
            k = temp % 10;
        }
        temp /= 10;
    }
    printf("%d\n", k);
    printf("\n");

    // 8.59
    printf("8.59:\n");
    n = 12345;
    temp = n;
    k = 9; // min digit
    while (temp > 0)
    {
        if (temp % 10 < k)
        {
            k = temp % 10;
        }
        temp /= 10;
    }
    printf("%d\n", k);
    printf("\n");

    // 8.60
    printf("8.60:\n");
    n = 1223;
    k = 0;
    temp = n;
    while (temp > 0)
    {
        if (temp % 10 == 2)
        {
            k++;
        }
        temp /= 10;
    }
    printf("%d\n", k);
    printf("\n");

    // 8.61
    printf("8.61:\n");
    n = 123;
    found = 0;
    temp = n;
    while (temp > 0)
    {
        if (temp % 10 == 5)
        {
            found = 1;
        }
        temp /= 10;
    }
    if (found)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    printf("\n");

    // 8.62
    printf("8.62:\n");
    n = 123;
    s = 0;
    temp = n;
    while (temp > 0)
    {
        s += temp % 10;
        temp /= 10;
    }
    if (s % 2 == 0)
    {
        printf("even sum\n");
    }
    else
    {
        printf("odd sum\n");
    }
    printf("\n");

    // 8.63
    printf("8.63:\n");
    n = 4;
    s = 1;
    for (i = 1; i <= n; i++)
    {
        s *= 2;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.64
    printf("8.64:\n");
    x = 2;
    n = 5;
    s = 1;
    for (i = 1; i <= n; i++)
    {
        s *= x;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.65
    printf("8.65:\n");
    n = 10;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i * i);
        }
    }
    printf("\n\n");

    // 8.66
    printf("8.66:\n");
    n = 10;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i * i * i);
        }
    }
    printf("\n\n");

    // 8.67
    printf("8.67:\n");
    a = 1;
    b = 20;
    for (i = a; i <= b; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 8.68
    printf("8.68:\n");
    n = 6;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s++;
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 8.69
    printf("8.69:\n");
    n = 6;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 8.70
    printf("8.70:\n");
    n = 10;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i * 10);
    }
    printf("\n\n");

    // 8.71
    printf("8.71:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // 8.72
    printf("8.72:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 8.73
    printf("8.73:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n");

    // 8.74
    printf("8.74:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");

    // 8.75
    printf("8.75:\n");
    n = 5;
    k = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
    printf("\n");

    // 8.76
    printf("8.76:\n");
    n = 123;
    s = 1;
    temp = n;
    while (temp > 0)
    {
        s *= (temp % 10);
        temp /= 10;
    }
    printf("%d\n", s);
    printf("\n");

    // 8.77
    printf("8.77:\n");
    a = 12;
    b = 18;
    c = 24;
    x = a;
    y = b;
    while (x != y)
    {
        if (x > y) x -= y;
        else y -= x;
    }
    temp = x;
    y = c;
    while (temp != y)
    {
        if (temp > y) temp -= y;
        else y -= temp;
    }
    printf("%d\n", temp);
    printf("\n");

    // 8.78
    printf("8.78:\n");
    n = 10;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        s += i;
    }
    printf("%.2f\n", (double)s / n);
    printf("\n");

    // 8.79
    printf("8.79:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // 8.80
    printf("8.80:\n");
    n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
