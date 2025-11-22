#include <stdio.h>

int main()
{
    int i, k, n, s, x, y, temp, found, max, min;
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int b[10];

    // 9.61
    printf("9.61:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 50)
        {
            s++;
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 9.62
    printf("9.62:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 10 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.63
    printf("9.63:\n");
    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max) max = a[i];
    }
    printf("%d\n", max);
    printf("\n");

    // 9.64
    printf("9.64:\n");
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min) min = a[i];
    }
    printf("%d\n", min);
    printf("\n");

    // 9.65
    printf("9.65:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        s += a[i];
    }
    printf("%d\n", s);
    printf("\n");

    // 9.66
    printf("9.66:\n");
    n = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) n++;
    }
    printf("%d\n", n);
    printf("\n");

    // 9.67
    printf("9.67:\n");
    n = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0) n++;
    }
    printf("%d\n", n);
    printf("\n");

    // 9.68
    printf("9.68:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.69
    printf("9.69:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.70
    printf("9.70:\n");
    x = 10;
    found = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == x) found = 1;
    }
    if (found) printf("yes\n");
    else printf("no\n");
    printf("\n");

    // 9.71
    printf("9.71:\n");
    for (i = 0; i < 10; i++)
    {
        b[i] = a[i] * a[i];
        printf("%d ", b[i]);
    }
    printf("\n\n");

    // 9.72
    printf("9.72:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 3 == 0 || a[i] % 5 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.73
    printf("9.73:\n");
    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 10 && a[i] < 100) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 9.74
    printf("9.74:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) s += a[i];
    }
    printf("%d\n", s);
    printf("\n");

    // 9.75
    printf("9.75:\n");
    s = 1;
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0) s *= a[i];
    }
    printf("%d\n", s);
    printf("\n");

    // 9.76
    printf("9.76:\n");
    max = a[0];
    x = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max) { max = a[i]; x = i; }
    }
    printf("%d\n", x);
    printf("\n");

    // 9.77
    printf("9.77:\n");
    min = a[0];
    y = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min) { min = a[i]; y = i; }
    }
    printf("%d\n", y);
    printf("\n");

    // 9.78
    printf("9.78:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] == 0) printf("%d ", i);
    }
    printf("\n\n");

    // 9.79
    printf("9.79:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0) a[i] = 1;
        else if (a[i] < 0) a[i] = -1;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.80
    printf("9.80:\n");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0) a[i] = 0;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.81
    printf("9.81:\n");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0) a[i] = 1;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.82
    printf("9.82:\n");
    temp = a[0];
    a[0] = a[9];
    a[9] = temp;
    for (i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\n\n");

    // 9.83
    printf("9.83:\n");
    s = 0;
    for (i = 0; i < 10; i++) s += a[i];
    printf("%.2f\n", (double)s / 10);
    printf("\n");

    // 9.84
    printf("9.84:\n");
    max = a[0];
    for (i = 1; i < 10; i++) if (a[i] > max) max = a[i];
    min = a[0];
    for (i = 1; i < 10; i++) if (a[i] < min) min = a[i];
    printf("%d\n", max + min);
    printf("\n");

    // 9.85
    printf("9.85:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 10) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.86
    printf("9.86:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 100) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.87
    printf("9.87:\n");
    k = 0;
    for (i = 0; i < 10; i++) if (a[i] == 0) k++;
    printf("%d\n", k);
    printf("\n");

    // 9.88
    printf("9.88:\n");
    found = 0;
    for (i = 0; i < 10; i++) if (a[i] < 0) found = 1;
    if (found) printf("negative exists\n");
    else printf("no negatives\n");
    printf("\n");

    // 9.89
    printf("9.89:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) a[i] /= 2;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.90
    printf("9.90:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0) a[i] *= 3;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    return 0;
}
