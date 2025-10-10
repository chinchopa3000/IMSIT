#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    // 4.91 а (с учетом високосного года)
    int year, month, day;
    printf("Enter year month day for 4.91a: ");
    scanf("%d %d %d", &year, &month, &day);
    
    int next_day, next_month, next_year;
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        if (day < 31) {
            next_day = day + 1;
            next_month = month;
            next_year = year;
        } else {
            next_day = 1;
            next_month = month + 1;
            next_year = year;
            if (next_month > 12) {
                next_month = 1;
                next_year = year + 1;
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 30) {
            next_day = day + 1;
            next_month = month;
            next_year = year;
        } else {
            next_day = 1;
            next_month = month + 1;
            next_year = year;
        }
    } else {
        int isLeap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
        if (day < (isLeap ? 29 : 28)) {
            next_day = day + 1;
            next_month = month;
            next_year = year;
        } else {
            next_day = 1;
            next_month = month + 1;
            next_year = year;
        }
    }
    printf("Next date: %d.%d.%d\n\n", next_day, next_month, next_year);

    // 4.92
    double t92;
    printf("Enter t for 4.92: ");
    scanf("%lf", &t92);
    double cycle92 = fmod(t92, 6);
    if (cycle92 < 3)
        printf("Green\n\n");
    else if (cycle92 < 4)
        printf("Yellow\n\n");
    else
        printf("Red\n\n");

    // 4.93 а
    int kday93;
    printf("Enter day number k for 4.93a: ");
    scanf("%d", &kday93);
    int dow93 = (kday93 - 1) % 7;
    if (dow93 == 5)
        printf("Saturday\n\n");
    else if (dow93 == 6)
        printf("Sunday\n\n");
    else
        printf("Workday\n\n");

    // 4.93 б
    int d93;
    printf("Enter d for 4.93b: ");
    scanf("%d", &d93);
    int dow93b = (kday93 - d93) % 7;
    if (dow93b < 0) dow93b += 7;
    if (dow93b == 5)
        printf("Saturday\n\n");
    else if (dow93b == 6)
        printf("Sunday\n\n");
    else
        printf("Workday\n\n");

    // 4.94
    int k94;
    printf("Enter k for 4.94: ");
    scanf("%d", &k94);
    int pair_num = (k94 + 1) / 2;
    int two_digit_num = 9 + pair_num;
    int digit94;
    if (k94 % 2 == 1)
        digit94 = two_digit_num / 10;
    else
        digit94 = two_digit_num % 10;
    printf("Digit: %d\n\n", digit94);

    // 4.95
    int n95;
    printf("Enter n for 4.95: ");
    scanf("%d", &n95);
    int digit95;
    if (n95 == 1)
        digit95 = 0;
    else if (n95 >= 2 && n95 <= 11) {
        int num = n95 - 1;
        if (num < 10)
            digit95 = num;
        else
            digit95 = (num - 9) / 2;
    } else {
        int num = n95 - 1;
        int adjusted = num - 9;
        int two_digit = 10 + (adjusted - 1) / 2;
        if (adjusted % 2 == 1)
            digit95 = two_digit / 10;
        else
            digit95 = two_digit % 10;
    }
    printf("Digit: %d\n\n", digit95);

    // 4.96
    int k96;
    printf("Enter k for 4.96: ");
    scanf("%d", &k96);
    int digit96;
    if (k96 <= 2) {
        digit96 = (k96 == 1) ? 5 : 0;
    } else if (k96 <= 102) {
        int num = 50 + (k96 - 3) / 2;
        if ((k96 - 3) % 2 == 0)
            digit96 = num / 10;
        else
            digit96 = num % 10;
    } else {
        int adjusted = k96 - 103;
        int num = 100 + adjusted / 3;
        if (adjusted % 3 == 0)
            digit96 = num / 100;
        else if (adjusted % 3 == 1)
            digit96 = (num % 100) / 10;
        else
            digit96 = num % 10;
    }
    printf("Digit: %d\n\n", digit96);

    // 4.97
    int k97;
    printf("Enter k for 4.97: ");
    scanf("%d", &k97);
    int digit97;
    if (k97 <= 9) {
        digit97 = k97;
    } else if (k97 <= 189) {
        int adjusted = k97 - 10;
        int num = 10 + adjusted / 2;
        if (adjusted % 2 == 0)
            digit97 = num / 10;
        else
            digit97 = num % 10;
    } else {
        int adjusted = k97 - 190;
        int num = 100 + adjusted / 3;
        if (adjusted % 3 == 0)
            digit97 = num / 100;
        else if (adjusted % 3 == 1)
            digit97 = (num % 100) / 10;
        else
            digit97 = num % 10;
    }
    printf("Digit: %d\n\n", digit97);

    // 4.98
    int apt_start, apt_count;
    printf("Enter start apartment and count for 4.98: ");
    scanf("%d %d", &apt_start, &apt_count);
    int apt_end = apt_start + apt_count - 1;
    int sum_apt = (apt_start + apt_end) * apt_count / 2;
    if (sum_apt % 2 == 0)
        printf("Sum is even\n\n");
    else
        printf("Sum is odd\n\n");

    // 4.99 а
    int num1, num2;
    printf("Enter two numbers for 4.99a: ");
    scanf("%d %d", &num1, &num2);
    int max99a;
    if (num1 > num2) max99a = num1;
    if (num2 > num1) max99a = num2;
    printf("Max (a): %d\n\n", max99a);

    // 4.99 б
    int max99b = num2;
    if (num1 > num2) max99b = num1;
    printf("Max (b): %d\n\n", max99b);

    // 4.100 а
    int max100, min100;
    if (num1 > num2) max100 = num1;
    if (num2 > num1) max100 = num2;
    if (num1 < num2) min100 = num1;
    if (num2 < num1) min100 = num2;
    printf("Max: %d, Min: %d\n\n", max100, min100);

    // 4.100 б
    int max4 = num1, min4 = num1;
    if (num2 > max4) max4 = num2;
    if (num2 < min4) min4 = num2;
    printf("Max: %d, Min: %d\n\n", max4, min4);

    // 4.101 а
    int numC;
    printf("Enter three numbers for 4.101a: ");
    scanf("%d %d %d", &num1, &num2, &numC);
    int max5 = num1;
    if (num2 > max5) max5 = num2;
    if (numC > max5) max5 = numC;
    printf("Max: %d\n\n", max5);

    // 4.101 б
    int min5 = num1;
    if (num2 < min5) min5 = num2;
    if (numC < min5) min5 = numC;
    printf("Min: %d\n\n", min5);

    // 4.102 а
    int numD;
    printf("Enter four numbers for 4.102a: ");
    scanf("%d %d %d %d", &num1, &num2, &numC, &numD);
    int max6 = num1;
    if (num2 > max6) max6 = num2;
    if (numC > max6) max6 = numC;
    if (numD > max6) max6 = numD;
    printf("Max: %d\n\n", max6);

    // 4.102 б
    int min6 = num1;
    if (num2 < min6) min6 = num2;
    if (numC < min6) min6 = numC;
    if (numD < min6) min6 = numD;
    printf("Min: %d\n\n", min6);

    // 4.103
    double someNum;
    printf("Enter number for 4.103: ");
    scanf("%lf", &someNum);
    double absValue = someNum;
    if (someNum < 0) absValue = -someNum;
    printf("Absolute value: %.2lf\n\n", absValue);

    // 4.104 а
    printf("Enter two numbers for 4.104a: ");
    scanf("%d %d", &num1, &num2);
    double halfSumAbs = (abs(num1) + abs(num2)) / 2.0;
    printf("Half sum of abs: %.2lf\n\n", halfSumAbs);

    // 4.104 б
    double sqrtProdAbs = sqrt(abs(num1) * abs(num2));
    printf("Sqrt of product of abs: %.2lf\n\n", sqrtProdAbs);

    // 4.105
    double a105, b105;
    printf("Enter two numbers for 4.105: ");
    scanf("%lf %lf", &a105, &b105);
    double result105 = a105;
    if (fabs(a105) > fabs(b105)) result105 = a105 / 2;
    printf("Result: %.2lf\n\n", result105);

    // 4.106
    double e106, f106;
    printf("Enter e and f for 4.106: ");
    scanf("%lf %lf", &e106, &f106);
    double result106 = f106;
    if (sqrt(f106) < e106) result106 = f106 * 5;
    printf("Result: %.2lf\n\n", result106);

    // 4.107
    int g107, h107, i107;
    printf("Enter three numbers for 4.107: ");
    scanf("%d %d %d", &g107, &h107, &i107);
    if (g107 % 2 == 0) printf("%d ", g107);
    if (h107 % 2 == 0) printf("%d ", h107);
    if (i107 % 2 == 0) printf("%d ", i107);
    printf("\n\n");

    // 4.108
    double j108, k108, l108;
    printf("Enter three numbers for 4.108: ");
    scanf("%lf %lf %lf", &j108, &k108, &l108);
    if (j108 >= 0) j108 = j108 * j108;
    if (k108 >= 0) k108 = k108 * k108;
    if (l108 >= 0) l108 = l108 * l108;
    printf("Results: %.2lf, %.2lf, %.2lf\n\n", j108, k108, l108);

    // 4.109
    double m109, n109, o109;
    printf("Enter three numbers for 4.109: ");
    scanf("%lf %lf %lf", &m109, &n109, &o109);
    if (m109 >= 1.6 && m109 <= 3.8) printf("%.2lf ", m109);
    if (n109 >= 1.6 && n109 <= 3.8) printf("%.2lf ", n109);
    if (o109 >= 1.6 && o109 <= 3.8) printf("%.2lf ", o109);
    printf("\n\n");

    // 4.110
    int p110, q110, r110, s110;
    printf("Enter four numbers for 4.110: ");
    scanf("%d %d %d %d", &p110, &q110, &r110, &s110);
    int countNeg = 0;
    if (p110 < 0) countNeg++;
    if (q110 < 0) countNeg++;
    if (r110 < 0) countNeg++;
    if (s110 < 0) countNeg++;
    printf("Negative count: %d\n\n", countNeg);

    // 4.111
    int t111, u111, v111, w111;
    printf("Enter four numbers for 4.111: ");
    scanf("%d %d %d %d", &t111, &u111, &v111, &w111);
    int countEven = 0;
    if (t111 % 2 == 0) countEven++;
    if (u111 % 2 == 0) countEven++;
    if (v111 % 2 == 0) countEven++;
    if (w111 % 2 == 0) countEven++;
    printf("Even count: %d\n\n", countEven);

    // 4.112
    int x112, y112, z112;
    printf("Enter three numbers for 4.112: ");
    scanf("%d %d %d", &x112, &y112, &z112);
    int sumPos = 0;
    if (x112 > 0) sumPos += x112;
    if (y112 > 0) sumPos += y112;
    if (z112 > 0) sumPos += z112;
    printf("Sum of positive: %d\n\n", sumPos);

    // 4.113
    int aa113, bb113, cc113, dd113;
    printf("Enter four numbers for 4.113: ");
    scanf("%d %d %d %d", &aa113, &bb113, &cc113, &dd113);
    int sumGreater5 = 0;
    if (aa113 > 5) sumGreater5 += aa113;
    if (bb113 > 5) sumGreater5 += bb113;
    if (cc113 > 5) sumGreater5 += cc113;
    if (dd113 > 5) sumGreater5 += dd113;
    printf("Sum >5: %d\n\n", sumGreater5);

    // 4.114
    int ee114, ff114, gg114, hh114;
    printf("Enter four numbers for 4.114: ");
    scanf("%d %d %d %d", &ee114, &ff114, &gg114, &hh114);
    int sumMult3 = 0;
    if (ee114 % 3 == 0) sumMult3 += ee114;
    if (ff114 % 3 == 0) sumMult3 += ff114;
    if (gg114 % 3 == 0) sumMult3 += gg114;
    if (hh114 % 3 == 0) sumMult3 += hh114;
    printf("Sum divisible by 3: %d\n\n", sumMult3);

    // 4.115
    int ii115, jj115, kk115, ll115, mm115, nn115;
    printf("Enter six numbers for 4.115: ");
    scanf("%d %d %d %d %d %d", &ii115, &jj115, &kk115, &ll115, &mm115, &nn115);
    int sumPos2 = 0;
    if (ii115 > 0) sumPos2 += ii115;
    if (jj115 > 0) sumPos2 += jj115;
    if (kk115 > 0) sumPos2 += kk115;
    if (ll115 > 0) sumPos2 += ll115;
    if (mm115 > 0) sumPos2 += mm115;
    if (nn115 > 0) sumPos2 += nn115;
    printf("Sum of positive: %d\n\n", sumPos2);

    // 4.116
    double x116;
    printf("Enter x for 4.116: ");
    scanf("%lf", &x116);
    double y116;
    if (x116 < -1) y116 = -1 / x116;
    else if (x116 >= -1 && x116 <= 2) y116 = x116 * x116;
    else y116 = 4;
    printf("y = %.2lf\n\n", y116);

    // 4.117
    double a117;
    printf("Enter a for 4.117: ");
    scanf("%lf", &a117);
    double z117;
    if (a117 < -1) z117 = -1 / a117;
    else if (a117 >= -1 && a117 <= 2) z117 = a117 * a117;
    else z117 = 4;
    printf("z = %.2lf\n\n", z117);

    // 4.118
    double x118;
    printf("Enter x for 4.118: ");
    scanf("%lf", &x118);
    double fx118;
    if (x118 <= 0) fx118 = 0;
    else if (x118 > 0 && x118 <= 1) fx118 = x118 * x118 - x118;
    else fx118 = x118 * x118 - sin(M_PI * x118 * x118);
    printf("f(x) = %.6lf\n\n", fx118);

    // 4.119
    double y119;
    printf("Enter y for 4.119: ");
    scanf("%lf", &y119);
    double fy119;
    if (y119 <= 0.5) fy119 = sin(M_PI * y119);
    else fy119 = cos(M_PI * y119);
    printf("f(y) = %.6lf\n\n", fy119);

    // 4.120 а
    double x120a;
    printf("Enter x for 4.120a: ");
    scanf("%lf", &x120a);
    double y120a;
    if (x120a < 0) y120a = -x120a - 1;
    else if (x120a >= 0 && x120a <= 1) y120a = 0;
    else y120a = x120a - 1;
    printf("y = %.2lf\n\n", y120a);

    // 4.120 б
    double x120b;
    printf("Enter x for 4.120b: ");
    scanf("%lf", &x120b);
    double y120b;
    if (x120b < -1) y120b = -1;
    else if (x120b >= -1 && x120b <= 0) y120b = x120b;
    else if (x120b > 0 && x120b <= 1) y120b = -x120b;
    else y120b = x120b - 2;
    printf("y = %.2lf\n\n", y120b);

    // 4.120 в
    double x120c;
    printf("Enter x for 4.120c: ");
    scanf("%lf", &x120c);
    double y120c;
    if (x120c <= 0) y120c = -x120c;
    else if (x120c > 0 && x120c <= 1) y120c = x120c;
    else y120c = x120c * x120c;
    printf("y = %.2lf\n\n", y120c);

    // 4.121
    double x121;
    printf("Enter x for 4.121: ");
    scanf("%lf", &x121);
    if (x121 < 1) printf("Area I\n\n");
    else if (x121 >= 1 && x121 <= 5) printf("Area II\n\n");
    else printf("Area III\n\n");

    // 4.122
    double y122;
    printf("Enter y for 4.122: ");
    scanf("%lf", &y122);
    if (y122 < 2.5) printf("Area I\n\n");
    else if (y122 >= 2.5 && y122 <= 5.0) printf("Area II\n\n");
    else printf("Area III\n\n");

    // 4.123
    int points123;
    printf("Enter points (3, 1, or 0) for 4.123: ");
    scanf("%d", &points123);
    if (points123 == 3) printf("Win\n\n");
    else if (points123 == 1) printf("Draw\n\n");
    else printf("Lose\n\n");

    // 4.124
    int mitya124, vasya124;
    printf("Enter Mitya and Vasya ages for 4.124: ");
    scanf("%d %d", &mitya124, &vasya124);
    if (mitya124 > vasya124) printf("Mitya older\n\n");
    else if (vasya124 > mitya124) printf("Vasya older\n\n");
    else printf("Same age\n\n");

    // 4.125
    int weight125;
    printf("Enter boxer weight for 4.125: ");
    scanf("%d", &weight125);
    if (weight125 < 60) printf("Light weight\n\n");
    else if (weight125 < 64) printf("First welterweight\n\n");
    else if (weight125 < 69) printf("Welterweight\n\n");
    else printf("Above welterweight\n\n");

    // 4.126
    int a126, b126;
    printf("Enter a and b for 4.126: ");
    scanf("%d %d", &a126, &b126);
    if (a126 % b126 == 0) printf("a divides b\n\n");
    else if (b126 % a126 == 0) printf("b divides a\n\n");
    else printf("No division relation\n\n");

    // 4.127 а
    int a127, b127, c127;
    printf("Enter three numbers for 4.127a: ");
    scanf("%d %d %d", &a127, &b127, &c127);
    if (a127 > b127 && a127 > c127) printf("First is largest\n\n");
    else if (b127 > a127 && b127 > c127) printf("Second is largest\n\n");
    else printf("Third is largest\n\n");

    // 4.127 б
    if (a127 < b127 && a127 < c127) printf("First is smallest\n\n");
    else if (b127 < a127 && b127 < c127) printf("Second is smallest\n\n");
    else printf("Third is smallest\n\n");

    // 4.127 в
    if ((a127 > b127 && a127 < c127) || (a127 < b127 && a127 > c127)) 
        printf("First is middle\n\n");
    else if ((b127 > a127 && b127 < c127) || (b127 < a127 && b127 > c127)) 
        printf("Second is middle\n\n");
    else 
        printf("Third is middle\n\n");

    // 4.128
    int max128, min128;
    if (a127 > b127 && a127 > c127) max128 = a127;
    else if (b127 > a127 && b127 > c127) max128 = b127;
    else max128 = c127;
    
    if (a127 < b127 && a127 < c127) min128 = a127;
    else if (b127 < a127 && b127 < c127) min128 = b127;
    else min128 = c127;
    printf("Max: %d, Min: %d\n\n", max128, min128);

    // 4.129
    int sumTwoLargest;
    if (a127 >= b127 && a127 >= c127) {
        if (b127 >= c127) sumTwoLargest = a127 + b127;
        else sumTwoLargest = a127 + c127;
    } else if (b127 >= a127 && b127 >= c127) {
        if (a127 >= c127) sumTwoLargest = b127 + a127;
        else sumTwoLargest = b127 + c127;
    } else {
        if (a127 >= b127) sumTwoLargest = c127 + a127;
        else sumTwoLargest = c127 + b127;
    }
    printf("Sum of two largest: %d\n\n", sumTwoLargest);

    // 4.130
    int prodTwoSmallest;
    if (a127 <= b127 && a127 <= c127) {
        if (b127 <= c127) prodTwoSmallest = a127 * b127;
        else prodTwoSmallest = a127 * c127;
    } else if (b127 <= a127 && b127 <= c127) {
        if (a127 <= c127) prodTwoSmallest = b127 * a127;
        else prodTwoSmallest = b127 * c127;
    } else {
        if (a127 <= b127) prodTwoSmallest = c127 * a127;
        else prodTwoSmallest = c127 * b127;
    }
    printf("Product of two smallest: %d\n\n", prodTwoSmallest);

    // 4.131
    int t131, u131, v131, w131, x131, y131;
    printf("Enter six numbers for 4.131: ");
    scanf("%d %d %d %d %d %d", &t131, &u131, &v131, &w131, &x131, &y131);
    
    int middle1, middle2;
    if ((t131 > u131 && t131 < v131) || (t131 < u131 && t131 > v131)) middle1 = t131;
    else if ((u131 > t131 && u131 < v131) || (u131 < t131 && u131 > v131)) middle1 = u131;
    else middle1 = v131;
    
    if ((w131 > x131 && w131 < y131) || (w131 < x131 && w131 > y131)) middle2 = w131;
    else if ((x131 > w131 && x131 < y131) || (x131 < w131 && x131 > y131)) middle2 = x131;
    else middle2 = y131;
    
    double averageMiddle = (middle1 + middle2) / 2.0;
    printf("Average of middle values: %.2lf\n\n", averageMiddle);

    // 4.132
    double x132, y132;
    printf("Enter x and y for 4.132: ");
    scanf("%lf %lf", &x132, &y132);
    if (x132 > 0 && y132 > 0) printf("First quadrant\n\n");
    else if (x132 < 0 && y132 > 0) printf("Second quadrant\n\n");
    else if (x132 < 0 && y132 < 0) printf("Third quadrant\n\n");
    else printf("Fourth quadrant\n\n");

    // 4.133
    int dayNum133;
    printf("Enter day number (1-7) for 4.133: ");
    scanf("%d", &dayNum133);
    const char* dayName133;
    if (dayNum133 == 1) dayName133 = "Monday";
    else if (dayNum133 == 2) dayName133 = "Tuesday";
    else if (dayNum133 == 3) dayName133 = "Wednesday";
    else if (dayNum133 == 4) dayName133 = "Thursday";
    else if (dayNum133 == 5) dayName133 = "Friday";
    else if (dayNum133 == 6) dayName133 = "Saturday";
    else dayName133 = "Sunday";
    printf("Day: %s\n\n", dayName133);

    // 4.134
    int monthNum134;
    printf("Enter month number (1-12) for 4.134: ");
    scanf("%d", &monthNum134);
    const char* monthName134;
    if (monthNum134 == 1) monthName134 = "January";
    else if (monthNum134 == 2) monthName134 = "February";
    else if (monthNum134 == 3) monthName134 = "March";
    else if (monthNum134 == 4) monthName134 = "April";
    else if (monthNum134 == 5) monthName134 = "May";
    else if (monthNum134 == 6) monthName134 = "June";
    else if (monthNum134 == 7) monthName134 = "July";
    else if (monthNum134 == 8) monthName134 = "August";
    else if (monthNum134 == 9) monthName134 = "September";
    else if (monthNum134 == 10) monthName134 = "October";
    else if (monthNum134 == 11) monthName134 = "November";
    else monthName134 = "December";
    printf("Month: %s\n\n", monthName134);

    // 4.135
    int monthNum135;
    printf("Enter month number (1-12) for 4.135: ");
    scanf("%d", &monthNum135);
    const char* season135;
    if (monthNum135 == 12 || monthNum135 == 1 || monthNum135 == 2) season135 = "Winter";
    else if (monthNum135 >= 3 && monthNum135 <= 5) season135 = "Spring";
    else if (monthNum135 >= 6 && monthNum135 <= 8) season135 = "Summer";
    else season135 = "Autumn";
    printf("Season: %s\n\n", season135);

    // 4.136 а
    int monthNum136;
    printf("Enter month number (1-12) for 4.136a: ");
    scanf("%d", &monthNum136);
    int isLeap136;
    printf("Is leap year? (1 for yes, 0 for no): ");
    scanf("%d", &isLeap136);
    int daysInMonth136;
    if (monthNum136 == 1 || monthNum136 == 3 || monthNum136 == 5 || monthNum136 == 7 || 
        monthNum136 == 8 || monthNum136 == 10 || monthNum136 == 12) daysInMonth136 = 31;
    else if (monthNum136 == 4 || monthNum136 == 6 || monthNum136 == 9 || monthNum136 == 11) daysInMonth136 = 30;
    else daysInMonth136 = isLeap136 ? 29 : 28;
    printf("Days in month: %d\n\n", daysInMonth136);

    // 4.137
    int monthNum137;
    printf("Enter month number (1-12) for 4.137: ");
    scanf("%d", &monthNum137);
    int daysInMonth137;
    if (monthNum137 == 2) daysInMonth137 = 28;
    else if (monthNum137 == 4 || monthNum137 == 6 || monthNum137 == 9 || monthNum137 == 11) daysInMonth137 = 30;
    else daysInMonth137 = 31;
    printf("Days in month: %d\n\n", daysInMonth137);

    // 4.138
    int suitNum138;
    printf("Enter suit number (1-4) for 4.138: ");
    scanf("%d", &suitNum138);
    const char* suitName138;
    if (suitNum138 == 1) suitName138 = "Spades";
    else if (suitNum138 == 2) suitName138 = "Clubs";
    else if (suitNum138 == 3) suitName138 = "Diamonds";
    else suitName138 = "Hearts";
    printf("Suit: %s\n\n", suitName138);

    // 4.139
    int cardNum139;
    printf("Enter card number (6-14) for 4.139: ");
    scanf("%d", &cardNum139);
    const char* cardName139;
    if (cardNum139 == 6) cardName139 = "Six";
    else if (cardNum139 == 7) cardName139 = "Seven";
    else if (cardNum139 == 8) cardName139 = "Eight";
    else if (cardNum139 == 9) cardName139 = "Nine";
    else if (cardNum139 == 10) cardName139 = "Ten";
    else if (cardNum139 == 11) cardName139 = "Jack";
    else if (cardNum139 == 12) cardName139 = "Queen";
    else if (cardNum139 == 13) cardName139 = "King";
    else cardName139 = "Ace";
    printf("Card: %s\n\n", cardName139);

    // 4.140
    int suitNum140, cardNum140;
    printf("Enter suit (1-4) and card (6-14) for 4.140: ");
    scanf("%d %d", &suitNum140, &cardNum140);
    
    const char* cardName140;
    if (cardNum140 == 6) cardName140 = "Six";
    else if (cardNum140 == 7) cardName140 = "Seven";
    else if (cardNum140 == 8) cardName140 = "Eight";
    else if (cardNum140 == 9) cardName140 = "Nine";
    else if (cardNum140 == 10) cardName140 = "Ten";
    else if (cardNum140 == 11) cardName140 = "Jack";
    else if (cardNum140 == 12) cardName140 = "Queen";
    else if (cardNum140 == 13) cardName140 = "King";
    else cardName140 = "Ace";
    
    const char* suitName140;
    if (suitNum140 == 1) suitName140 = "Spades";
    else if (suitNum140 == 2) suitName140 = "Clubs";
    else if (suitNum140 == 3) suitName140 = "Diamonds";
    else suitName140 = "Hearts";
    
    printf("Card: %s of %s\n\n", cardName140, suitName140);

    // 4.141 а
    int kDay141;
    printf("Enter day number k for 4.141a: ");
    scanf("%d", &kDay141);
    int dow141 = (kDay141 - 1) % 7;
    const char* dayName141;
    if (dow141 == 0) dayName141 = "Monday";
    else if (dow141 == 1) dayName141 = "Tuesday";
    else if (dow141 == 2) dayName141 = "Wednesday";
    else if (dow141 == 3) dayName141 = "Thursday";
    else if (dow141 == 4) dayName141 = "Friday";
    else if (dow141 == 5) dayName141 = "Saturday";
    else dayName141 = "Sunday";
    printf("Day: %s\n\n", dayName141);

    // 4.141 б
    int dDay141;
    printf("Enter d for 4.141b: ");
    scanf("%d", &dDay141);
    int dow141b = (kDay141 - dDay141) % 7;
    if (dow141b < 0) dow141b += 7;
    const char* dayName141b;
    if (dow141b == 0) dayName141b = "Monday";
    else if (dow141b == 1) dayName141b = "Tuesday";
    else if (dow141b == 2) dayName141b = "Wednesday";
    else if (dow141b == 3) dayName141b = "Thursday";
    else if (dow141b == 4) dayName141b = "Friday";
    else if (dow141b == 5) dayName141b = "Saturday";
    else dayName141b = "Sunday";
    printf("Day: %s\n\n", dayName141b);

    // 4.142
    int nMonths142;
    printf("Enter n months for 4.142: ");
    scanf("%d", &nMonths142);
    int monthIndex = nMonths142 % 12;
    const char* monthName142;
    if (monthIndex == 0) monthName142 = "December";
    else if (monthIndex == 1) monthName142 = "January";
    else if (monthIndex == 2) monthName142 = "February";
    else if (monthIndex == 3) monthName142 = "March";
    else if (monthIndex == 4) monthName142 = "April";
    else if (monthIndex == 5) monthName142 = "May";
    else if (monthIndex == 6) monthName142 = "June";
    else if (monthIndex == 7) monthName142 = "July";
    else if (monthIndex == 8) monthName142 = "August";
    else if (monthIndex == 9) monthName142 = "September";
    else if (monthIndex == 10) monthName142 = "October";
    else monthName142 = "November";
    printf("Month: %s\n\n", monthName142);

    // 4.143 а
    int month143, day143;
    printf("Enter month and day for 4.143a: ");
    scanf("%d %d", &month143, &day143);
    int prev_day143, prev_month143;
    if (day143 > 1) {
        prev_day143 = day143 - 1;
        prev_month143 = month143;
    } else {
        prev_month143 = month143 - 1;
        if (prev_month143 == 1 || prev_month143 == 3 || prev_month143 == 5 || prev_month143 == 7 || 
            prev_month143 == 8 || prev_month143 == 10 || prev_month143 == 12) prev_day143 = 31;
        else if (prev_month143 == 4 || prev_month143 == 6 || prev_month143 == 9 || prev_month143 == 11) prev_day143 = 30;
        else prev_day143 = 28;
    }
    printf("Previous date: %d.%d\n\n", prev_day143, prev_month143);

    // 4.143 б
    int next_day143, next_month143;
    if (month143 == 1 || month143 == 3 || month143 == 5 || month143 == 7 || 
        month143 == 8 || month143 == 10 || month143 == 12) {
        if (day143 < 31) {
            next_day143 = day143 + 1;
            next_month143 = month143;
        } else {
            next_day143 = 1;
            next_month143 = month143 + 1;
        }
    } else if (month143 == 4 || month143 == 6 || month143 == 9 || month143 == 11) {
        if (day143 < 30) {
            next_day143 = day143 + 1;
            next_month143 = month143;
        } else {
            next_day143 = 1;
            next_month143 = month143 + 1;
        }
    } else {
        if (day143 < 28) {
            next_day143 = day143 + 1;
            next_month143 = month143;
        } else {
            next_day143 = 1;
            next_month143 = month143 + 1;
        }
    }
    printf("Next date: %d.%d\n\n", next_day143, next_month143);

    // 4.144 а (с учетом високосного года)
    int year144, month144, day144;
    printf("Enter year month day for 4.144a: ");
    scanf("%d %d %d", &year144, &month144, &day144);
    
    int prev_day144, prev_month144, prev_year144;
    if (day144 > 1) {
        prev_day144 = day144 - 1;
        prev_month144 = month144;
        prev_year144 = year144;
    } else {
        prev_month144 = month144 - 1;
        prev_year144 = year144;
        if (prev_month144 == 0) {
            prev_month144 = 12;
            prev_year144 = year144 - 1;
        }
        if (prev_month144 == 1 || prev_month144 == 3 || prev_month144 == 5 || prev_month144 == 7 || 
            prev_month144 == 8 || prev_month144 == 10 || prev_month144 == 12) prev_day144 = 31;
        else if (prev_month144 == 4 || prev_month144 == 6 || prev_month144 == 9 || prev_month144 == 11) prev_day144 = 30;
        else {
            int isLeapPrev = (prev_year144 % 4 == 0 && prev_year144 % 100 != 0) || prev_year144 % 400 == 0;
            prev_day144 = isLeapPrev ? 29 : 28;
        }
    }
    printf("Previous date: %d.%d.%d\n\n", prev_day144, prev_month144, prev_year144);

    // 4.144 б (с учетом високосного года)
    int next_day144, next_month144, next_year144;
    if (month144 == 1 || month144 == 3 || month144 == 5 || month144 == 7 || 
        month144 == 8 || month144 == 10 || month144 == 12) {
        if (day144 < 31) {
            next_day144 = day144 + 1;
            next_month144 = month144;
            next_year144 = year144;
        } else {
            next_day144 = 1;
            next_month144 = month144 + 1;
            next_year144 = year144;
            if (next_month144 > 12) {
                next_month144 = 1;
                next_year144 = year144 + 1;
            }
        }
    } else if (month144 == 4 || month144 == 6 || month144 == 9 || month144 == 11) {
        if (day144 < 30) {
            next_day144 = day144 + 1;
            next_month144 = month144;
            next_year144 = year144;
        } else {
            next_day144 = 1;
            next_month144 = month144 + 1;
            next_year144 = year144;
        }
    } else {
        int isLeapCurrent = (year144 % 4 == 0 && year144 % 100 != 0) || year144 % 400 == 0;
        if (day144 < (isLeapCurrent ? 29 : 28)) {
            next_day144 = day144 + 1;
            next_month144 = month144;
            next_year144 = year144;
        } else {
            next_day144 = 1;
            next_month144 = month144 + 1;
            next_year144 = year144;
        }
    }
    printf("Next date: %d.%d.%d\n\n", next_day144, next_month144, next_year144);

    // 4.145 (Китайский календарь)
    int year145;
    printf("Enter year for Chinese calendar (4.145): ");
    scanf("%d", &year145);
    
    int startYear = 1984;
    int animalCycle = (year145 - startYear) % 12;
    int colorCycle = ((year145 - startYear) / 2) % 5;
    
    const char* animal;
    switch (animalCycle) {
        case 0: animal = "Rat"; break;
        case 1: animal = "Ox"; break;
        case 2: animal = "Tiger"; break;
        case 3: animal = "Rabbit"; break;
        case 4: animal = "Dragon"; break;
        case 5: animal = "Snake"; break;
        case 6: animal = "Horse"; break;
        case 7: animal = "Goat"; break;
        case 8: animal = "Monkey"; break;
        case 9: animal = "Rooster"; break;
        case 10: animal = "Dog"; break;
        case 11: animal = "Pig"; break;
    }
    
    const char* color;
    switch (colorCycle) {
        case 0: color = "Green"; break;
        case 1: color = "Red"; break;
        case 2: color = "Yellow"; break;
        case 3: color = "White"; break;
        case 4: color = "Black"; break;
    }
    
    printf("Chinese zodiac: %s %s\n\n", color, animal);

    return 0;
}
