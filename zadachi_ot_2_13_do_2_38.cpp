#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    // 2.13
    double a13, b13;
    printf("Enter a for 2.13: ");
    scanf("%lf", &a13);
    printf("Enter b for 2.13: ");
    scanf("%lf", &b13);
    
    if (a13 == 0) {
        printf("No solution\n\n");
    } else {
        printf("x = %lf\n\n", -b13 / a13);
    }
    
    // 2.14
    double a14, b14;
    printf("Enter a for 2.14: ");
    scanf("%lf", &a14);
    printf("Enter b for 2.14: ");
    scanf("%lf", &b14);
    printf("Hypotenuse = %lf\n\n", sqrt(a14*a14 + b14*b14));
    
    // 2.15
    double R_outer, R_inner;
    printf("Enter outer radius for 2.15: ");
    scanf("%lf", &R_outer);
    printf("Enter inner radius for 2.15: ");
    scanf("%lf", &R_inner);
    
    if (R_outer < R_inner) {
        double temp = R_outer;
        R_outer = R_inner;
        R_inner = temp;
    }
    printf("Ring area = %lf\n\n", M_PI*R_outer*R_outer - M_PI*R_inner*R_inner);
    
    // 2.16
    double a16, b16;
    printf("Enter leg a for 2.16: ");
    scanf("%lf", &a16);
    printf("Enter leg b for 2.16: ");
    scanf("%lf", &b16);
    printf("Perimeter = %lf\n\n", a16 + b16 + sqrt(a16*a16 + b16*b16));
    
    // 2.17
    double base1, base2, height;
    printf("Enter base 1 for 2.17: ");
    scanf("%lf", &base1);
    printf("Enter base 2 for 2.17: ");
    scanf("%lf", &base2);
    printf("Enter height for 2.17: ");
    scanf("%lf", &height);
    
    double c17;
    if (base1 > base2) {
        c17 = (base1 - base2) / 2;
    } else {
        c17 = (base2 - base1) / 2;
    }
    double side = sqrt(height*height + c17*c17);
    printf("Trapezoid perimeter = %lf\n\n", side*2 + base1 + base2);
    
    // 2.18
    double x18, y18;
    printf("Enter x for 2.18: ");
    scanf("%lf", &x18);
    printf("Enter y for 2.18: ");
    scanf("%lf", &y18);
    printf("z = %lf\n", (x18 + (2 + y18)/(x18*x18)) / (y18 + 1/sqrt(x18*x18 + 10)));
    printf("q = %lf\n\n", 7.25*sin(x18) - fabs(y18));
    
    // 2.19
    double a19, b19;
    printf("Enter a for 2.19: ");
    scanf("%lf", &a19);
    printf("Enter b for 2.19: ");
    scanf("%lf", &b19);
    printf("X = %lf\n", (2/(a19*a19 + 25) + b19) / (sqrt(b19) + (a19 + b19)/2));
    printf("Y = %lf\n\n", (fabs(a19) + 2*sin(b19)) / (5.5*a19));
    
    // 2.20
    double e20, f20, g20, h20;
    printf("Enter e for 2.20: ");
    scanf("%lf", &e20);
    printf("Enter f for 2.20: ");
    scanf("%lf", &f20);
    printf("Enter g for 2.20: ");
    scanf("%lf", &g20);
    printf("Enter h for 2.20: ");
    scanf("%lf", &h20);
    printf("A = %lf\n", sqrt(pow(fabs(e20 - 3/f20), 3) + g20));
    printf("B = %lf\n", sin(e20) + pow(cos(h20), 2));
    printf("C = %lf\n\n", 33*g20/(e20*f20 - 3));
    
    // 2.21
    double e21, f21, g21, h21;
    printf("Enter e for 2.21: ");
    scanf("%lf", &e21);
    printf("Enter f for 2.21: ");
    scanf("%lf", &f21);
    printf("Enter g for 2.21: ");
    scanf("%lf", &g21);
    printf("Enter h for 2.21: ");
    scanf("%lf", &h21);
    printf("A = %lf\n", (e21 + f21/2)/3);
    printf("B = %lf\n", fabs(h21*h21 - g21));
    printf("C = %lf\n\n", sqrt(pow(g21 - h21, 2) - 3*sin(e21)));
    
    // 2.22
    double a22, b22;
    printf("Enter a for 2.22: ");
    scanf("%lf", &a22);
    printf("Enter b for 2.22: ");
    scanf("%lf", &b22);
    printf("Arithmetic mean = %lf\n", (fabs(a22) + fabs(b22))/2);
    printf("Geometric mean = %lf\n\n", sqrt(fabs(a22)*fabs(b22)));
    
    // 2.23
    double a23, b23;
    printf("Enter side a for 2.23: ");
    scanf("%lf", &a23);
    printf("Enter side b for 2.23: ");
    scanf("%lf", &b23);
    printf("Perimeter = %lf\n", 2*a23 + 2*b23);
    printf("Diagonal = %lf\n\n", sqrt(a23*a23 + b23*b23));
    
    // 2.24
    double a24, b24;
    printf("Enter a for 2.24: ");
    scanf("%lf", &a24);
    printf("Enter b for 2.24: ");
    scanf("%lf", &b24);
    printf("Sum = %lf\n", a24 + b24);
    printf("Difference = %lf\n", a24 - b24);
    printf("Product = %lf\n", a24 * b24);
    printf("Quotient = %lf\n\n", a24 / b24);
    
    // 2.25
    double a25, b25, c25;
    printf("Enter a for 2.25: ");
    scanf("%lf", &a25);
    printf("Enter b for 2.25: ");
    scanf("%lf", &b25);
    printf("Enter c for 2.25: ");
    scanf("%lf", &c25);
    printf("Volume = %lf\n", a25*b25*c25);
    printf("Area of face ab = %lf\n", a25*b25);
    printf("Area of face bc = %lf\n", b25*c25);
    printf("Area of face ac = %lf\n\n", a25*c25);
    
    // 2.26
    double x1_26, y1_26, x2_26, y2_26;
    printf("Enter x1 for 2.26: ");
    scanf("%lf", &x1_26);
    printf("Enter y1 for 2.26: ");
    scanf("%lf", &y1_26);
    printf("Enter x2 for 2.26: ");
    scanf("%lf", &x2_26);
    printf("Enter y2 for 2.26: ");
    scanf("%lf", &y2_26);
    printf("Distance = %lf\n\n", sqrt(pow(x1_26 - x2_26, 2) + pow(y1_26 - y2_26, 2)));
    
    // 2.27
    printf("See problem 2.17\n\n");
    
    // 2.28
    double base1_28, base2_28, angle28;
    printf("Enter base 1 for 2.28: ");
    scanf("%lf", &base1_28);
    printf("Enter base 2 for 2.28: ");
    scanf("%lf", &base2_28);
    printf("Enter angle for 2.28: ");
    scanf("%lf", &angle28);
    
    if (base1_28 > base2_28) {
        double temp = base1_28;
        base1_28 = base2_28;
        base2_28 = temp;
    }
    while (angle28 > 360) {
        angle28 -= 360;
    }
    angle28 = angle28 * M_PI / 180;
    printf("Trapezoid area = %lf\n\n", 0.5*(base2_28*base2_28 - base1_28*base1_28)*tan(angle28));
    
    // 2.31
    double price_candy, price_cookies, price_apples;
    printf("Enter price of candy per kg: ");
    scanf("%lf", &price_candy);
    printf("Enter price of cookies per kg: ");
    scanf("%lf", &price_cookies);
    printf("Enter price of apples per kg: ");
    scanf("%lf", &price_apples);
    
    double kg_candy, kg_cookies, kg_apples;
    printf("Enter kg of candy: ");
    scanf("%lf", &kg_candy);
    printf("Enter kg of cookies: ");
    scanf("%lf", &kg_cookies);
    printf("Enter kg of apples: ");
    scanf("%lf", &kg_apples);
    printf("Total cost = %lf\n\n", kg_candy*price_candy + kg_cookies*price_cookies + kg_apples*price_apples);
    
    // 2.32
    int number32;
    printf("Enter number of computer sets for 2.32: ");
    scanf("%d", &number32);
    int monitor = 2;
    int system_unit = 4;
    int keyboard = 3;
    int mouse = 1;
    printf("Cost of %d sets = %d\n\n", number32, (monitor + system_unit + keyboard + mouse) * number32);
    
    // 2.33
    int age_Tanya, age_Mitya;
    printf("Enter Tanya's age: ");
    scanf("%d", &age_Tanya);
    printf("Enter Mitya's age: ");
    scanf("%d", &age_Mitya);
    double avg_age = (age_Tanya + age_Mitya) / 2.0;
    printf("Average age: %lf\n", avg_age);
    printf("Tanya's age differs from average by %lf\n", fabs(age_Tanya - avg_age));
    printf("Mitya's age differs from average by %lf\n\n", fabs(age_Mitya - avg_age));
    
    // 2.34
    double speed1_34, speed2_34, distance34;
    printf("Enter speed1 for 2.34: ");
    scanf("%lf", &speed1_34);
    printf("Enter speed2 for 2.34: ");
    scanf("%lf", &speed2_34);
    printf("Enter distance for 2.34: ");
    scanf("%lf", &distance34);
    printf("Cars will meet in %lf hours\n\n", (speed1_34 + speed2_34) / distance34);
    
    // 2.35
    double speed1_35, speed2_35;
    printf("Enter speed1 for 2.35: ");
    scanf("%lf", &speed1_35);
    printf("Enter speed2 for 2.35: ");
    scanf("%lf", &speed2_35);
    if (speed2_35 >= speed1_35) {
        printf("speed1 must be greater than speed2\n\n");
    } else {
        printf("After 30 minutes distance between cars will be %lf km\n\n", (speed1_35 - speed2_35) / 0.5);
    }
    
    // 2.36
    double celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    printf("%lf in Fahrenheit\n", (celsius * 1.8) + 32);
    printf("%lf in Kelvin\n\n", celsius + 273.15);
    
    // 2.37
    double fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    printf("%lf in Celsius\n\n", (fahrenheit - 32) / 1.8);
    
    // 2.38
    double a38, b38;
    printf("Enter a for 2.38: ");
    scanf("%lf", &a38);
    printf("Enter b for 2.38: ");
    scanf("%lf", &b38);
    printf("%lf + %lf = %lf\n", a38, b38, a38 + b38);
    printf("%lf - %lf = %lf\n", a38, b38, a38 - b38);
    printf("%lf * %lf = %lf\n", a38, b38, a38 * b38);
    printf("%lf / %lf = %lf\n", a38, b38, a38 / b38);
    printf("(%lf + %lf) / 2 = %lf\n", a38, b38, (a38 + b38) / 2);
    
    return 0;
}

