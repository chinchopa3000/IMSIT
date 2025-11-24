#include <stdio.h>

int main()
{
    int i, j, k, n, m, s, x, y, temp, found, max, min;
    double avg;
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int b[3][3];

    // 10.1
    printf("10.1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.2
    printf("10.2:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            s += a[i][j];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 10.3
    printf("10.3:\n");
    max = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("%d\n", max);
    printf("\n");

    // 10.4
    printf("10.4:\n");
    min = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("%d\n", min);
    printf("\n");

    // 10.5
    printf("10.5:\n");
    for (i = 0; i < 3; i++)
    {
        s = 0;
        for (j = 0; j < 3; j++)
        {
            s += a[i][j];
        }
        printf("%d ", s);
    }
    printf("\n\n");

    // 10.6
    printf("10.6:\n");
    for (j = 0; j < 3; j++)
    {
        s = 0;
        for (i = 0; i < 3; i++)
        {
            s += a[i][j];
        }
        printf("%d ", s);
    }
    printf("\n\n");

    // 10.7
    printf("10.7:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", a[i][i]);
    }
    printf("\n\n");

    // 10.8
    printf("10.8:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d ", a[i][2 - i]);
    }
    printf("\n\n");

    // 10.9
    printf("10.9:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        s += a[i][i];
    }
    printf("%d\n", s);
    printf("\n");

    // 10.10
    printf("10.10:\n");
    found = 0;
    n = 5;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == n)
            {
                found = 1;
            }
        }
    }
    if (found) printf("1\n");
    else printf("0\n");
    printf("\n");

    // 10.11
    printf("10.11:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 0) printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");

    // 10.12
    printf("10.12:\n");
    k = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < 0) k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 10.13
    printf("10.13:\n");
    for (i = 0; i < 3; i++)
    {
        max = a[i][0];
        for (j = 1; j < 3; j++)
        {
            if (a[i][j] > max) max = a[i][j];
        }
        printf("%d ", max);
    }
    printf("\n\n");

    // 10.14
    printf("10.14:\n");
    for (j = 0; j < 3; j++)
    {
        min = a[0][j];
        for (i = 1; i < 3; i++)
        {
            if (a[i][j] < min) min = a[i][j];
        }
        printf("%d ", min);
    }
    printf("\n\n");

    // 10.15
    printf("10.15:\n");
    for (i = 0; i < 3; i++)
    {
        temp = a[i][0];
        a[i][0] = a[i][2];
        a[i][2] = temp;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.16
    printf("10.16:\n");
    for (j = 0; j < 3; j++)
    {
        temp = a[0][j];
        a[0][j] = a[2][j];
        a[2][j] = temp;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");

    // 10.17
    printf("10.17:\n");
    s = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) s += a[i][j];
    }
    avg = (double)s / 9;
    printf("%.2f\n", avg);
    printf("\n");

    // 10.18
    printf("10.18:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j) a[i][j] = 1;
            else a[i][j] = 0;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.19
    printf("10.19:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2) a[i][j] = 1;
            else a[i][j] = 0;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.20
    printf("10.20:\n");
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

    // 10.21
    printf("10.21:\n");
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

    // 10.22
    printf("10.22:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > 10) a[i][j] = 10;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // 10.23
    printf("10.23:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j) printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");

    // 10.24
    printf("10.24:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i > j) printf("%d ", a[i][j]);
        }
    }
    printf("\n\n");

    // 10.25
    printf("10.25:\n");
    found = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] < 0) found = 1;
        }
    }
    printf("%d\n", found);
    printf("\n");

    // 10.26
    printf("10.26:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) b[i][j] = a[i][j];
    }
    printf("1\n\n");

    // 10.27
    printf("10.27:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) printf("%d ", a[j][i]);
        printf("\n");
    }
    printf("\n");

    // 10.28
    printf("10.28:\n");
    s = 0;
    for (i = 0; i < 3; i++) s += a[i][2 - i];
    printf("%d\n", s);
    printf("\n");

    // 10.29
    printf("10.29:\n");
    max = a[0][0];
    x = 0; y = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > max) { max = a[i][j]; x = i; y = j; }
        }
    }
    printf("%d %d\n", x, y);
    printf("\n");

    // 10.30
    printf("10.30:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] *= 2;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
