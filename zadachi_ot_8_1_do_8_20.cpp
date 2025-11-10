#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, k, n, s, x, y, x1, y1, x2, y2;

    // 8.1
    printf("8.1:\n");
    x = 5;
    printf("%d\n", x * x);
    printf("\n");

    // 8.2
    printf("8.2:\n");
    x = 3;
    printf("%d\n", x * x * x);
    printf("\n");

    // 8.3
    printf("8.3:\n");
    n = 3; // stepen
    x = 2; // chislo
    s = 1;
    for (i = 0; i < n; i++) s *= x;
    printf("%d\n", s);
    printf("\n");

    // 8.4
    printf("8.4:\n");
    x = 10;
    y = 20;
    printf("%d\n", (x + y) / 2);
    printf("\n");

    // 8.5
    printf("8.5:\n");
    x = -15;
    if (x > 0) printf("1\n");
    else if (x < 0) printf("-1\n");
    else printf("0\n");
    printf("\n");

    // 8.6
    printf("8.6:\n");
    x = 0;
    if (x > 0) printf("1\n");
    else if (x < 0) printf("-1\n");
    else printf("0\n");
    printf("\n");

    // 8.7
    printf("8.7:\n");
    x = 100;
    if (x > 0) printf("1\n");
    else if (x < 0) printf("-1\n");
    else printf("0\n");
    printf("\n");

    // 8.8
    printf("8.8:\n");
    x = 45;
    y = 12;
    if (x < y) printf("%d\n", x);
    else printf("%d\n", y);
    printf("\n");

    // 8.9
    printf("8.9:\n");
    x = 7;
    y = 88;
    if (x > y) printf("%d\n", x);
    else printf("%d\n", y);
    printf("\n");

    // 8.10
    printf("8.10:\n");
    int a = 10, b = 5, c = 20;
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("%d\n", min);
    printf("\n");

    // 8.11
    printf("8.11:\n");
    int a1 = 1, b1 = 99, c1 = 50;
    int max = a1;
    if (b1 > max) max = b1;
    if (c1 > max) max = c1;
    printf("%d\n", max);
    printf("\n");

    // 8.12
    printf("8.12:\n");
    x1 = 0; y1 = 0; x2 = 3; y2 = 4;
    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("%.2f\n", d);
    printf("\n");

    // 8.13
    printf("8.13:\n");
    x = 4;
    if (x % 2 == 0) printf("even\n");
    else printf("odd\n");
    printf("\n");

    // 8.14
    printf("8.14:\n");
    x = 7;
    if (x % 2 != 0) printf("odd\n");
    else printf("even\n");
    printf("\n");

    // 8.15
    printf("8.15:\n");
    n = 5;
    s = 1;
    for (i = 1; i <= n; i++) s *= i;
    printf("%d\n", s);
    printf("\n");

    // 8.16
    printf("8.16:\n");
    a = 1; b = 10;
    s = 0;
    for (i = a; i <= b; i++) s += i;
    printf("%d\n", s);
    printf("\n");

    // 8.17
    printf("8.17:\n");
    n = 10;
    for (i = 0; i < n; i++) printf("*");
    printf("\n\n");

    // 8.18
    printf("8.18:\n");
    char ch = '#';
    n = 5;
    for (i = 0; i < n; i++) printf("%c", ch);
    printf("\n\n");

    // 8.19
    printf("8.19:\n");
    n = 13;
    k = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) k++;
    }
    if (k == 2) printf("prime\n");
    else printf("not prime\n");
    printf("\n");

    // 8.20
    printf("8.20:\n");
    for (i = 1; i <= 20; i++) {
        k = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) k++;
        }
        if (k == 2) printf("%d ", i);
    }
    printf("\n\n");

    return 0;
}
