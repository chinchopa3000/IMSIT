#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    // 4.19 а
    double S_tr, S_cr;
    printf("Enter triangle area for 4.19a: ");
    scanf("%lf", &S_tr);
    printf("Enter circle area for 4.19a: ");
    scanf("%lf", &S_cr);
    double a = sqrt((4 * S_tr) / sqrt(3));
    double r_ins = a * sqrt(3) / 6;
    double r_cr = sqrt(S_cr / M_PI);
    if (r_cr <= r_ins) 
        printf("Circle fits in triangle\n\n");
    else 
        printf("Circle does NOT fit in triangle\n\n");

    // 4.19 б
    double r_circ = a * sqrt(3) / 3;
    if (a <= 2 * r_circ) 
        printf("Triangle fits in circle\n\n");
    else 
        printf("Triangle does NOT fit in circle\n\n");

    // 4.20
    double x1_1, y1_1, x1_2, y1_2, x2_1, y2_1, x2_2, y2_2;
    printf("Enter rect1 x1 y1 x2 y2 for 4.20: ");
    scanf("%lf %lf %lf %lf", &x1_1, &y1_1, &x1_2, &y1_2);
    printf("Enter rect2 x1 y1 x2 y2 for 4.20: ");
    scanf("%lf %lf %lf %lf", &x2_1, &y2_1, &x2_2, &y2_2);
    double mnx = fmin(x1_1, x2_1);
    double mny = fmin(y1_1, y2_1);
    double mxx = fmax(x1_2, x2_2);
    double mxy = fmax(y1_2, y2_2);
    printf("min (%.2lf, %.2lf) max (%.2lf, %.2lf)\n\n", mnx, mny, mxx, mxy);

    // 4.21
    double x3, y3, w3, h3, x4, y4, w4, h4;
    printf("Enter rect3 x y w h for 4.21: ");
    scanf("%lf %lf %lf %lf", &x3, &y3, &w3, &h3);
    printf("Enter rect4 x y w h for 4.21: ");
    scanf("%lf %lf %lf %lf", &x4, &y4, &w4, &h4);
    double mnx2 = fmin(x3, x4);
    double mny2 = fmin(y3, y4);
    double mxx2 = fmax(x3 + w3, x4 + w4);
    double mxy2 = fmax(y3 + h3, y4 + h4);
    printf("min (%.2lf, %.2lf) max (%.2lf, %.2lf)\n\n", mnx2, mny2, mxx2, mxy2);

    // 4.22
    int m, n4;
    printf("Enter m n for 4.22: ");
    scanf("%d %d", &m, &n4);
    if (m % n4 == 0) 
        printf("%d\n\n", m / n4);
    else 
        printf("m not divisible by n\n\n");

    // 4.23
    int a5, n5;
    printf("Enter a n for 4.23: ");
    scanf("%d %d", &a5, &n5);
    if (n5 % a5 == 0) 
        printf("a is divisor of n\n\n");
    else 
        printf("a is NOT divisor of n\n\n");

    // 4.24 а
    int num;
    printf("Enter natural number for 4.24a: ");
    scanf("%d", &num);
    if (num % 2 == 0) 
        printf("Even\n\n");
    else 
        printf("Odd\n\n");

    // 4.24 б
    if (num % 10 == 7) 
        printf("Ends with 7\n\n");
    else 
        printf("Does NOT end with 7\n\n");

    // 4.25
    int n6;
    printf("Enter n for 4.25: ");
    scanf("%d", &n6);
    int next;
    if (n6 % 2 == 0) 
        next = n6 + 2;
    else 
        next = n6 + 1;
    printf("Next even = %d\n\n", next);

    // 4.26 а
    int td;
    printf("Enter two-digit number for 4.26a: ");
    scanf("%d", &td);
    int d1 = td / 10;
    int d2 = td % 10;
    if (d1 > d2) 
        printf("First digit larger\n\n");
    else if (d1 < d2) 
        printf("Second digit larger\n\n");
    else 
        printf("Digits equal\n\n");

    // 4.27
    int sq = td * td;
    int sc = d1 * d1 * d1 + d2 * d2 * d2;
    if (sq == 4 * sc) 
        printf("Equality holds\n\n");
    else 
        printf("Equality does NOT hold\n\n");

    // 4.28 а
    int sumd = d1 + d2;
    if (sumd >= 10 && sumd <= 99) 
        printf("Sum is two-digit\n\n");
    else 
        printf("Sum is NOT two-digit\n\n");

    // 4.28 б
    int a6;
    printf("Enter a for 4.28b: ");
    scanf("%d", &a6);
    if (sumd > a6) 
        printf("Sum > a\n\n");
    else 
        printf("Sum <= a\n\n");

    // 4.29 а
    if (sumd % 3 == 0) 
        printf("Sum divisible by 3\n\n");
    else 
        printf("Sum NOT divisible by 3\n\n");

    // 4.29 б
    if (sumd % a6 == 0) 
        printf("Sum divisible by a\n\n");
    else 
        printf("Sum NOT divisible by a\n\n");

    // 4.30
    int thd;
    printf("Enter three-digit number for 4.30: ");
    scanf("%d", &thd);
    int fd = thd / 100;
    int ld = thd % 10;
    if (fd == ld) 
        printf("Palindrome\n\n");
    else 
        printf("Not palindrome\n\n");

    // 4.31 а
    if (fd > ld) 
        printf("First > last\n\n");
    else if (fd < ld) 
        printf("Last > first\n\n");
    else 
        printf("First = last\n\n");

    // 4.31 б
    int sd = (thd % 100) / 10;
    if (fd > sd) 
        printf("First > second\n\n");
    else if (fd < sd) 
        printf("Second > first\n\n");
    else 
        printf("First = second\n\n");

    // 4.31 в
    if (sd > ld) 
        printf("Second > last\n\n");
    else if (sd < ld) 
        printf("Last > second\n\n");
    else 
        printf("Second = last\n\n");

    // 4.32
    int sq3 = thd * thd;
    int sc3 = fd * fd * fd + sd * sd * sd + ld * ld * ld;
    if (sq3 == sc3) 
        printf("Square equals sum of cubes\n\n");
    else 
        printf("Square does NOT equal sum of cubes\n\n");

    // 4.33 а
    int sum3 = fd + sd + ld;
    if (sum3 >= 10 && sum3 <= 99) 
        printf("Sum is two-digit\n\n");
    else 
        printf("Sum is NOT two-digit\n\n");

    // 4.33 б
    int prod = fd * sd * ld;
    if (prod >= 100 && prod <= 999) 
        printf("Product is three-digit\n\n");
    else 
        printf("Product is NOT three-digit\n\n");

    // 4.33 в
    int a7;
    printf("Enter a for 4.33c: ");
    scanf("%d", &a7);
    if (prod > a7) 
        printf("Product > a\n\n");
    else 
        printf("Product <= a\n\n");

    // 4.33 г
    if (sum3 % 5 == 0) 
        printf("Sum divisible by 5\n\n");
    else 
        printf("Sum NOT divisible by 5\n\n");

    // 4.33 д
    int a8;
    printf("Enter a for 4.33d: ");
    scanf("%d", &a8);
    if (sum3 % a8 == 0) 
        printf("Sum divisible by a\n\n");
    else 
        printf("Sum NOT divisible by a\n\n");

    // 4.34 а
    if (fd == sd && sd == ld) 
        printf("All digits same\n\n");
    else 
        printf("Not all digits same\n\n");

    // 4.34 б
    if (fd == sd || fd == ld || sd == ld) 
        printf("Has equal digits\n\n");
    else 
        printf("All digits different\n\n");

    // 4.35 а
    int fdgt;
    printf("Enter four-digit number for 4.35a: ");
    scanf("%d", &fdgt);
    int dg1 = fdgt / 1000;
    int dg2 = (fdgt % 1000) / 100;
    int dg3 = (fdgt % 100) / 10;
    int dg4 = fdgt % 10;
    int sf = dg1 + dg2;
    int sl = dg3 + dg4;
    if (sf == sl) 
        printf("First sum = last sum\n\n");
    else 
        printf("First sum != last sum\n\n");

    // 4.35 б
    int sum4 = dg1 + dg2 + dg3 + dg4;
    if (sum4 % 3 == 0) 
        printf("Sum divisible by 3\n\n");
    else 
        printf("Sum NOT divisible by 3\n\n");

    // 4.35 в
    int prod4 = dg1 * dg2 * dg3 * dg4;
    if (prod4 % 4 == 0) 
        printf("Product divisible by 4\n\n");
    else 
        printf("Product NOT divisible by 4\n\n");

    // 4.35 г
    int a9;
    printf("Enter a for 4.35d: ");
    scanf("%d", &a9);
    if (prod4 % a9 == 0) 
        printf("Product divisible by a\n\n");
    else 
        printf("Product NOT divisible by a\n\n");

    // 4.36 а
    int nat;
    printf("Enter natural number for 4.36a: ");
    scanf("%d", &nat);
    if (nat % 2 == 0) 
        printf("Ends with even digit\n\n");
    else 
        printf("Ends with odd digit\n\n");

    // 4.37
    int a10, b;
    printf("Enter a b for 4.37: ");
    scanf("%d %d", &a10, &b);
    int div_a = (b % a10 == 0) ? 1 : 0;
    int div_b = (a10 % b == 0) ? 1 : 0;
    printf("a divides b: %d, b divides a: %d\n\n", div_a, div_b);

    // 4.38
    double tbl_a, tbl_b, crd_c, crd_d;
    printf("Enter table a b for 4.38: ");
    scanf("%lf %lf", &tbl_a, &tbl_b);
    printf("Enter card c d for 4.38: ");
    scanf("%lf %lf", &crd_c, &crd_d);
    int cnt1 = floor(tbl_a / crd_c) * floor(tbl_b / crd_d);
    int cnt2 = floor(tbl_a / crd_d) * floor(tbl_b / crd_c);
    if (cnt1 > cnt2) 
        printf("Long side along long side better\n\n");
    else 
        printf("Long side along short side better\n\n");

    // 4.39
    double t;
    printf("Enter t for 4.39: ");
    scanf("%lf", &t);
    double cyc = fmod(t, 5);
    if (cyc < 3) 
        printf("Green\n\n");
    else 
        printf("Red\n\n");

    // 4.40
    double x;
    printf("Enter x for 4.40: ");
    scanf("%lf", &x);
    if (x > -5 && x < 3) 
        printf("In interval (-5, 3)\n\n");
    else 
        printf("Not in interval (-5, 3)\n\n");

    return 0;
}
