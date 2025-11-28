#include <stdio.h>

int main()
{
    int i, j, k, n, s, x, y, temp, found, max, min;
    double avg;
    int a[3][3] = {
        {1, -2, 3},
        {0, 5, -6},
        {7, 8, 9}
    };

    // 10.31
    printf("10.31:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > 0) s += a[i][j];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 10.32
    printf("10.32:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == 0) k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 10.33
    printf("10.33:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < 0) a[i][j] = 0;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.34
    printf("10.34:\n");
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max) max = a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == max) printf("%d %d\n", i, j);
        }
    }
    printf("\n");

    // 10.35
    printf("10.35:\n");
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < min) min = a[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == min) printf("%d %d\n", i, j);
        }
    }
    printf("\n");

    // 10.36
    printf("10.36:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) s += a[i][j];
    }
    avg = (double)s / 9;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > avg) printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");

    // 10.37
    printf("10.37:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) s += a[i][j];
    }
    avg = (double)s / 9;
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < avg) k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 10.38
    printf("10.38:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) printf("%d ", a[i][j] * 2);
        printf("\n");
    }
    printf("\n");

    // 10.39
    printf("10.39:\n");
    for (j = 0; j < 3; j++)
    {
        temp = a[0][j];
        a[0][j] = a[1][j];
        a[1][j] = temp;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.40
    printf("10.40:\n");
    found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (x = 0; x < 3; x++)
            {
                for (y = 0; y < 3; y++)
                {
                    if (i != x && j != y && a[i][j] == a[x][y]) found = 1;
                }
            }
        }
    }
    printf("%d\n", found);
    printf("\n");

    // 10.41
    printf("10.41:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0) a[i][j] += 1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.42
    printf("10.42:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 != 0) a[i][j] *= 2;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.43
    printf("10.43:\n");
    n = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = n++;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.44
    printf("10.44:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > 0 && a[i][j] % 2 == 0) k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 10.45
    printf("10.45:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < 0 && a[i][j] % 2 != 0) s += a[i][j];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 10.46
    printf("10.46:\n");
    max = a[0][0]; min = a[0][0];
    int r1 = 0, c1 = 0, r2 = 0, c2 = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max) { max = a[i][j]; r1 = i; c1 = j; }
            if (a[i][j] < min) { min = a[i][j]; r2 = i; c2 = j; }
        }
    }
    temp = a[r1][c1];
    a[r1][c1] = a[r2][c2];
    a[r2][c2] = temp;
    printf("1\n\n");

    // 10.47
    printf("10.47:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            found = 0;
            if (a[i][j] < 2) found = 1;
            for (x = 2; x < a[i][j]; x++)
            {
                if (a[i][j] % x == 0) { found = 1; break; }
            }
            if (found == 0) k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 10.48
    printf("10.48:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < 0) a[i][j] = 0;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.49
    printf("10.49:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if ((i + j) % 2 == 0) s += a[i][j];
            else s -= a[i][j];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 10.50
    printf("10.50:\n");
    n = 7; found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] == n) found = 1;
    }
    printf("%d\n", found);
    printf("\n");

    // 10.51
    printf("10.51:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 2 == 0) printf("%d ", a[i][j]);
        for (j = 0; j < 3; j++) if (a[i][j] % 2 != 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.52
    printf("10.52:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.53
    printf("10.53:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.54
    printf("10.54:\n");
    avg = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) avg += a[i][j];
    }
    printf("%.2f\n", avg / 9);
    printf("\n");

    // 10.55
    printf("10.55:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > 10) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 10.56
    printf("10.56:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 5 == 0) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.57
    printf("10.57:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] % 2 == 0) s += a[i][j];
    }
    printf("%d\n", s);
    printf("\n");

    // 10.58
    printf("10.58:\n");
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] > max) max = a[i][j];
    }
    printf("%d\n", max);
    printf("\n");

    // 10.59
    printf("10.59:\n");
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < min) min = a[i][j];
    }
    printf("%d\n", min);
    printf("\n");

    // 10.60
    printf("10.60:\n");
    found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) if (a[i][j] < 0) found = 1;
    }
    printf("%d\n", found);
    printf("\n");

    return 0;
}
