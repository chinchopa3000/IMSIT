#include <stdio.h>

int main()
{
    // Объявляем абсолютно все переменные, которые используем ниже
    int n, s, k, i, x, a, b;
    int max, min, imax, imin, first, last;
    int p, found, prev, same, sorted;
    int has5, has2, has5_2, has_odd;

    // 6.71
    printf("6.71: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    min = n;
    while (n != 0)
    {
        if (n < min && n != 0)
        {
            min = n;
        }
        scanf("%d", &n);
    }
    printf("Result: %d\n", min);

    // 6.72
    printf("6.72: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    max = n;
    while (n != 0)
    {
        if (n > max)
        {
            max = n;
        }
        scanf("%d", &n);
    }
    printf("Result: %d\n", max);

    // 6.73
    printf("6.73: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    min = n;
    while (n != 0)
    {
        if (n < min && n != 0)
        {
            min = n;
        }
        scanf("%d", &n);
    }
    printf("Result: %d\n", min);

    // 6.74
    printf("6.74: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    max = n;
    min = n;
    while (n != 0)
    {
        if (n > max) max = n;
        if (n < min && n != 0) min = n;
        scanf("%d", &n);
    }
    printf("Max: %d Min: %d\n", max, min);

    // 6.75
    printf("6.75: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    max = n;
    min = n;
    while (n != 0)
    {
        if (n > max) max = n;
        if (n < min && n != 0) min = n;
        scanf("%d", &n);
    }
    printf("Diff: %d\n", max - min);

    // 6.76
    printf("6.76: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    max = n;
    imax = 1;
    k = 1;
    while (n != 0)
    {
        if (n > max)
        {
            max = n;
            imax = k;
        }
        scanf("%d", &n);
        k++;
    }
    printf("Index: %d\n", imax);

    // 6.77
    printf("6.77: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    min = n;
    imin = 1;
    k = 1;
    while (n != 0)
    {
        if (n < min && n != 0)
        {
            min = n;
            imin = k;
        }
        scanf("%d", &n);
        k++;
    }
    printf("Index: %d\n", imin);

    // 6.78
    printf("6.78: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    max = n;
    while (n != 0)
    {
        if (n > max) max = n;
        scanf("%d", &n);
    }
    printf("Result: %d\n", max);

    // 6.79
    printf("6.79: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    min = n;
    while (n != 0)
    {
        if (n < min && n != 0) min = n;
        scanf("%d", &n);
    }
    printf("Result: %d\n", min);

    // 6.80
    printf("6.80: Enter sequence (0 to stop):\n");
    scanf("%d", &n);
    max = n;
    min = n;
    while (n != 0)
    {
        if (n > max) max = n;
        if (n < min && n != 0) min = n;
        scanf("%d", &n);
    }
    printf("Sum: %d\n", max + min);

    // 6.81
    printf("6.81: Enter n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d ", n % 10);
        n = n / 10;
    }
    printf("\n");

    // 6.82
    printf("6.82: Enter n: ");
    scanf("%d", &n);
    s = 0;
    while (n > 0)
    {
        s = s + (n % 10);
        n = n / 10;
    }
    printf("Sum: %d\n", s);

    // 6.83
    printf("6.83: Enter n: ");
    scanf("%d", &n);
    k = 0;
    while (n > 0)
    {
        k = k + 1;
        n = n / 10;
    }
    printf("Count: %d\n", k);

    // 6.84
    printf("6.84: Enter n: ");
    scanf("%d", &n);
    s = 0;
    k = 0;
    while (n > 0)
    {
        s = s + (n % 10);
        k++;
        n = n / 10;
    }
    printf("Avg: %.2f\n", (float)s / k);

    // 6.85
    printf("6.85: Enter n: ");
    scanf("%d", &n);
    s = 0;
    while (n > 0)
    {
        s = s + (n % 10) * (n % 10);
        n = n / 10;
    }
    printf("Result: %d\n", s);

    // 6.86
    printf("6.86: Enter n: ");
    scanf("%d", &n);
    s = 0;
    while (n > 0)
    {
        s = s + (n % 10) * (n % 10) * (n % 10);
        n = n / 10;
    }
    printf("Result: %d\n", s);

    // 6.87
    printf("6.87: Enter n: ");
    scanf("%d", &n);
    p = 1;
    while (n > 0)
    {
        p = p * (n % 10);
        n = n / 10;
    }
    printf("Result: %d\n", p);

    // 6.88
    printf("6.88: Enter n: ");
    scanf("%d", &n);
    while (n >= 10)
    {
        n = n / 10;
    }
    printf("First: %d\n", n);

    // 6.89
    printf("6.89: Enter n: ");
    scanf("%d", &n);
    while (n >= 10)
    {
        n = n / 10;
    }
    printf("First: %d\n", n);

    // 6.90
    printf("6.90: Enter n: ");
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    printf("Sum: %d\n", n + last);

    // 6.91
    printf("6.91: Enter n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 > 5) printf("%d ", n % 10);
        n = n / 10;
    }
    printf("\n");

    // 6.92
    printf("6.92: Enter n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 < 8) printf("%d ", n % 10);
        n = n / 10;
    }
    printf("\n");

    // 6.93
    printf("6.93: Enter n: ");
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 != 3 && n % 10 != 7) printf("%d ", n % 10);
        n = n / 10;
    }
    printf("\n");

    // 6.94
    printf("6.94: Enter n and a: ");
    scanf("%d %d", &n, &a);
    found = 0;
    while (n > 0)
    {
        if (n % 10 == a) found = 1;
        n = n / 10;
    }
    printf("Found: %d\n", found);

    // 6.95
    printf("6.95: Enter n and a: ");
    scanf("%d %d", &n, &a);
    k = 0;
    while (n > 0)
    {
        if (n % 10 == a) k++;
        n = n / 10;
    }
    printf("Count: %d\n", k);

    // 6.96
    printf("6.96: Enter n: ");
    scanf("%d", &n);
    k = 0;
    while (n > 0)
    {
        if (n % 2 == 0) k++;
        n = n / 10;
    }
    printf("Even count: %d\n", k);

    // 6.97
    printf("6.97: Enter n: ");
    scanf("%d", &n);
    s = 0;
    while (n > 0)
    {
        if (n % 10 > 5) s = s + (n % 10);
        n = n / 10;
    }
    printf("Sum: %d\n", s);

    // 6.98
    printf("6.98: Enter n: ");
    scanf("%d", &n);
    p = 1;
    while (n > 0)
    {
        if (n % 10 > 3) p = p * (n % 10);
        n = n / 10;
    }
    printf("Product: %d\n", p);

    // 6.99
    printf("6.99: Enter n: ");
    scanf("%d", &n);
    s = 0;
    k = 0;
    while (n > 0)
    {
        if (n % 10 < 7) 
        {
            s = s + (n % 10);
            k++;
        }
        n = n / 10;
    }
    if (k > 0) printf("Avg: %.2f\n", (float)s / k);

    // 6.100
    printf("6.100: Enter n: ");
    scanf("%d", &n);
    max = 0;
    while (n > 0)
    {
        if (n % 10 > max) max = n % 10;
        n = n / 10;
    }
    printf("Max digit: %d\n", max);

    // 6.101
    printf("6.101: Enter n: ");
    scanf("%d", &n);
    min = 9;
    while (n > 0)
    {
        if (n % 10 < min) min = n % 10;
        n = n / 10;
    }
    printf("Min digit: %d\n", min);

    // 6.102
    printf("6.102: Enter n: ");
    scanf("%d", &n);
    max = 0;
    min = 9;
    while (n > 0)
    {
        if (n % 10 > max) max = n % 10;
        if (n % 10 < min) min = n % 10;
        n = n / 10;
    }
    printf("Max: %d Min: %d\n", max, min);

    // 6.103
    printf("6.103: Enter n: ");
    scanf("%d", &n);
    max = 0;
    min = 9;
    while (n > 0)
    {
        if (n % 10 > max) max = n % 10;
        if (n % 10 < min) min = n % 10;
        n = n / 10;
    }
    printf("Sum: %d\n", max + min);

    // 6.104
    printf("6.104: Enter n: ");
    scanf("%d", &n);
    max = 0;
    min = 9;
    while (n > 0)
    {
        if (n % 10 > max) max = n % 10;
        if (n % 10 < min) min = n % 10;
        n = n / 10;
    }
    printf("Diff: %d\n", max - min);

    // 6.105
    printf("6.105: Enter n: ");
    scanf("%d", &n);
    prev = -1;
    same = 0;
    while (n > 0)
    {
        if (n % 10 == prev) same = 1;
        prev = n % 10;
        n = n / 10;
    }
    printf("Same adjacent: %d\n", same);

    // 6.106
    printf("6.106: Enter n: ");
    scanf("%d", &n);
    sorted = 1;
    prev = -1;
    while (n > 0)
    {
        if (prev != -1 && n % 10 < prev) sorted = 0;
        prev = n % 10;
        n = n / 10;
    }
    printf("Sorted digits: %d\n", sorted);

    // 6.107
    printf("6.107: Enter n: ");
    scanf("%d", &n);
    has5 = 0;
    while (n > 0)
    {
        if (n % 10 == 5) has5 = 1;
        n = n / 10;
    }
    printf("Has 5: %d\n", has5);

    // 6.108
    printf("6.108: Enter n: ");
    scanf("%d", &n);
    has2 = 0;
    has5_2 = 0;
    while (n > 0)
    {
        if (n % 10 == 2) has2 = 1;
        if (n % 10 == 5) has5_2 = 1;
        n = n / 10;
    }
    printf("Has 2 and 5: %d\n", has2 && has5_2);

    // 6.109
    printf("6.109: Enter n: ");
    scanf("%d", &n);
    has_odd = 0;
    while (n > 0)
    {
        if ((n % 10) % 2 != 0) has_odd = 1;
        n = n / 10;
    }
    printf("Has odd: %d\n", has_odd);

    // 6.110
    printf("6.110: Enter n: ");
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    printf("Equal first and last: %d\n", first == last);

    return 0;
}
