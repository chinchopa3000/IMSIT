#include <stdio.h>

int main()
{
    int i, j, k, n, s, max, min, temp, found;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];

    // 9.1
    printf("9.1:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.2
    printf("9.2:\n");
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.3
    printf("9.3:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        s += a[i];
    }
    printf("%d\n", s);
    printf("\n");

    // 9.4
    printf("9.4:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        s += a[i];
    }
    printf("%.2f\n", (double)s / 10);
    printf("\n");

    // 9.5
    printf("9.5:\n");
    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("%d\n", max);
    printf("\n");

    // 9.6
    printf("9.6:\n");
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d\n", min);
    printf("\n");

    // 9.7
    printf("9.7:\n");
    n = 5; 
    temp = -1;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            temp = i;
            break;
        }
    }
    printf("%d\n", temp);
    printf("\n");

    // 9.8
    printf("9.8:\n");
    k = 0; // Переменная k теперь объявлена в начале
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 9.9
    printf("9.9:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.10
    printf("9.10:\n");
    for (i = 0; i < 10; i++)
    {
        b[i] = a[i];
        printf("%d ", b[i]);
    }
    printf("\n\n");

    // 9.11
    printf("9.11:\n");
    for (i = 0; i < 10; i++)
    {
        b[i] = a[9 - i];
        printf("%d ", b[i]);
    }
    printf("\n\n");

    // 9.12
    printf("9.12:\n");
    for (i = 0; i < 10; i++)
    {
        a[i] = i * i;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.13
    printf("9.13:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 5)
        {
            s += a[i];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 9.14
    printf("9.14:\n");
    max = a[0];
    temp = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            temp = i;
        }
    }
    printf("%d\n", temp);
    printf("\n");

    // 9.15
    printf("9.15:\n");
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.16
    printf("9.16:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.17
    printf("9.17:\n");
    n = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            n++;
        }
    }
    printf("%d\n", n);
    printf("\n");

    // 9.18
    printf("9.18:\n");
    for (i = 0; i < 5; i++)
    {
        temp = a[i];
        a[i] = a[9 - i];
        a[9 - i] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.19
    printf("9.19:\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.20
    printf("9.20:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 3 == 0)
        {
            a[i] = 0;
        }
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.21
    printf("9.21:\n");
    s = 1;
    for (i = 0; i < 10; i++)
    {
        if (a[i] != 0)
        {
            s *= a[i];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 9.22
    printf("9.22:\n");
    max = a[0];
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    printf("%d\n", max - min);
    printf("\n");

    // 9.23
    printf("9.23:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 9.24
    printf("9.24:\n");
    n = 7;
    found = 0; // Переменная found теперь объявлена в начале
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n) found++;
    }
    printf("%d\n", found);
    printf("\n");

    // 9.25
    printf("9.25:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 10 && a[i] < 20)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.26
    printf("9.26:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            s += a[i];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 9.27
    printf("9.27:\n");
    temp = a[0];
    for (i = 0; i < 9; i++)
    {
        a[i] = a[i + 1];
    }
    a[9] = temp;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.28
    printf("9.28:\n");
    temp = a[9];
    for (i = 9; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.29
    printf("9.29:\n");
    found = 1;
    for (i = 0; i < 9; i++)
    {
        if (a[i] > a[i + 1])
        {
            found = 0;
            break;
        }
    }
    if (found) printf("sorted\n");
    else printf("not sorted\n");
    printf("\n");

    // 9.30
    printf("9.30:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0) a[i] = -a[i];
        printf("%d ", a[i]);
    }
    printf("\n\n");

    return 0;
}
