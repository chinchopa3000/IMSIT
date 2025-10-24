#include <stdio.h>

int main()
{
    int n, s, k, i;
    int max, min;

    // 6.36
    printf("6.36: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        k = k + 1;
        scanf("%d", &n);
    }
    printf("Result: %d\n", k);

    // 6.37
    printf("6.37: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        k = k + 1;
        scanf("%d", &n);
    }
    printf("Result: %d\n", k);

    // 6.38
    printf("6.38: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        k = k + 1;
        scanf("%d", &n);
    }
    printf("Result: %d\n", k);

    // 6.39
    printf("6.39: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        k = k + 1;
        scanf("%d", &n);
    }
    printf("Result: %d\n", k);

    // 6.40
    printf("6.40: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        k = k + 1;
        scanf("%d", &n);
    }
    printf("Result: %d\n", k);

    // 6.41
    printf("6.41: Enter 10 numbers:\n");
    i = 0;
    s = 0;
    while (i < 10)
    {
        scanf("%d", &n);
        s = s + n;
        i++;
    }
    printf("Sum: %d\n", s);

    // 6.42
    printf("6.42: Enter 12 numbers:\n");
    i = 0;
    s = 0;
    while (i < 12)
    {
        scanf("%d", &n);
        s = s + n;
        i++;
    }
    printf("Sum: %d\n", s);

    // 6.43
    printf("6.43: Enter 15 numbers:\n");
    i = 0;
    s = 0;
    while (i < 15)
    {
        scanf("%d", &n);
        s = s + n;
        i++;
    }
    printf("Sum: %d\n", s);

    // 6.44
    printf("6.44: Enter 10 numbers:\n");
    i = 0;
    s = 0;
    while (i < 10)
    {
        scanf("%d", &n);
        s = s + n;
        i++;
    }
    printf("Sum: %d\n", s);

    // 6.45
    printf("6.45: Enter 10 numbers:\n");
    i = 0;
    s = 0;
    while (i < 10)
    {
        scanf("%d", &n);
        s = s + n;
        i++;
    }
    printf("Sum: %d\n", s);

    // 6.46
    printf("6.46: Enter sequence (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 10)
        {
            s = s + n;
        }
        scanf("%d", &n);
    }
    printf("Sum: %d\n", s);

    // 6.47
    printf("6.47: Enter sequence (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n < 50)
        {
            s = s + n;
        }
        scanf("%d", &n);
    }
    printf("Sum: %d\n", s);

    // 6.48
    printf("6.48: Enter sequence (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 20)
        {
            s = s + n;
        }
        scanf("%d", &n);
    }
    printf("Sum: %d\n", s);

    // 6.49
    printf("6.49: Enter sequence (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n < 100)
        {
            s = s + n;
        }
        scanf("%d", &n);
    }
    printf("Sum: %d\n", s);

    // 6.50
    printf("6.50: Enter sequence (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 0)
        {
            s = s + n;
        }
        scanf("%d", &n);
    }
    printf("Sum: %d\n", s);

    // 6.51
    printf("6.51: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 10)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.52
    printf("6.52: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n < 50)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.53
    printf("6.53: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 20)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.54
    printf("6.54: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n < 100)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.55
    printf("6.55: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n > 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.56
    printf("6.56: Enter sequence (0 to stop):\n");
    s = 0;
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        k = k + 1;
        scanf("%d", &n);
    }
    if (k > 0)
    {
        printf("Avg: %.2f\n", (float)s / k);
    }

    // 6.57
    printf("6.57: Enter sequence (0 to stop):\n");
    s = 0;
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        k = k + 1;
        scanf("%d", &n);
    }
    if (k > 0)
    {
        printf("Avg: %.2f\n", (float)s / k);
    }

    // 6.58
    printf("6.58: Enter sequence (0 to stop):\n");
    s = 0;
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        k = k + 1;
        scanf("%d", &n);
    }
    if (k > 0)
    {
        printf("Avg: %.2f\n", (float)s / k);
    }

    // 6.59
    printf("6.59: Enter sequence (0 to stop):\n");
    s = 0;
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        k = k + 1;
        scanf("%d", &n);
    }
    if (k > 0)
    {
        printf("Avg: %.2f\n", (float)s / k);
    }

    // 6.60
    printf("6.60: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Even count: %d\n", k);

    // 6.61
    printf("6.61: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 10 == 7)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.62
    printf("6.62: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.63
    printf("6.63: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 3 == 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.64
    printf("6.64: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 4 == 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.65
    printf("6.65: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 5 == 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.66
    printf("6.66: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 != 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.67
    printf("6.67: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 3 != 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.68
    printf("6.68: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 4 != 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.69
    printf("6.69: Enter sequence (0 to stop):\n");
    k = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 5 != 0)
        {
            k = k + 1;
        }
        scanf("%d", &n);
    }
    printf("Count: %d\n", k);

    // 6.70
    printf("6.70: Enter sequence (0 to stop):\n");
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
    printf("Max: %d\n", max);

    return 0;
}
