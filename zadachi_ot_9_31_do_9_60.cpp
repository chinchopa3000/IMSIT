#include <stdio.h>

int main()
{
    // Объявляем всё заранее, включая k, found и индексы x, y
    int i, j, k, n, s, x, y, temp, found, max, min;
    double avg;
    int a[10] = {5, -3, 12, 0, 8, -1, 15, 7, 2, 4};
    int b[10];

    // 9.31
    printf("9.31:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            s += a[i];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 9.32
    printf("9.32:\n");
    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == 0)
        {
            k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 9.33
    printf("9.33:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.34
    printf("9.34:\n");
    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] == max)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 9.35
    printf("9.35:\n");
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] == min)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    // 9.36
    printf("9.36:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        s += a[i];
    }
    avg = (double)s / 10;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > avg)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n\n");

    // 9.37
    printf("9.37:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        s += a[i];
    }
    avg = (double)s / 10;
    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < avg)
        {
            k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 9.38
    printf("9.38:\n");
    for (i = 0; i < 10; i++)
    {
        b[i] = a[i] * 2;
        printf("%d ", b[i]);
    }
    printf("\n\n");

    // 9.39
    printf("9.39:\n");
    for (i = 0; i < 5; i++)
    {
        temp = a[i];
        a[i] = a[i + 5];
        a[i + 5] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.40
    printf("9.40:\n");
    x = a[0];
    found = 0;
    for (i = 1; i < 10; i++)
    {
        if (a[i] == x)
        {
            found = 1;
            break;
        }
    }
    if (found) printf("has duplicates\n");
    else printf("no duplicates\n");
    printf("\n");

    // 9.41
    printf("9.41:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] += 1;
        }
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.42
    printf("9.42:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0)
        {
            a[i] *= 2;
        }
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.43
    printf("9.43:\n");
    n = 10;
    for (i = 0; i < 10; i++)
    {
        a[i] = n;
        n += 5;
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.44
    printf("9.44:\n");
    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            k++;
        }
    }
    printf("%d\n", k);
    printf("\n");

    // 9.45
    printf("9.45:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0 && a[i] % 2 != 0)
        {
            s += a[i];
        }
    }
    printf("%d\n", s);
    printf("\n");

    // 9.46
    printf("9.46:\n");
    max = a[0];
    min = a[0];
    x = 0; // индекс макс
    y = 0; // индекс мин
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max) { max = a[i]; x = i; }
        if (a[i] < min) { min = a[i]; y = i; }
    }
    temp = a[x];
    a[x] = a[y];
    a[y] = temp;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.47
    printf("9.47:\n");
    k = 0;
    for (i = 0; i < 10; i++)
    {
        found = 0;
        if (a[i] < 2) found = 1;
        for (j = 2; j < a[i]; j++)
        {
            if (a[i] % j == 0) { found = 1; break; }
        }
        if (found == 0) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 9.48
    printf("9.48:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0)
        {
            a[i] = 0;
        }
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.49
    printf("9.49:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0) s += a[i];
        else s -= a[i];
    }
    printf("%d\n", s);
    printf("\n");

    // 9.50
    printf("9.50:\n");
    n = 5;
    found = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == n)
        {
            found = 1;
        }
    }
    if (found) printf("exists\n");
    else printf("not found\n");
    printf("\n");

    // 9.51
    printf("9.51:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) printf("%d ", a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 != 0) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.52
    printf("9.52:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.53
    printf("9.53:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.54
    printf("9.54:\n");
    avg = 0;
    for (i = 0; i < 10; i++) avg += a[i];
    avg /= 10;
    printf("%.2f\n", avg);
    printf("\n");

    // 9.55
    printf("9.55:\n");
    k = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 10) k++;
    }
    printf("%d\n", k);
    printf("\n");

    // 9.56
    printf("9.56:\n");
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 5 == 0) printf("%d ", a[i]);
    }
    printf("\n\n");

    // 9.57
    printf("9.57:\n");
    s = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0) s += a[i];
    }
    printf("%d\n", s);
    printf("\n");

    // 9.58
    printf("9.58:\n");
    max = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] > max) max = a[i];
    }
    printf("%d\n", max);
    printf("\n");

    // 9.59
    printf("9.59:\n");
    min = a[0];
    for (i = 1; i < 10; i++)
    {
        if (a[i] < min) min = a[i];
    }
    printf("%d\n", min);
    printf("\n");

    // 9.60
    printf("9.60:\n");
    found = 0;
    for (i = 0; i < 10; i++)
    {
        if (a[i] < 0) { found = 1; break; }
    }
    if (found) printf("has negative\n");
    else printf("all positive\n");
    printf("\n");

    return 0;
}
