#include <stdio.h>

int main()
{
    int i, j, k, s, x, y, temp, found, max, min;
    int a[3][3] = {
        {10, 25, 30},
        {45, 50, 65},
        {70, 85, 90}
    };
    int b[3][3];

    // 10.61
    printf("10.61:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > 50) s++;
    }
    printf("%d\n", s);
    printf("\n");

    // 10.62
    printf("10.62:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 10 == 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.63
    printf("10.63:\n");
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > max) max = a[i][j];
    }
    printf("%d\n", max);
    printf("\n");

    // 10.64
    printf("10.64:\n");
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < min) min = a[i][j];
    }
    printf("%d\n", min);
    printf("\n");

    // 10.65
    printf("10.65:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) s += a[i][j];
    }
    printf("%d\n", s);
    printf("\n");

    // 10.66
    printf("10.66:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 2 == 0) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 10.67
    printf("10.67:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 2 != 0) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 10.68
    printf("10.68:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.69
    printf("10.69:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.70
    printf("10.70:\n");
    x = 50; found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] == x) found = 1;
    }
    printf("%d\n", found);
    printf("\n");

    // 10.71
    printf("10.71:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) printf("%d ", a[i][j] * a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.72
    printf("10.72:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 3 == 0 || a[i][j] % 5 == 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.73
    printf("10.73:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > 10 && a[i][j] < 100) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 10.74
    printf("10.74:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 2 == 0) s += a[i][j];
    }
    printf("%d\n", s);
    printf("\n");

    // 10.75
    printf("10.75:\n");
    s = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 2 != 0) s *= a[i][j];
    }
    printf("%d\n", s);
    printf("\n");

    // 10.76
    printf("10.76:\n");
    max = a[0][0]; x = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > max) { max = a[i][j]; x = i; }
    }
    printf("%d\n", x);
    printf("\n");

    // 10.77
    printf("10.77:\n");
    min = a[0][0]; y = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < min) { min = a[i][j]; y = j; }
    }
    printf("%d\n", y);
    printf("\n");

    // 10.78
    printf("10.78:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] == 0) printf("%d %d ", i, j);
    }
    printf("\n\n");

    // 10.79
    printf("10.79:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > 0) a[i][j] = 1;
            else if (a[i][j] < 0) a[i][j] = -1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.80
    printf("10.80:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == 0) a[i][j] = 0;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.81
    printf("10.81:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 2) a[i][j] = 1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.82
    printf("10.82:\n");
    temp = a[0][0]; a[0][0] = a[2][2]; a[2][2] = temp;
    printf("1\n\n");

    // 10.83
    printf("10.83:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) s += a[i][j];
    }
    printf("%.2f\n", (double)s / 9);
    printf("\n");

    // 10.84
    printf("10.84:\n");
    max = a[0][0]; min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max) max = a[i][j];
            if (a[i][j] < min) min = a[i][j];
        }
    }
    printf("%d\n", max + min);
    printf("\n");

    // 10.85
    printf("10.85:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < 10) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.86
    printf("10.86:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > 100) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.87
    printf("10.87:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] == 0) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 10.88
    printf("10.88:\n");
    found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < 0) found = 1;
    }
    printf("%d\n", found);
    printf("\n");

    // 10.89
    printf("10.89:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0) a[i][j] /= 2;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.90
    printf("10.90:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0) a[i][j] *= 3;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
