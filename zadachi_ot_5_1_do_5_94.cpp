#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    // 5.1
    for (int i = 0; i < 10; i++) {
        printf("20 ");
    }
    printf("\n\n");
    
    // 5.2
    for (int i = 0; i < 8; i++) {
        printf("5 ");
    }
    printf("\n\n");
    
    // 5.3 a
    for (int i = 20; i <= 35; i++) {
        printf("%d\n", i);
    }
    printf("\n");
    
    // 5.3 b
    for (int i = 40; i <= 50; i++) {
        printf("%d\n", i * i);
    }
    printf("\n");
    
    // 5.3 c
    for (int i = 10; i <= 15; i++) {
        printf("%d\n", i * i * i);
    }
    printf("\n");
    
    // 5.3 d
    for (int i = 10; i <= 15; i++) {
        printf("%d\n", i);
    }
    printf("\n");
    
    // 5.4 a
    for (int i = 10; i <= 25; i++) {
        printf("%d %.1f\n", i, i + 0.4);
    }
    printf("\n");
    
    // 5.4 b
    for (int i = 25; i <= 35; i++) {
        printf("%d %.1f %.1f\n", i, i + 0.5, i - 0.2);
    }
    printf("\n");
    
    // 5.5 a
    for (int i = 21; i >= 10; i--) {
        printf("%d %.1f\n", i, i - 1.8);
    }
    printf("\n");
    
    // 5.5 b
    for (int i = 45; i >= 25; i--) {
        printf("%d %.1f %.1f\n", i, i - 0.5, i - 0.8);
    }
    printf("\n");
    
    // 5.6 a
    for (int i = 21; i <= 35; i++) {
        printf("%d %.1f\n", i, i - 0.6);
    }
    printf("\n");
    
    // 5.6 b
    for (int i = 16; i <= 24; i++) {
        printf("%d %.1f %.1f\n", i, i - 0.5, i + 0.8);
    }
    printf("\n");
    
    // 5.7
    printf("Quantity | Cost\n");
    for (int i = 2; i <= 20; i++) {
        printf("%d | %.2f\n", i, i * 20.4);
    }
    printf("\n");
    
    // 5.8
    printf("Pounds | Kg\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d | %.3f\n", i, i * 0.453);
    }
    printf("\n");
    
    // 5.9
    printf("Inches | Centimeters\n");
    for (int i = 10; i <= 22; i++) {
        printf("%d | %.1f\n", i, i * 2.54);
    }
    printf("\n");
    
    // 5.10
    printf("Dollars | Rubles\n");
    for (int i = 1; i <= 20; i++) {
        printf("%d | %.2f\n", i, i * 75.5);
    }
    printf("\n");
    
    // 5.11
    printf("Height (km) | Horizon distance (km)\n");
    for (int h = 1; h <= 10; h++) {
        double d = sqrt((6350 + h) * (6350 + h) - 6350 * 6350);
        printf("%d | %.2f\n", h, d);
    }
    printf("\n");
    
    // 5.12
    printf("Height (m) | Density (kg/m3)\n");
    for (int h = 0; h <= 1000; h += 100) {
        double p = 1.29 * exp(-h * 0.000125);
        printf("%d | %.4f\n", h, p);
    }
    printf("\n");
    
    // 5.13
    for (int i = 1; i <= 9; i++) {
        printf("%d x 7 = %d\n", i, i * 7);
    }
    printf("\n");
    
    // 5.14
    for (int i = 1; i <= 9; i++) {
        printf("9 x %d = %d\n", i, 9 * i);
    }
    printf("\n");
    
    // 5.15
    for (int i = 1; i <= 9; i++) {
        printf("6 x %d = %d\n", i, 6 * i);
    }
    printf("\n");
    
    // 5.16
    for (int i = 2; i <= 15; i++) {
        printf("%.4f\n", sin(i));
    }
    printf("\n");
    
    // 5.17
    for (int x = 4; x <= 28; x++) {
        double t = x + 3;
        double y = 3 * t * t + 4.87 * t - 3;
        printf("x = %d, y = %.2f\n", x, y);
    }
    printf("\n");
    
    // 5.18
    for (int a = 2; a <= 17; a++) {
        double t = 3 * a;
        double z = 4.3 * t * t - 8 * t + 13;
        printf("a = %d, z = %.2f\n", a, z);
    }
    printf("\n");
    
    // 5.19
    for (double x = 0.1; x <= 1.5; x += 0.1) {
        printf("%.4f\n", sin(x));
    }
    printf("\n");
    
    // 5.20
    for (int i = 1; i <= 9; i++) {
        printf("%.1f\n", i / 10.0);
    }
    printf("\n");
    
    // 5.21
    printf("Weight (g) | Cost (rub)\n");
    for (int w = 50; w <= 1000; w += 50) {
        printf("%d | %.2f\n", w, (w / 1000.0) * 800);
    }
    printf("\n");
    
    // 5.22
    printf("Weight (g) | Cost (rub)\n");
    for (int w = 100; w <= 2000; w += 100) {
        printf("%d | %.2f\n", w, (w / 1000.0) * 500);
    }
    printf("\n");
    
    // 5.23
    for (int i = 21; i <= 28; i++) {
        printf("%.1f\n", i / 10.0);
    }
    printf("\n");
    
    // 5.24
    for (int i = 32; i <= 39; i++) {
        printf("%.1f\n", i / 10.0);
    }
    printf("\n");
    
    // 5.25
    for (int i = 22; i <= 42; i += 2) {
        printf("%.1f\n", i / 10.0);
    }
    printf("\n");
    
    // 5.26
    for (int i = 44; i <= 64; i += 2) {
        printf("%.1f\n", i / 10.0);
    }
    printf("\n");
    
    // 5.27 a
    int sum27a = 0;
    for (int i = 200; i <= 600; i++) {
        sum27a += i;
    }
    printf("Sum 200-600: %d\n\n", sum27a);
    
    // 5.27 b
    int sum27b = 0;
    for (int i = 300; i <= 400; i++) {
        sum27b += i;
    }
    printf("Sum 300-400: %d\n\n", sum27b);
    
    // 5.27 c
    int sum27c = 0;
    for (int i = -15; i <= 10; i++) {
        sum27c += i;
    }
    printf("Sum -15 to 10: %d\n\n", sum27c);
    
    // 5.27 d
    int sum27d = 0;
    for (int i = 10; i <= 20; i++) {
        sum27d += i;
    }
    printf("Sum 10-20: %d\n\n", sum27d);
    
    // 5.28 a
    long long product28a = 1;
    for (int i = 7; i <= 14; i++) {
        product28a *= i;
    }
    printf("Product 7-14: %lld\n\n", product28a);
    
    // 5.28 b
    long long product28b = 1;
    for (int i = 10; i <= 15; i++) {
        product28b *= i;
    }
    printf("Product 10-15: %lld\n\n", product28b);
    
    // 5.28 c
    long long product28c = 1;
    for (int i = 1; i <= 8; i++) {
        product28c *= i;
    }
    printf("Product 1-8: %lld\n\n", product28c);
    
    // 5.28 d
    long long product28d = 1;
    for (int i = 3; i <= 6; i++) {
        product28d *= i;
    }
    printf("Product 3-6: %lld\n\n", product28d);
    
    // 5.29 a
    int sum29a = 0, count29a = 0;
    for (int i = 1; i <= 750; i++) {
        sum29a += i;
        count29a++;
    }
    printf("Average 1-750: %.2f\n\n", sum29a / (double)count29a);
    
    // 5.29 b
    int sum29b = 0, count29b = 0;
    for (int i = 150; i <= 200; i++) {
        sum29b += i;
        count29b++;
    }
    printf("Average 150-200: %.2f\n\n", sum29b / (double)count29b);
    
    // 5.29 c
    int sum29c = 0, count29c = 0;
    for (int i = 100; i <= 200; i++) {
        sum29c += i;
        count29c++;
    }
    printf("Average 100-200: %.2f\n\n", sum29c / (double)count29c);
    
    // 5.29 d
    int sum29d = 0, count29d = 0;
    for (int i = 20; i <= 30; i++) {
        sum29d += i;
        count29d++;
    }
    printf("Average 20-30: %.2f\n\n", sum29d / (double)count29d);
    
    // 5.30 a
    long long sum30a = 0;
    for (int i = 25; i <= 40; i++) {
        sum30a += i * i * i;
    }
    printf("Sum of cubes 25-40: %lld\n\n", sum30a);
    
    // 5.30 b
    long long sum30b = 0;
    for (int i = 40; i <= 50; i++) {
        sum30b += i * i;
    }
    printf("Sum of squares 40-50: %lld\n\n", sum30b);
    
    // 5.30 c
    long long sum30c = 0;
    for (int i = 1; i <= 10; i++) {
        sum30c += i * i;
    }
    printf("Sum of squares 1-10: %lld\n\n", sum30c);
    
    // 5.30 d
    long long sum30d = 0;
    for (int i = 5; i <= 10; i++) {
        sum30d += i * i;
    }
    printf("Sum of squares 5-10: %lld\n\n", sum30d);
    
    // 5.31
    long long sum31 = 0;
    for (int i = 0; i <= 5; i++) {
        sum31 += (5 + i) * (5 + i);
    }
    printf("Sum (n+i)^2: %lld\n\n", sum31);
    
    // 5.32
    double sum32 = 0;
    for (int i = 1; i <= 10; i++) {
        sum32 += i / (i + 1.0);
    }
    printf("Sum i/(i+1): %.4f\n\n", sum32);
    
    // 5.33
    double sum33 = 0;
    for (int i = 1; i <= 8; i++) {
        sum33 += i / pow(3.0, i);
    }
    printf("Sum i/3^i: %.4f\n\n", sum33);
    
    // 5.34
    int sum34 = 0;
    for (int i = 1; i <= 10; i++) {
        sum34 += i * i;
    }
    printf("Sum of squares 1-10: %d\n\n", sum34);
    
    // 5.35
    int sum35 = 0;
    for (int i = 1; i <= 4; i++) {
        sum35 += i * (i + 1);
    }
    printf("Sum i*(i+1): %d\n\n", sum35);
    
    // 5.36
    int sum36 = 0, term = 1;
    for (int i = 1; i <= 10; i++) {
        term *= 2;
        sum36 += term;
    }
    printf("Sum 2^i: %d\n\n", sum36);
    
    // 5.37
    int sum37 = 0, sign = -1;
    for (int i = 1; i <= 10; i++) {
        sign = -sign;
        sum37 += sign * i * i;
    }
    printf("Sum (-1)^i * i^2: %d\n\n", sum37);
    
    // 5.38
    double sum38 = 0, fact38 = 1;
    for (int i = 1; i <= 10; i++) {
        fact38 *= i;
        sum38 += pow(2.0, i) / fact38;
    }
    printf("Sum 2^i/i!: %.4f\n\n", sum38);
    
    // 5.39
    double sum39 = 1, fact39 = 1, power39 = 1;
    for (int i = 1; i <= 10; i++) {
        fact39 *= i;
        power39 *= 2.0;
        sum39 += power39 / fact39;
    }
    printf("Sum 2^i/i! (from 0): %.4f\n\n", sum39);
    
    // 5.40
    int num40 = 123456789, sum40 = 0, temp40 = num40;
    while (temp40 > 0) {
        sum40 += temp40 % 10;
        temp40 /= 10;
    }
    printf("Sum of digits: %d\n\n", sum40);
    
    // 5.41
    int num41 = 123456, n41 = 3;
    int product41 = 1, sum41 = 0, temp41 = num41;
    for (int i = 0; i < n41 && temp41 > 0; i++) {
        int digit = temp41 % 10;
        product41 *= digit;
        sum41 += digit;
        temp41 /= 10;
    }
    printf("Product of last %d digits: %d\n", n41, product41);
    printf("Sum of last %d digits: %d\n\n", n41, sum41);
    
    // 5.42 a
    double pos = 0, dir = 1;
    for (int i = 1; i <= 100; i++) {
        pos += dir * (1.0 / i);
        dir = -dir;
    }
    printf("Position after 100: %.4f\n", pos);
    
    // 5.42 b
    double totalDist = 0;
    for (int i = 1; i <= 100; i++) {
        totalDist += 1.0 / i;
    }
    printf("Total distance: %.4f\n\n", totalDist);
    
    // 5.43
    double a43 = 1;
    printf("a0 = %.4f\n", a43);
    for (int k = 1; k <= 5; k++) {
        a43 = k * a43 + 1.0 / k;
        printf("a%d = %.4f\n", k, a43);
    }
    printf("\n");
    
    // 5.44 a
    int fib1 = 1, fib2 = 1, fibN = 0;
    if (10 == 1 || 10 == 2) {
        fibN = 1;
    } else {
        for (int i = 3; i <= 10; i++) {
            fibN = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibN;
        }
    }
    printf("10th Fibonacci: %d\n", fibN);
    
    // 5.44 b
    printf("First 10 Fibonacci:\n");
    int f1 = 1, f2 = 1;
    printf("1: %d\n", f1);
    printf("2: %d\n", f2);
    for (int i = 3; i <= 10; i++) {
        int f3 = f1 + f2;
        printf("%d: %d\n", i, f3);
        f1 = f2;
        f2 = f3;
    }
    printf("\n");
    
    // 5.45
    printf("Fibonacci 3-10:\n");
    int fib45_1 = 1, fib45_2 = 1;
    for (int i = 3; i <= 10; i++) {
        int fib = fib45_1 + fib45_2;
        printf("%d: %d\n", i, fib);
        fib45_1 = fib45_2;
        fib45_2 = fib;
    }
    printf("\n");
    
    // 5.46 a
    int num1_46 = 1, den1_46 = 1;
    int num2_46 = 2, den2_46 = 1;
    int k46 = 6;
    if (k46 == 1) {
        printf("Term 1: %d/%d\n", num1_46, den1_46);
    } else if (k46 == 2) {
        printf("Term 2: %d/%d\n", num2_46, den2_46);
    } else {
        for (int i = 3; i <= k46; i++) {
            int num = num1_46 + num2_46;
            int den = den1_46 + den2_46;
            num1_46 = num2_46;
            den1_46 = den2_46;
            num2_46 = num;
            den2_46 = den;
        }
        printf("Term %d: %d/%d\n", k46, num2_46, den2_46);
    }
    printf("\n");
    
    // 5.46 b
    printf("First 7 terms:\n");
    num1_46 = 1; den1_46 = 1;
    num2_46 = 2; den2_46 = 1;
    printf("1: %d/%d\n", num1_46, den1_46);
    printf("2: %d/%d\n", num2_46, den2_46);
    for (int i = 3; i <= 7; i++) {
        int num = num1_46 + num2_46;
        int den = den1_46 + den2_46;
        printf("%d: %d/%d\n", i, num, den);
        num1_46 = num2_46;
        den1_46 = den2_46;
        num2_46 = num;
        den2_46 = den;
    }
    printf("\n");
    
    // 5.47
    double v1 = 0, v2 = 0, v3 = 1.5, vn = 0;
    if (6 == 1 || 6 == 2) {
        vn = 0;
    } else if (6 == 3) {
        vn = 1.5;
    } else {
        for (int i = 4; i <= 6; i++) {
            vn = (i + 1.0) / (i * i + 1) * v3 - v2 * v1;
            v1 = v2;
            v2 = v3;
            v3 = vn;
        }
    }
    printf("v6 = %.4f\n\n", vn);
    
    // 5.48
    printf("Amoeba count:\n");
    int amoeba = 1;
    for (int hours = 3; hours <= 24; hours += 3) {
        amoeba *= 2;
        printf("After %d hours: %d\n", hours, amoeba);
    }
    printf("\n");
    
    // 5.49 a
    printf("Deposit increase:\n");
    double deposit = 1000;
    for (int month = 1; month <= 10; month++) {
        double inc = deposit * 0.02;
        deposit += inc;
        printf("Month %d: +%.2f\n", month, inc);
    }
    printf("\n");
    
    // 5.49 b
    printf("Deposit amount:\n");
    deposit = 1000;
    for (int month = 3; month <= 12; month++) {
        deposit *= 1.02;
        printf("After %d months: %.2f\n", month, deposit);
    }
    printf("\n");
    
    // 5.50 a
    printf("Daily distance:\n");
    double dist = 10;
    for (int day = 2; day <= 10; day++) {
        dist *= 1.1;
        printf("Day %d: %.2f km\n", day, dist);
    }
    printf("\n");
    
    // 5.50 b
    dist = 10;
    double totalDist50 = 10;
    for (int day = 2; day <= 7; day++) {
        dist *= 1.1;
        totalDist50 += dist;
    }
    printf("Total 7 days: %.2f km\n\n", totalDist50);
    
    // 5.51 a
    printf("Yield per year:\n");
    double area = 100, yield51 = 20;
    for (int year = 2; year <= 8; year++) {
        yield51 *= 1.02;
        printf("Year %d: %.2f c/ha\n", year, yield51);
    }
    printf("\n");
    
    // 5.51 b
    printf("Area per year:\n");
    area = 100;
    for (int year = 1; year <= 7; year++) {
        if (year >= 4) {
            printf("Year %d: %.2f ha\n", year, area);
        }
        area *= 1.05;
    }
    printf("\n");
    
    // 5.51 c
    area = 100;
    yield51 = 20;
    double totalHarvest = 0;
    for (int year = 1; year <= 6; year++) {
        totalHarvest += area * yield51;
        area *= 1.05;
        yield51 *= 1.02;
    }
    printf("Total harvest: %.2f c\n\n", totalHarvest);
    
    // 5.52
    double totalVol = 0;
    int diameter = 10;
    for (int i = 1; i <= 12; i++) {
        double r = diameter / 2.0;
        double vol = (4.0/3.0) * M_PI * r * r * r;
        totalVol += vol;
        diameter++;
    }
    printf("Total volume: %.2f liters\n\n", totalVol / 1000);
    
    // 5.53
    int sum53 = 0, power53 = 4;
    for (int i = 2; i <= 10; i++) {
        sum53 += power53;
        power53 *= 2;
    }
    printf("Sum 2^2 to 2^10: %d\n\n", sum53);
    
    // 5.54
    printf("Powers of 2:\n");
    int result54 = 2;
    for (int i = 1; i <= 5; i++) {
        printf("2^%d = %d\n", i, result54);
        result54 *= 2;
    }
    printf("\n");
    
    // 5.55
    int sum55 = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) sum55 += i * i;
        else sum55 -= i * i;
    }
    printf("Sum (-1)^i * i^2: %d\n\n", sum55);
    
    // 5.56
    double area56 = 0;
    double step56 = M_PI / 1000;
    for (int i = 0; i < 1000; i++) {
        double x = i * step56;
        area56 += sin(x) * step56;
    }
    printf("Sine arch area: %.4f\n\n", area56);
    
    // 5.57
    double area57 = 0;
    double step57 = 0.001;
    for (double x = 2; x <= 4; x += step57) {
        double y = 0.3 * (x - 1) * (x - 1) + 3;
        if (y >= 2 && y <= 4) {
            area57 += step57 * (y - 2);
        }
    }
    printf("Area 5.57: %.4f\n\n", area57);
    
    // 5.58
    double area58 = 0;
    double step58 = 0.001;
    for (double x = 0; x <= 2; x += step58) {
        double y = 0.4 * (x + 2) * (x + 2) + 1;
        if (y <= 2) {
            area58 += step58 * y;
        }
    }
    printf("Area 5.58: %.4f\n\n", area58);
    
    // 5.59
    int fact59 = 1;
    for (int i = 1; i <= 6; i++) {
        fact59 *= i;
    }
    printf("6! = %d\n\n", fact59);
    
    // 5.60
    int n60 = 5;
    double a60 = 3.5;
    double product60 = 0;
    for (int i = 0; i < abs(n60); i++) {
        product60 += a60;
    }
    if (n60 < 0) product60 = -product60;
    printf("%d * %.1f = %.1f\n\n", n60, a60, product60);
    
    // 5.61 Method 1
    int x61 = 5, y61 = 4;
    int product61_1 = 0;
    for (int i = 0; i < y61; i++) {
        product61_1 += x61;
    }
    printf("Method 1: %d * %d = %d\n", x61, y61, product61_1);
    
    // 5.61 Method 2
    int product61_2 = 0, temp61 = abs(y61);
    while (temp61 > 0) {
        product61_2 += abs(x61);
        temp61--;
    }
    if ((x61 < 0 && y61 > 0) || (x61 > 0 && y61 < 0)) {
        product61_2 = -product61_2;
    }
    printf("Method 2: %d * %d = %d\n\n", x61, y61, product61_2);
    
    // 5.62
    double a62 = 2;
    int n62 = 5;
    double power62 = 1;
    for (int i = 0; i < abs(n62); i++) {
        power62 *= a62;
    }
    if (n62 < 0) power62 = 1 / power62;
    printf("%.0f^%d = %.4f\n\n", a62, n62, power62);
    
    // 5.63
    int sum63 = 0;
    for (int i = 3; i <= 5; i++) {
        sum63 += i * i * i;
    }
    printf("Sum cubes 3-5: %d\n\n", sum63);
    
    // 5.64
    int num64 = 1234567, rev64 = 0, temp64 = num64;
    while (temp64 > 0) {
        rev64 = rev64 * 10 + temp64 % 10;
        temp64 /= 10;
    }
    printf("Reversed: %d\n\n", rev64);
    
    // 5.65
    int square65 = 0;
    for (int i = 1; i <= 11; i += 2) {
        square65 += i;
    }
    printf("6^2 = %d\n\n", square65);
    
    // 5.66
    int sum66 = 0;
    for (int n = 1; n <= 12; n++) {
        int square = 0;
        for (int i = 1; i <= 2*n-1; i += 2) {
            square += i;
        }
        sum66 += square;
    }
    printf("Sum squares 1-12: %d\n\n", sum66);
    
    // 5.67
    int n67 = 4;
    int cube67 = 0;
    int start67 = 2 * n67 * (n67 - 1) + 1;
    for (int i = 0; i < n67; i++) {
        cube67 += start67 + 2*i;
    }
    printf("%d^3 = %d\n\n", n67, cube67);
    
    // 5.68
    int sum68 = 0, fact68 = 1;
    for (int i = 1; i <= 5; i++) {
        fact68 *= i;
        sum68 += fact68;
    }
    printf("Sum factorials 1! to 5!: %d\n\n", sum68);
    
    // 5.69
    double sum69 = 0;
    int fact69 = 1;
    for (int i = 1; i <= 4; i++) {
        fact69 *= i;
        sum69 += 1.0 / fact69;
    }
    printf("Sum 1/i! to 4: %.4f\n\n", sum69);
    
    // 5.70
    double sum70 = 0;
    int fact70 = 1;
    for (int i = 1; i <= 4; i++) {
        fact70 *= i;
        sum70 += pow(2.0, i) / fact70;
    }
    printf("Sum 2^i/i! to 4: %.4f\n\n", sum70);
    
    // 5.71
    double x71 = 2;
    int n71 = 5;
    double sum71 = 1;
    int fact71 = 1;
    double power71 = 1;
    for (int i = 1; i <= n71; i++) {
        fact71 *= i;
        power71 *= x71;
        sum71 += power71 / fact71;
    }
    printf("Sum x^i/i! to %d: %.4f\n\n", n71, sum71);
    
    // 5.72 a
    double sum72a = 0;
    for (int i = 1; i <= 5; i++) {
        sum72a += 1.0 / i;
    }
    printf("Sum 1/i to 5: %.4f\n", sum72a);
    
    // 5.72 b
    double sum72b = 0;
    for (int i = 1; i <= 5; i++) {
        sum72b += 1.0 / (i*i*i);
    }
    printf("Sum 1/i^3 to 5: %.4f\n", sum72b);
    
    // 5.72 c
    double sum72c = 0;
    for (int i = 1; i <= 5; i++) {
        sum72c += 1.0 / pow(i, i);
    }
    printf("Sum 1/i^i to 5: %.4f\n", sum72c);
    
    // 5.72 d
    double sum72d = 0;
    int fact72d = 1;
    for (int i = 1; i <= 5; i++) {
        fact72d *= i;
        sum72d += 1.0 / fact72d;
    }
    printf("Sum 1/i! to 5: %.4f\n\n", sum72d);
    
    // 5.73
    printf("Angle as pole slides:\n");
    double length73 = 4.5;
    for (double slide = 0; slide <= 3; slide += 0.2) {
        double remaining = 3 - slide;
        double angle = acos(remaining / length73) * (180 / M_PI);
        printf("Slide %.1f m: %.1f deg\n", slide, angle);
    }
    printf("\n");
    
    // 5.74 Method 1
    printf("Odd 10-100 (method 1):\n");
    for (int i = 10; i <= 100; i++) {
        if (i % 2 != 0) printf("%d ", i);
    }
    printf("\n\n");
    
    // 5.74 Method 2
    printf("Odd 10-100 (method 2):\n");
    for (int i = 11; i <= 99; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // 5.75
    printf("Multiples of 3, 100-200:\n");
    for (int i = 100; i <= 200; i++) {
        if (i % 3 == 0) printf("%d ", i);
    }
    printf("\n\n");
    
    // 5.76
    printf("Multiples of 7, 10-50:\n");
    for (int i = 10; i <= 50; i++) {
        if (i % 7 == 0) printf("%d ", i);
    }
    printf("\n\n");
    
    // 5.77
    printf("Two-digit odd ending with 3 or 7:\n");
    for (int i = 10; i <= 99; i++) {
        if (i % 2 != 0 && (i % 10 == 3 || i % 10 == 7)) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    
    // 5.78
    printf("Three-digit numbers with conditions:\n");
    for (int i = 100; i <= 999; i++) {
        if (i % 47 == 43 && i % 43 == 45) {
            printf("%d\n", i);
        }
    }
    printf("\n");
    
    // 5.79
    printf("Four-digit numbers with conditions:\n");
    for (int i = 1000; i <= 9999; i++) {
        if (i % 133 == 125 && i % 134 == 111) {
            printf("%d\n", i);
        }
    }
    printf("\n");
    
    // 5.80
    int n80 = 3;
    printf("Two-digit divisible by %d or contains %d:\n", n80, n80);
    for (int i = 10; i <= 99; i++) {
        if (i % n80 == 0 || i/10 == n80 || i%10 == n80) {
            printf("%d ", i);
        }
    }
    printf("\n\n");
    
    // 5.81 a
    printf("Three-digit where square ends with number:\n");
    for (int i = 100; i <= 999; i++) {
        if ((i*i) % 1000 == i) {
            printf("%d^2 = %d\n", i, i*i);
        }
    }
    printf("\n");
    
    // 5.81 b
    printf("Three-digit divisible by 7, sum digits divisible by 7:\n");
    for (int i = 100; i <= 999; i++) {
        if (i % 7 == 0) {
            int sum = (i/100) + ((i/10)%10) + (i%10);
            if (sum % 7 == 0) {
                printf("%d (sum: %d)\n", i, sum);
            }
        }
    }
    printf("\n");
    
    // 5.82 a
    printf("Two-digit, sum of squares divisible by 13:\n");
    for (int i = 10; i <= 99; i++) {
        int d1 = i/10, d2 = i%10;
        int sumSq = d1*d1 + d2*d2;
        if (sumSq % 13 == 0) {
            printf("%d (sum sq: %d)\n", i, sumSq);
        }
    }
    printf("\n");
    
    // 5.82 b
    printf("Two-digit: sum + square(sum) = number:\n");
    for (int i = 10; i <= 99; i++) {
        int d1 = i/10, d2 = i%10;
        int sum = d1 + d2;
        if (sum + sum*sum == i) {
            printf("%d (sum: %d)\n", i, sum);
        }
    }
    printf("\n");
    
    // 5.83
    int sum83 = 0;
    for (int i = 1; i < 50; i += 2) {
        sum83 += i;
    }
    printf("Sum odd < 50: %d\n\n", sum83);
    
    // 5.84
    int sum84 = 0;
    for (int i = 100; i <= 998; i += 2) {
        sum84 += i;
    }
    printf("Sum even three-digit: %d\n\n", sum84);
    
    // 5.85
    int sum85 = 0;
    for (int i = 10; i <= 50; i++) {
        if (i % 4 == 0) sum85 += i;
    }
    printf("Sum multiples of 4, 10-50: %d\n\n", sum85);
    
    // 5.86
    int sum86 = 0;
    for (int i = 31; i < 100; i++) {
        if (i % 3 == 0 && (i % 10 == 2 || i % 10 == 4 || i % 10 == 8)) {
            sum86 += i;
        }
    }
    printf("Sum 30-100, divisible by 3, ends 2,4,8: %d\n\n", sum86);
    
    // 5.87
    int count87 = 0;
    for (int i = 100; i <= 500; i++) {
        int sum = (i/100) + ((i/10)%10) + (i%10);
        if (sum == 15) count87++;
    }
    printf("Numbers 100-500, digit sum 15: %d\n\n", count87);
    
    // 5.88
    int s = 15, count88 = 0;
    for (int i = 100; i <= 999; i++) {
        int sum = (i/100) + ((i/10)%10) + (i%10);
        if (sum == s) count88++;
    }
    printf("Three-digit numbers with sum %d: %d\n\n", s, count88);
    
    // 5.89
    int count89 = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % 7 == 0) {
            int sum = (i/100) + ((i/10)%10) + (i%10);
            if (sum % 7 == 0) count89++;
        }
    }
    printf("Three-digit divisible by 7, digit sum divisible by 7: %d\n\n", count89);
    
    // 5.90
    int fib90_1 = 1, fib90_2 = 1, sumFib = 2;
    for (int i = 3; i <= 10; i++) {
        int fib = fib90_1 + fib90_2;
        sumFib += fib;
        fib90_1 = fib90_2;
        fib90_2 = fib;
    }
    printf("Sum first 10 Fibonacci: %d (even: %s)\n\n", sumFib, sumFib%2==0?"yes":"no");
    
    // 5.91 a
    int num91 = 28;
    printf("Divisors of %d:\n", num91);
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0) printf("%d ", i);
    }
    printf("\n");
    
    // 5.91 b
    int sumDiv = 0;
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0) sumDiv += i;
    }
    printf("Sum divisors: %d\n", sumDiv);
    
    // 5.91 c
    int sumEvenDiv = 0;
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0 && i % 2 == 0) sumEvenDiv += i;
    }
    printf("Sum even divisors: %d\n", sumEvenDiv);
    
    // 5.91 d
    int countDiv = 0;
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0) countDiv++;
    }
    printf("Count divisors: %d\n", countDiv);
    
    // 5.91 e
    int countOddDiv = 0;
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0 && i % 2 != 0) countOddDiv++;
    }
    printf("Count odd divisors: %d\n", countOddDiv);
    
    // 5.91 f
    int countEvenDiv2 = 0;
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0 && i % 2 == 0) countEvenDiv2++;
    }
    printf("Count even divisors: %d of %d\n", countEvenDiv2, countDiv);
    
    // 5.91 g
    int d91 = 5, countGreater = 0;
    for (int i = 1; i <= num91; i++) {
        if (num91 % i == 0 && i > d91) countGreater++;
    }
    printf("Divisors > %d: %d\n\n", d91, countGreater);
    
    // 5.92
    int num92 = 17;
    bool isPrime = true;
    if (num92 < 2) isPrime = false;
    else {
        for (int i = 2; i*i <= num92; i++) {
            if (num92 % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    printf("%d is prime: %s\n\n", num92, isPrime?"yes":"no");
    
    // 5.93
    int num93 = 28;
    int sumPropDiv = 0;
    for (int i = 1; i < num93; i++) {
        if (num93 % i == 0) sumPropDiv += i;
    }
    printf("%d is perfect: %s (sum: %d)\n\n", num93, sumPropDiv==num93?"yes":"no", sumPropDiv);
    
    // 5.94
    int n94 = 50;
    printf("Natural numbers with square <= %d:\n", n94);
    int i94 = 1;
    while (i94 * i94 <= n94) {
        printf("%d ", i94);
        i94++;
    }
    printf("\n");
    
    return 0;
}
