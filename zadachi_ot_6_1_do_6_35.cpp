#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float x;

    // 6.1
    i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n6.1: Done\n");

    // 6.2
    i = 10;
    while (i <= 30)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n6.2: Done\n");

    // 6.3
    i = 1;
    while (i <= 10)
    {
        printf("%d ", i * i);
        i++;
    }
    printf("\n6.3: Done\n");

    // 6.4
    i = 10;
    while (i <= 20)
    {
        printf("%.1f ", i * 0.1);
        i++;
    }
    printf("\n6.4: Done\n");

    // 6.5
    i = 21;
    while (i <= 35)
    {
        printf("%d %.3f\n", i, i * 0.453);
        i++;
    }
    printf("6.5: Done\n");

    // 6.6
    i = 2;
    while (i <= 20)
    {
        printf("%d %.2f\n", i, i * 2.54);
        i++;
    }
    printf("6.6: Done\n");

    // 6.7
    i = 1;
    while (i <= 20)
    {
        printf("%d %.2f\n", i, i * 20.47);
        i++;
    }
    printf("6.7: Done\n");

    // 6.8
    i = 1;
    while (i <= 10)
    {
        printf("%d %.3f\n", i, i * 1.609);
        i++;
    }
    printf("6.8: Done\n");

    // 6.9
    i = 2;
    while (i <= 10)
    {
        printf("%d %.1f\n", i, i * 0.9);
        i++;
    }
    printf("6.9: Done\n");

    // 6.10
    i = 1;
    while (i <= 10)
    {
        printf("%d %.1f\n", i, i * 0.5);
        i++;
    }
    printf("6.10: Done\n");

    // 6.11
    i = 1;
    while (i <= 20)
    {
        printf("%d %.3f\n", i, i * 0.453);
        i++;
    }
    printf("6.11: Done\n");

    // 6.12
    i = 1;
    while (i <= 12)
    {
        printf("%d %.2f\n", i, i * 100.0 / 2.54);
        i++;
    }
    printf("6.12: Done\n");

    // 6.13
    i = 1;
    while (i <= 10)
    {
        printf("%d %.3f\n", i, i * 0.914);
        i++;
    }
    printf("6.13: Done\n");

    // 6.14
    i = 1;
    while (i <= 12)
    {
        printf("%d %.1f\n", i, i * 409.5);
        i++;
    }
    printf("6.14: Done\n");

    // 6.15
    i = 1;
    while (i <= 10)
    {
        printf("%d %.1f\n", i, i * 2.5);
        i++;
    }
    printf("6.15: Done\n");

    // 6.16
    x = 2.0;
    while (x <= 3.0)
    {
        printf("%.1f %.3f\n", x, sin(x));
        x = x + 0.1;
    }
    printf("6.16: Done\n");

    // 6.17
    x = 1.0;
    while (x <= 2.0)
    {
        printf("%.1f %.3f\n", x, 1.0 / x);
        x = x + 0.1;
    }
    printf("6.17: Done\n");

    // 6.18
    x = 0.5;
    while (x <= 1.5)
    {
        printf("%.1f %.3f\n", x, sqrt(x));
        x = x + 0.1;
    }
    printf("6.18: Done\n");

    // 6.19
    x = 1.0;
    while (x <= 2.0)
    {
        printf("%.1f %.3f\n", x, tan(x));
        x = x + 0.1;
    }
    printf("6.19: Done\n");

    // 6.20
    x = 0.1;
    while (x <= 0.9)
    {
        printf("%.1f %.3f\n", x, sin(x));
        x = x + 0.1;
    }
    printf("6.20: Done\n");

    // 6.21
    x = 1.0;
    while (x <= 10.0)
    {
        printf("%.1f %.2f\n", x, sqrt(x));
        x = x + 1.0;
    }
    printf("6.21: Done\n");

    // 6.22
    x = 2.0;
    while (x <= 20.0)
    {
        printf("%.1f %.2f\n", x, sqrt(x));
        x = x + 2.0;
    }
    printf("6.22: Done\n");

    // 6.23
    x = 1.0;
    while (x <= 15.0)
    {
        printf("%.1f %.1f\n", x, sin(x));
        x = x + 1.0;
    }
    printf("6.23: Done\n");

    // 6.24
    x = 1.0;
    while (x <= 20.0)
    {
        printf("%.1f %.1f\n", x, x * x);
        x = x + 1.0;
    }
    printf("6.24: Done\n");

    // 6.25
    x = 10.0;
    while (x <= 30.0)
    {
        printf("%.1f %.1f\n", x, x * x);
        x = x + 1.0;
    }
    printf("6.25: Done\n");

    // 6.26
    x = 5.0;
    while (x <= 15.0)
    {
        printf("%.1f %.1f\n", x, x * x);
        x = x + 1.0;
    }
    printf("6.26: Done\n");

    // 6.27
    x = 2.0;
    while (x <= 10.0)
    {
        printf("%.1f %.1f\n", x, x * x * x);
        x = x + 1.0;
    }
    printf("6.27: Done\n");

    // 6.28
    x = 10.0;
    while (x <= 20.0)
    {
        printf("%.1f %.1f\n", x, x * x * x);
        x = x + 1.0;
    }
    printf("6.28: Done\n");

    // 6.29
    x = 5.0;
    while (x <= 15.0)
    {
        printf("%.1f %.1f\n", x, x * x * x);
        x = x + 1.0;
    }
    printf("6.29: Done\n");

    // 6.30
    int n, s = 0;
    printf("6.30: Enter numbers (0 to stop):\n");
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        scanf("%d", &n);
    }
    printf("Sum = %d\n", s);

    // 6.31
    printf("6.31: Enter numbers (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        scanf("%d", &n);
    }
    printf("Sum = %d\n", s);

    // 6.32
    printf("6.32: Enter numbers (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        scanf("%d", &n);
    }
    printf("Sum = %d\n", s);

    // 6.33
    printf("6.33: Enter numbers (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        scanf("%d", &n);
    }
    printf("Sum = %d\n", s);

    // 6.34
    printf("6.34: Enter numbers (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        scanf("%d", &n);
    }
    printf("Sum = %d\n", s);

    // 6.35
    printf("6.35: Enter numbers (0 to stop):\n");
    s = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        s = s + n;
        scanf("%d", &n);
    }
    printf("Sum = %d\n", s);

    return 0;
}
