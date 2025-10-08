#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    // 4.41
    int n41;
    printf("Enter number for 4.41: ");
    scanf("%d", &n41);
    if (n41 >= 10 && n41 <= 99)
        printf("Two-digit\n\n");
    else
        printf("Not two-digit\n\n");

    // 4.42 а
    double x42a, y42a;
    printf("Enter x y for 4.42a: ");
    scanf("%lf %lf", &x42a, &y42a);
    if (x42a >= -2 && x42a <= 2 && y42a >= -2 && y42a <= 2)
        printf("Point in area I\n\n");
    else
        printf("Point not in area I\n\n");

    // 4.42 б
    double x42b, y42b;
    printf("Enter x y for 4.42b: ");
    scanf("%lf %lf", &x42b, &y42b);
    if (x42b >= -4 && x42b <= 0 && y42b <= 0)
        printf("Point in area I\n\n");
    else
        printf("Point not in area I\n\n");

    // 4.43
    double x43, y43;
    printf("Enter x y for 4.43: ");
    scanf("%lf %lf", &x43, &y43);
    if (x43 >= 0 && x43 <= 3 && y43 >= 0 && y43 <= 2)
        printf("Point in area I\n\n");
    else
        printf("Point not in area I\n\n");

    // 4.44
    double x44, y44;
    printf("Enter x y for 4.44: ");
    scanf("%lf %lf", &x44, &y44);
    if ((x44 < -1 && y44 > 0) || (x44 > 5 && y44 > 0))
        printf("Point in area I or III\n\n");
    else
        printf("Point not in area I or III\n\n");

    // 4.45
    double x45;
    printf("Enter x for 4.45: ");
    scanf("%lf", &x45);
    double fx45;
    if (x45 <= 0)
        fx45 = 0;
    else if (x45 > 0 && x45 <= 1)
        fx45 = x45 * x45 - x45;
    else
        fx45 = x45 * x45 - sin(M_PI * x45 * x45);
    printf("f(x) = %.6lf\n\n", fx45);

    // 4.46
    double x46;
    printf("Enter x for 4.46: ");
    scanf("%lf", &x46);
    double fx46;
    if (x46 <= 0.5)
        fx46 = sin(M_PI * x46);
    else
        fx46 = cos(M_PI * x46);
    printf("f(x) = %.6lf\n\n", fx46);

    // 4.47 а
    double a47a, b47a, c47a;
    printf("Enter a b c for 4.47a: ");
    scanf("%lf %lf %lf", &a47a, &b47a, &c47a);
    if (a47a < b47a && b47a < c47a)
        printf("a < b < c holds\n\n");
    else
        printf("a < b < c does NOT hold\n\n");

    // 4.47 б
    if (b47a > a47a && a47a > c47a)
        printf("b > a > c holds\n\n");
    else
        printf("b > a > c does NOT hold\n\n");

    // 4.48
    int num1, num2;
    printf("Enter two numbers for 4.48: ");
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0 || num2 % num1 == 0)
        printf("One divides the other\n\n");
    else
        printf("No division relation\n\n");

    // 4.49 а
    int td49;
    printf("Enter two-digit number for 4.49a: ");
    scanf("%d", &td49);
    int d49_1 = td49 / 10;
    int d49_2 = td49 % 10;
    if (d49_1 == 3 || d49_2 == 3)
        printf("Contains digit 3\n\n");
    else
        printf("Does NOT contain digit 3\n\n");

    // 4.49 б
    int a49;
    printf("Enter digit a for 4.49b: ");
    scanf("%d", &a49);
    if (d49_1 == a49 || d49_2 == a49)
        printf("Contains digit a\n\n");
    else
        printf("Does NOT contain digit a\n\n");

    // 4.50 а
    if (d49_1 == 4 || d49_2 == 4 || d49_1 == 7 || d49_2 == 7)
        printf("Contains 4 or 7\n\n");
    else
        printf("Does NOT contain 4 or 7\n\n");

    // 4.50 б
    if (d49_1 == 3 || d49_2 == 3 || d49_1 == 6 || d49_2 == 6 || d49_1 == 9 || d49_2 == 9)
        printf("Contains 3, 6 or 9\n\n");
    else
        printf("Does NOT contain 3, 6 or 9\n\n");

    // 4.51 а
    int thd51;
    printf("Enter three-digit number for 4.51a: ");
    scanf("%d", &thd51);
    int d51_1 = thd51 / 100;
    int d51_2 = (thd51 % 100) / 10;
    int d51_3 = thd51 % 10;
    if (d51_1 == 6 || d51_2 == 6 || d51_3 == 6)
        printf("Contains digit 6\n\n");
    else
        printf("Does NOT contain digit 6\n\n");

    // 4.51 б
    int n51;
    printf("Enter digit n for 4.51b: ");
    scanf("%d", &n51);
    if (d51_1 == n51 || d51_2 == n51 || d51_3 == n51)
        printf("Contains digit n\n\n");
    else
        printf("Does NOT contain digit n\n\n");

    // 4.52 а
    int fdgt52;
    printf("Enter four-digit number for 4.52a: ");
    scanf("%d", &fdgt52);
    int d52_1 = fdgt52 / 1000;
    int d52_2 = (fdgt52 % 1000) / 100;
    int d52_3 = (fdgt52 % 100) / 10;
    int d52_4 = fdgt52 % 10;
    if (d52_1 == 4 || d52_2 == 4 || d52_3 == 4 || d52_4 == 4)
        printf("Contains digit 4\n\n");
    else
        printf("Does NOT contain digit 4\n\n");

    // 4.52 б
    int b52;
    printf("Enter digit b for 4.52b: ");
    scanf("%d", &b52);
    if (d52_1 == b52 || d52_2 == b52 || d52_3 == b52 || d52_4 == b52)
        printf("Contains digit b\n\n");
    else
        printf("Does NOT contain digit b\n\n");

    // 4.53 а
    if (d52_1 == 2 || d52_2 == 2 || d52_3 == 2 || d52_4 == 2 || 
        d52_1 == 7 || d52_2 == 7 || d52_3 == 7 || d52_4 == 7)
        printf("Contains 2 or 7\n\n");
    else
        printf("Does NOT contain 2 or 7\n\n");

    // 4.53 б
    if (d52_1 == 3 || d52_2 == 3 || d52_3 == 3 || d52_4 == 3 ||
        d52_1 == 6 || d52_2 == 6 || d52_3 == 6 || d52_4 == 6 ||
        d52_1 == 9 || d52_2 == 9 || d52_3 == 9 || d52_4 == 9)
        printf("Contains 3, 6 or 9\n\n");
    else
        printf("Does NOT contain 3, 6 or 9\n\n");

    // 4.56
    int fdgt56;
    printf("Enter four-digit number for 4.56: ");
    scanf("%d", &fdgt56);
    int d56_1 = fdgt56 / 1000;
    int d56_2 = (fdgt56 % 1000) / 100;
    int d56_3 = (fdgt56 % 100) / 10;
    int d56_4 = fdgt56 % 10;
    if (d56_1 == d56_4 && d56_2 == d56_3)
        printf("Symmetric\n\n");
    else
        printf("NOT symmetric\n\n");

    // 4.57
    int a57, b57, c57, d57;
    printf("Enter a b c d for 4.57: ");
    scanf("%d %d %d %d", &a57, &b57, &c57, &d57);
    int rem = a57 % b57;
    if (rem == c57 || rem == d57)
        printf("Remainder equals c or d\n\n");
    else
        printf("Remainder does NOT equal c or d\n\n");

    // 4.58
    double a58, b58, c58;
    printf("Enter a b c for 4.58: ");
    scanf("%lf %lf %lf", &a58, &b58, &c58);
    if (a58 == b58 || a58 == c58 || b58 == c58)
        printf("At least one pair equal\n\n");
    else
        printf("No equal numbers\n\n");

    // 4.59 а
    double s1, s2, s3;
    printf("Enter triangle sides for 4.59a: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);
    if (s1 == s2 && s2 == s3)
        printf("Equilateral\n\n");
    else
        printf("NOT equilateral\n\n");

    // 4.59 б
    if (s1 == s2 || s1 == s3 || s2 == s3)
        printf("Isosceles\n\n");
    else
        printf("NOT isosceles\n\n");

    // 4.60
    int h1, h2, h3;
    printf("Enter three heights for 4.60: ");
    scanf("%d %d %d", &h1, &h2, &h3);
    if (h1 == h2 && h2 == h3)
        printf("All heights equal\n\n");
    else
        printf("Heights differ\n\n");

    // 4.61
    double a61, b61, c61;
    printf("Enter a b c for quadratic equation 4.61: ");
    scanf("%lf %lf %lf", &a61, &b61, &c61);
    double disc = b61 * b61 - 4 * a61 * c61;
    if (disc > 0) {
        double x1 = (-b61 + sqrt(disc)) / (2 * a61);
        double x2 = (-b61 - sqrt(disc)) / (2 * a61);
        printf("Two roots: %.6lf, %.6lf\n\n", x1, x2);
    } else if (disc == 0) {
        double x = -b61 / (2 * a61);
        printf("One root: %.6lf\n\n", x);
    } else {
        printf("No real roots\n\n");
    }

    // 4.62
    double a62, b62, c62, d62;
    printf("Enter a b c d for 4.62: ");
    scanf("%lf %lf %lf %lf", &a62, &b62, &c62, &d62);
    if ((a62 <= c62 && b62 <= d62) || (a62 <= d62 && b62 <= c62))
        printf("Rectangle fits\n\n");
    else
        printf("Rectangle does NOT fit\n\n");

    // 4.63
    double env_a, env_b, card_c, card_d;
    printf("Enter envelope a b for 4.63: ");
    scanf("%lf %lf", &env_a, &env_b);
    printf("Enter card c d for 4.63: ");
    scanf("%lf %lf", &card_c, &card_d);
    if (card_c + 2 <= env_a && card_d + 2 <= env_b)
        printf("Card fits in envelope\n\n");
    else
        printf("Card does NOT fit\n\n");

    // 4.64
    double win_a, win_b, head;
    printf("Enter window a b for 4.64: ");
    scanf("%lf %lf", &win_a, &win_b);
    printf("Enter head diameter for 4.64: ");
    scanf("%lf", &head);
    if (head + 2 <= win_a && head + 2 <= win_b)
        printf("Head passes through\n\n");
    else
        printf("Head does NOT pass\n\n");

    // 4.65
    double br_a, br_b, br_c, hole_x, hole_y;
    printf("Enter brick dimensions a b c for 4.65: ");
    scanf("%lf %lf %lf", &br_a, &br_b, &br_c);
    printf("Enter hole x y for 4.65: ");
    scanf("%lf %lf", &hole_x, &hole_y);
    if ((br_a <= hole_x && br_b <= hole_y) ||
        (br_a <= hole_y && br_b <= hole_x) ||
        (br_a <= hole_x && br_c <= hole_y) ||
        (br_a <= hole_y && br_c <= hole_x) ||
        (br_b <= hole_x && br_c <= hole_y) ||
        (br_b <= hole_y && br_c <= hole_x))
        printf("Brick passes\n\n");
    else
        printf("Brick does NOT pass\n\n");

    // 4.66
    double suit_a, suit_b, suit_c, box_a, box_b, box_c;
    printf("Enter suitcase dimensions for 4.66: ");
    scanf("%lf %lf %lf", &suit_a, &suit_b, &suit_c);
    printf("Enter box dimensions for 4.66: ");
    scanf("%lf %lf %lf", &box_a, &box_b, &box_c);
    if ((box_a <= suit_a && box_b <= suit_b && box_c <= suit_c) ||
        (box_a <= suit_a && box_b <= suit_c && box_c <= suit_b) ||
        (box_a <= suit_b && box_b <= suit_a && box_c <= suit_c) ||
        (box_a <= suit_b && box_b <= suit_c && box_c <= suit_a) ||
        (box_a <= suit_c && box_b <= suit_a && box_c <= suit_b) ||
        (box_a <= suit_c && box_b <= suit_b && box_c <= suit_a))
        printf("Box fits in suitcase\n\n");
    else
        printf("Box does NOT fit\n\n");

    // 4.67
    int sixd;
    printf("Enter six-digit number for 4.67: ");
    scanf("%d", &sixd);
    int first3 = sixd / 1000;
    int last3 = sixd % 1000;
    int sumf = first3 / 100 + (first3 % 100) / 10 + first3 % 10;
    int suml = last3 / 100 + (last3 % 100) / 10 + last3 % 10;
    if (sumf == suml)
        printf("Lucky number\n\n");
    else
        printf("NOT lucky\n\n");

    // 4.68
    int year;
    printf("Enter year for 4.68: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap year\n\n");
    else
        printf("NOT leap year\n\n");

    // 4.70
    int kday;
    printf("Enter day number k for 4.70: ");
    scanf("%d", &kday);
    int dow = (kday - 1) % 7;
    if (dow == 5 || dow == 6)
        printf("Weekend\n\n");
    else
        printf("Workday\n\n");

    // 4.71
    double alpha, v0, R71, H71, P71;
    printf("Enter alpha v0 R H P for 4.71: ");
    scanf("%lf %lf %lf %lf %lf", &alpha, &v0, &R71, &H71, &P71);
    double g = 9.8;
    double t_flight = R71 / (v0 * cos(alpha));
    double y_flight = v0 * sin(alpha) * t_flight - g * t_flight * t_flight / 2;
    if (y_flight >= H71 && y_flight <= H71 + P71)
        printf("Target hit\n\n");
    else
        printf("Target missed\n\n");

    // 4.72 а
    double r1x, r1y, r1w, r1h, r2x, r2y, r2w, r2h;
    printf("Enter rect1 x y w h for 4.72a: ");
    scanf("%lf %lf %lf %lf", &r1x, &r1y, &r1w, &r1h);
    printf("Enter rect2 x y w h for 4.72a: ");
    scanf("%lf %lf %lf %lf", &r2x, &r2y, &r2w, &r2h);
    if (r1x >= r2x && r1x + r1w <= r2x + r2w && r1y >= r2y && r1y + r1h <= r2y + r2h)
        printf("All points of rect1 inside rect2\n\n");
    else
        printf("NOT all points inside\n\n");

    // 4.72 б
    if ((r1x >= r2x && r1x + r1w <= r2x + r2w && r1y >= r2y && r1y + r1h <= r2y + r2h) ||
        (r2x >= r1x && r2x + r2w <= r1x + r1w && r2y >= r1y && r2y + r2h <= r1y + r1h))
        printf("One rectangle inside the other\n\n");
    else
        printf("No rectangle fully inside another\n\n");

    // 4.72 в
    if (r1x < r2x + r2w && r1x + r1w > r2x && r1y < r2y + r2h && r1y + r1h > r2y)
        printf("Rectangles intersect\n\n");
    else
        printf("Rectangles do NOT intersect\n\n");

    // 4.73
    int a2, a1, b73;
    printf("Enter a2 a1 b for 4.73: ");
    scanf("%d %d %d", &a2, &a1, &b73);
    int diff73 = a1 - b73;
    int res_u73, res_t73;
    if (diff73 < 0) {
        res_u73 = 10 + diff73;
        res_t73 = a2 - 1;
    } else {
        res_u73 = diff73;
        res_t73 = a2;
    }
    printf("Result: tens=%d, units=%d\n\n", res_t73, res_u73);

    // 4.74
    int a22, a12, b22, b12;
    printf("Enter a22 a12 b22 b12 for 4.74: ");
    scanf("%d %d %d %d", &a22, &a12, &b22, &b12);
    int diff74 = a12 - b12;
    int carry74 = 0;
    if (diff74 < 0) {
        diff74 += 10;
        carry74 = 1;
    }
    int diff_tens = a22 - b22 - carry74;
    printf("Result: tens=%d, units=%d\n\n", diff_tens, diff74);

    // 4.75
    int a3, a23, a13, b23, b13;
    printf("Enter a3 a23 a13 b23 b13 for 4.75: ");
    scanf("%d %d %d %d %d", &a3, &a23, &a13, &b23, &b13);
    int sum75 = a13 + b13;
    int res_u75 = sum75 % 10;
    int carry75 = sum75 / 10;
    int sum2 = a23 + b23 + carry75;
    int res_t75 = sum2 % 10;
    int res_h75 = a3 + sum2 / 10;
    printf("Result: hundreds=%d, tens=%d, units=%d\n\n", res_h75, res_t75, res_u75);

    // 4.76 а
    int a76, b76, c76, d76;
    printf("Enter a b c d for chess (4.76a): ");
    scanf("%d %d %d %d", &a76, &b76, &c76, &d76);
    if (a76 == c76 || b76 == d76)
        printf("Rook threatens\n\n");
    else
        printf("Rook does NOT threaten\n\n");

    // 4.76 б
    if (abs(a76 - c76) == abs(b76 - d76))
        printf("Bishop threatens\n\n");
    else
        printf("Bishop does NOT threaten\n\n");

    // 4.76 в
    if (abs(a76 - c76) <= 1 && abs(b76 - d76) <= 1)
        printf("King can move\n\n");
    else
        printf("King cannot move\n\n");

    // 4.76 г
    if (a76 == c76 || b76 == d76 || abs(a76 - c76) == abs(b76 - d76))
        printf("Queen threatens\n\n");
    else
        printf("Queen does NOT threaten\n\n");

    // 4.76 д
    if (a76 == c76 && d76 - b76 == 1)
        printf("White pawn can move forward\n\n");
    else if (abs(a76 - c76) == 1 && d76 - b76 == 1)
        printf("White pawn can capture\n\n");
    else
        printf("White pawn cannot move\n\n");

    // 4.76 е
    if (a76 == c76 && b76 - d76 == 1)
        printf("Black pawn can move forward\n\n");
    else if (abs(a76 - c76) == 1 && b76 - d76 == 1)
        printf("Black pawn can capture\n\n");
    else
        printf("Black pawn cannot move\n\n");

    // 4.76 ж
    if ((abs(a76 - c76) == 2 && abs(b76 - d76) == 1) || (abs(a76 - c76) == 1 && abs(b76 - d76) == 2))
        printf("Knight threatens\n\n");
    else
        printf("Knight does NOT threaten\n\n");

    // 4.78
    if ((a76 + b76) % 2 == (c76 + d76) % 2)
        printf("Same color\n\n");
    else
        printf("Different colors\n\n");

    // 4.79
    double s79a, s79b, s79c;
    printf("Enter triangle sides for 4.79: ");
    scanf("%lf %lf %lf", &s79a, &s79b, &s79c);
    if (s79a + s79b > s79c && s79a + s79c > s79b && s79b + s79c > s79a)
        printf("Triangle exists\n\n");
    else
        printf("Triangle does NOT exist\n\n");

    // 4.80
    if (s79a * s79a + s79b * s79b == s79c * s79c ||
        s79a * s79a + s79c * s79c == s79b * s79b ||
        s79b * s79b + s79c * s79c == s79a * s79a)
        printf("Right triangle\n\n");
    else
        printf("NOT right triangle\n\n");

    // 4.81 а
    double maxs = fmax(s79a, fmax(s79b, s79c));
    double sumsq;
    if (maxs == s79a)
        sumsq = s79b * s79b + s79c * s79c;
    else if (maxs == s79b)
        sumsq = s79a * s79a + s79c * s79c;
    else
        sumsq = s79a * s79a + s79b * s79b;
    double maxsq = maxs * maxs;
    if (maxsq == sumsq)
        printf("Right triangle\n\n");
    else if (maxsq < sumsq)
        printf("Acute triangle\n\n");
    else
        printf("Obtuse triangle\n\n");

    // 4.81 б
    const char* type81 = "";
    if (s79a == s79b && s79b == s79c)
        type81 = "equilateral ";
    else if (s79a == s79b || s79a == s79c || s79b == s79c)
        type81 = "isosceles ";
    else
        type81 = "scalene ";
    if (maxsq == sumsq)
        printf("Right %striangle\n\n", type81);
    else if (maxsq < sumsq)
        printf("Acute %striangle\n\n", type81);
    else
        printf("Obtuse %striangle\n\n", type81);

    // 4.82
    int age;
    printf("Enter age for 4.82: ");
    scanf("%d", &age);
    const char* word;
    if (age % 10 == 1 && age % 100 != 11)
        word = "god";
    else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20))
        word = "goda";
    else
        word = "let";
    printf("mne %d %s\n\n", age, word);

    // 4.83
    int mush;
    printf("Enter mushroom count for 4.83: ");
    scanf("%d", &mush);
    const char* mush_word;
    if (mush % 10 == 1 && mush % 100 != 11)
        mush_word = "grib";
    else if (mush % 10 >= 2 && mush % 10 <= 4 && (mush % 100 < 10 || mush % 100 >= 20))
        mush_word = "griba";
    else
        mush_word = "gribov";
    printf("my naschli %d %s v lesu\n\n", mush, mush_word);

    // 4.84
    int price;
    printf("Enter price in kopecks for 4.84: ");
    scanf("%d", &price);
    int rub = price / 100;
    int kop = price % 100;
    const char* rub_word;
    const char* kop_word;
    if (rub % 10 == 1 && rub % 100 != 11)
        rub_word = "rubl";
    else if (rub % 10 >= 2 && rub % 10 <= 4 && (rub % 100 < 10 || rub % 100 >= 20))
        rub_word = "rublya";
    else
        rub_word = "rubley";
    if (kop % 10 == 1 && kop % 100 != 11)
        kop_word = "kopeika";
    else if (kop % 10 >= 2 && kop % 10 <= 4 && (kop % 100 < 10 || kop % 100 >= 20))
        kop_word = "kopeiki";
    else
        kop_word = "kopeek";
    printf("%d %s %d %s\n\n", rub, rub_word, kop, kop_word);

    // 4.85
    int months85;
    printf("Enter age in months for 4.85: ");
    scanf("%d", &months85);
    int years85 = months85 / 12;
    int months85r = months85 % 12;
    const char* year_word;
    const char* month_word;
    if (years85 % 10 == 1 && years85 % 100 != 11)
        year_word = "god";
    else if (years85 % 10 >= 2 && years85 % 10 <= 4 && (years85 % 100 < 10 || years85 % 100 >= 20))
        year_word = "goda";
    else
        year_word = "let";
    if (months85r == 1)
        month_word = "mesyats";
    else if (months85r >= 2 && months85r <= 4)
        month_word = "mesyatsa";
    else
        month_word = "mesyatsev";
    printf("%d %s %d %s\n\n", years85, year_word, months85r, month_word);

    // 4.86
    int byear, bmonth, bday, cyear, cmonth, cday;
    printf("Enter birth year month day for 4.86: ");
    scanf("%d %d %d", &byear, &bmonth, &bday);
    printf("Enter current year month day for 4.86: ");
    scanf("%d %d %d", &cyear, &cmonth, &cday);
    int age_years;
    if (cmonth > bmonth || (cmonth == bmonth && cday >= bday))
        age_years = cyear - byear;
    else
        age_years = cyear - byear - 1;
    printf("Age: %d years\n\n", age_years);

    // 4.87
    int byear1, bmonth1, bday1, byear2, bmonth2, bday2;
    printf("Enter first person birth year month day for 4.87: ");
    scanf("%d %d %d", &byear1, &bmonth1, &bday1);
    printf("Enter second person birth year month day for 4.87: ");
    scanf("%d %d %d", &byear2, &bmonth2, &bday2);
    if (byear1 < byear2 || (byear1 == byear2 && (bmonth1 < bmonth2 || (bmonth1 == bmonth2 && bday1 < bday2))))
        printf("First person older\n\n");
    else if (byear1 > byear2 || (byear1 == byear2 && (bmonth1 > bmonth2 || (bmonth1 == bmonth2 && bday1 > bday2))))
        printf("Second person older\n\n");
    else
        printf("Same age\n\n");

    // 4.88
    int age_years88, age_months88;
    if (cmonth >= bmonth) {
        age_years88 = cyear - byear;
        age_months88 = cmonth - bmonth;
    } else {
        age_years88 = cyear - byear - 1;
        age_months88 = 12 - bmonth + cmonth;
    }
    printf("Age: %d years %d months\n\n", age_years88, age_months88);

    // 4.89
    int ah, am, dh, dm, ph, pm;
    printf("Enter arrival hour minute for 4.89: ");
    scanf("%d %d", &ah, &am);
    printf("Enter departure hour minute for 4.89: ");
    scanf("%d %d", &dh, &dm);
    printf("Enter passenger hour minute for 4.89: ");
    scanf("%d %d", &ph, &pm);
    int atime = ah * 60 + am;
    int dtime = dh * 60 + dm;
    int ptime = ph * 60 + pm;
    if (ptime >= atime && ptime <= dtime)
        printf("Train at platform\n\n");
    else
        printf("Train NOT at platform\n\n");

    // 4.90 а
    int month90, day90;
    printf("Enter month day for 4.90a: ");
    scanf("%d %d", &month90, &day90);
    int prev_day, prev_month;
    if (day90 > 1) {
        prev_day = day90 - 1;
        prev_month = month90;
    } else {
        prev_month = month90 - 1;
        if (prev_month == 1 || prev_month == 3 || prev_month == 5 || prev_month == 7 || 
            prev_month == 8 || prev_month == 10 || prev_month == 12)
            prev_day = 31;
        else if (prev_month == 4 || prev_month == 6 || prev_month == 9 || prev_month == 11)
            prev_day = 30;
        else
            prev_day = 28;
    }
    printf("Previous day: %d.%d\n\n", prev_day, prev_month);

    // 4.90 б
    int next_day, next_month;
    if (month90 == 1 || month90 == 3 || month90 == 5 || month90 == 7 || 
        month90 == 8 || month90 == 10 || month90 == 12) {
        if (day90 < 31) {
            next_day = day90 + 1;
            next_month = month90;
        } else {
            next_day = 1;
            next_month = month90 + 1;
        }
    } else if (month90 == 4 || month90 == 6 || month90 == 9 || month90 == 11) {
        if (day90 < 30) {
            next_day = day90 + 1;
            next_month = month90;
        } else {
            next_day = 1;
            next_month = month90 + 1;
        }
    } else {
        if (day90 < 28) {
            next_day = day90 + 1;
            next_month = month90;
        } else {
            next_day = 1;
            next_month = month90 + 1;
        }
    }
    printf("Next day: %d.%d\n\n", next_day, next_month);

    return 0;
}
