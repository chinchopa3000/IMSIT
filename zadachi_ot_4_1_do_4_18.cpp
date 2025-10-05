#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
    // 4.1
    double a4_1, b4_1;
    printf("Enter a for 4.1: ");
    scanf("%lf", &a4_1);
    printf("Enter b for 4.1: ");
    scanf("%lf", &b4_1);
    
    if (a4_1 > b4_1) 
    {
        printf("Number %.2lf is greater than %.2lf\n\n", a4_1, b4_1);
    } 
    else 
    {
        printf("Number %.2lf is greater than %.2lf\n\n", b4_1, a4_1);
    }

    // 4.2
    double x4_2;
    printf("Enter x for 4.2: ");
    scanf("%lf", &x4_2);
    double y4_2;
    
    if (x4_2 > 0) 
    {
        y4_2 = pow(sin(x4_2), 2);
    } 
    else 
    {
        y4_2 = 1 - 2 * sin(pow(x4_2, 2));
    }
    printf("y = %.6lf\n\n", y4_2);

    // 4.3
    double x4_3;
    printf("Enter x for 4.3: ");
    scanf("%lf", &x4_3);
    double y4_3;
    
    if (x4_3 > 0) 
    {
        y4_3 = pow(sin(x4_3), 2);
    } 
    else 
    {
        y4_3 = 1 + 2 * sin(pow(x4_3, 2));
    }
    printf("y = %.6lf\n\n", y4_3);

    // 4.4
    double x4_4, y4_4;
    printf("Enter x for 4.4: ");
    scanf("%lf", &x4_4);
    printf("Enter y for 4.4: ");
    scanf("%lf", &y4_4);
    
    if (x4_4 > 4) 
    {
        printf("This is region II\n\n");
    } 
    else if (x4_4 < 4) 
    {
        printf("This is region I\n\n");
    } 
    else 
    {
        printf("You are exactly on the line\n\n");
    }

    // 4.5
    double x4_5, y4_5;
    printf("Enter x for 4.5: ");
    scanf("%lf", &x4_5);
    printf("Enter y for 4.5: ");
    scanf("%lf", &y4_5);
    
    if (y4_5 < 3) 
    {
        printf("This is region II\n\n");
    } 
    else if (y4_5 > 3) 
    {
        printf("This is region I\n\n");
    } 
    else 
    {
        printf("You are exactly on the line\n\n");
    }

    // 4.6
    // Вариант A
    double x4_6a;
    printf("Enter x for 4.6 (variant A): ");
    scanf("%lf", &x4_6a);
    double y4_6a;
    
    if (x4_6a < 2) 
    {
        y4_6a = x4_6a;
    } 
    else 
    {
        y4_6a = 2;
    }
    printf("y = %.2lf\n", y4_6a);

    // Вариант B
    double x4_6b;
    printf("Enter x for 4.6 (variant B): ");
    scanf("%lf", &x4_6b);
    double y4_6b;
    
    if (x4_6b < 3) 
    {
        y4_6b = -x4_6b;
    } 
    else 
    {
        y4_6b = -3;
    }
    printf("y = %.2lf\n\n", y4_6b);

    // 4.7
    double x4_7;
    printf("Enter x for 4.7: ");
    scanf("%lf", &x4_7);
    double k4_7;
    
    if (sin(x4_7) < 0) 
    {
        k4_7 = pow(x4_7, 2);
    } 
    else 
    {
        k4_7 = fabs(x4_7);
    }
    
    double result4_7;
    
    if (k4_7 < x4_7) 
    {
        result4_7 = k4_7 * x4_7;
    } 
    else 
    {
        result4_7 = k4_7 + x4_7;
    }
    printf("Result = %.6lf\n\n", result4_7);

    // 4.8
    double x4_8;
    printf("Enter x for 4.8: ");
    scanf("%lf", &x4_8);
    double k4_8;
    
    if (sin(x4_8) < 0) 
    {
        k4_8 = fabs(x4_8);
    } 
    else 
    {
        k4_8 = pow(x4_8, 2);
    }
    
    double result4_8;
    
    if (k4_8 < x4_8) 
    {
        result4_8 = fabs(x4_8);
    } 
    else 
    {
        result4_8 = k4_8 * x4_8;
    }
    printf("Result = %.6lf\n\n", result4_8);

    // 4.9
    double a4_9, b4_9;
    printf("Enter a for 4.9: ");
    scanf("%lf", &a4_9);
    printf("Enter b for 4.9: ");
    scanf("%lf", &b4_9);
    
    if (a4_9 > b4_9) 
    {
        printf("%.2lf is maximum, %.2lf is minimum\n\n", a4_9, b4_9);
    } 
    else 
    {
        printf("%.2lf is maximum, %.2lf is minimum\n\n", b4_9, a4_9);
    }

    // 4.10
    double km, ft;
    printf("Enter distance in kilometers for 4.10: ");
    scanf("%lf", &km);
    printf("Enter distance in feet for 4.10: ");
    scanf("%lf", &ft);
    
    double ft_to_km = ft * 0.3048 / 1000;
    
    if (km > ft_to_km) 
    {
        printf("Distance in kilometers is greater\n\n");
    } 
    else if (km < ft_to_km) 
    {
        printf("Distance in feet is greater\n\n");
    } 
    else 
    {
        printf("Distances are equal\n\n");
    }

    // 4.11
    double kmph, mps;
    printf("Enter speed in km/h for 4.11: ");
    scanf("%lf", &kmph);
    printf("Enter speed in m/s for 4.11: ");
    scanf("%lf", &mps);
    
    double kmph_to_mps = kmph / 3.6;
    
    if (kmph_to_mps > mps) 
    {
        printf("Speed in km/h is greater than in m/s\n\n");
    } 
    else if (kmph_to_mps < mps) 
    {
        printf("Speed in m/s is greater than in km/h\n\n");
    } 
    else 
    {
        printf("Speeds are equal\n\n");
    }

    // 4.12
    double square_side, circle_radius;
    printf("Enter square side length for 4.12: ");
    scanf("%lf", &square_side);
    printf("Enter circle radius for 4.12: ");
    scanf("%lf", &circle_radius);
    
    double square_area = pow(square_side, 2);
    double circle_area = M_PI * pow(circle_radius, 2);
    
    if (square_area > circle_area) 
    {
        printf("Square area is greater than circle area\n\n");
    } 
    else if (square_area < circle_area) 
    {
        printf("Circle area is greater than square area\n\n");
    } 
    else 
    {
        printf("Areas are equal\n\n");
    }

    // 4.13
    double m1, v1, m2, v2;
    printf("Enter mass 1 for 4.13: ");
    scanf("%lf", &m1);
    printf("Enter volume 1 for 4.13: ");
    scanf("%lf", &v1);
    printf("Enter mass 2 for 4.13: ");
    scanf("%lf", &m2);
    printf("Enter volume 2 for 4.13: ");
    scanf("%lf", &v2);
    
    double density1 = m1 / v1;
    double density2 = m2 / v2;
    
    if (density1 > density2) 
    {
        printf("Density of first body is greater\n\n");
    } 
    else if (density1 < density2) 
    {
        printf("Density of second body is greater\n\n");
    } 
    else 
    {
        printf("Densities are equal\n\n");
    }

    // 4.14
    double r1, u1, r2, u2;
    printf("Enter resistance 1 for 4.14: ");
    scanf("%lf", &r1);
    printf("Enter voltage 1 for 4.14: ");
    scanf("%lf", &u1);
    printf("Enter resistance 2 for 4.14: ");
    scanf("%lf", &r2);
    printf("Enter voltage 2 for 4.14: ");
    scanf("%lf", &u2);
    
    double i1 = u1 / r1;
    double i2 = u2 / r2;
    
    if (i1 > i2) 
    {
        printf("Current in first section is greater\n\n");
    } 
    else if (i1 < i2) 
    {
        printf("Current in second section is greater\n\n");
    } 
    else 
    {
        printf("Currents are equal\n\n");
    }

    // 4.15
    double a4_15, b4_15, c4_15;
    printf("Enter a for quadratic equation (4.15): ");
    scanf("%lf", &a4_15);
    printf("Enter b for quadratic equation (4.15): ");
    scanf("%lf", &b4_15);
    printf("Enter c for quadratic equation (4.15): ");
    scanf("%lf", &c4_15);
    
    if (a4_15 == 0) 
    {
        printf("Coefficient a must be non-zero\n\n");
    } 
    else 
    {
        double discriminant = pow(b4_15, 2) - 4 * a4_15 * c4_15;
        
        if (discriminant > 0) 
        {
            printf("Equation has 2 roots\n\n");
        } 
        else if (discriminant < 0) 
        {
            printf("Equation has no real roots\n\n");
        } 
        else 
        {
            printf("Equation has 1 root\n\n");
        }
    }

    // 4.16
    double a4_16, b4_16, c4_16;
    printf("Enter a for quadratic equation (4.16): ");
    scanf("%lf", &a4_16);
    printf("Enter b for quadratic equation (4.16): ");
    scanf("%lf", &b4_16);
    printf("Enter c for quadratic equation (4.16): ");
    scanf("%lf", &c4_16);
    
    if (a4_16 == 0) 
    {
        printf("Coefficient a must be non-zero\n\n");
    } 
    else 
    {
        double discriminant = pow(b4_16, 2) - 4 * a4_16 * c4_16;
        
        if (discriminant >= 0) 
        {
            double x1 = (-b4_16 + sqrt(discriminant)) / (2 * a4_16);
            double x2 = (-b4_16 - sqrt(discriminant)) / (2 * a4_16);
            printf("Root 1: %.6lf\n", x1);
            printf("Root 2: %.6lf\n\n", x2);
        } 
        else 
        {
            printf("No real roots\n\n");
        }
    }

    // 4.17
    int birth_year, birth_month, current_year, current_month;
    printf("Enter birth year for 4.17: ");
    scanf("%d", &birth_year);
    printf("Enter birth month (1-12) for 4.17: ");
    scanf("%d", &birth_month);
    printf("Enter current year for 4.17: ");
    scanf("%d", &current_year);
    printf("Enter current month (1-12) for 4.17: ");
    scanf("%d", &current_month);
    
    if (birth_month < 1 || birth_month > 12 || current_month < 1 || current_month > 12) 
    {
        printf("Invalid month(s)\n\n");
    } 
    else 
    {
        int full_years;
        
        if (birth_month > current_month) 
        {
            full_years = current_year - birth_year - 1;
        } 
        else 
        {
            full_years = current_year - birth_year;
        }
        printf("Person is %d full years old\n\n", full_years);
    }

    // 4.18
    double square_area4_18, circle_area4_18;
    printf("Enter square area for 4.18: ");
    scanf("%lf", &square_area4_18);
    printf("Enter circle area for 4.18: ");
    scanf("%lf", &circle_area4_18);
    
    double square_side4_18 = sqrt(square_area4_18);
    double circle_radius4_18 = sqrt(circle_area4_18 / M_PI);
    double circle_diameter = 2 * circle_radius4_18;
    double square_diagonal = sqrt(2 * pow(square_side4_18, 2));
    
    if (circle_diameter <= square_side4_18) 
    {
        printf("Circle fits in square\n");
    } 
    else 
    {
        printf("Circle does NOT fit in square\n");
    }
    
    if (square_diagonal <= circle_diameter) 
    {
        printf("Square fits in circle\n");
    } 
    else 
    {
        printf("Square does NOT fit in circle\n");
    }
    printf("\n");

    return 0;
}
