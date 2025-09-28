#include <stdio.h>
#include <math.h>
int main()
{
	// 2.4
	double a;
	scanf("%lf", &a);
	double p = 4 * a;
	printf("Perimeter of the square: %.2lf\n\n", p);
	// 2.5
	double r;
	scanf("%lf", &r);
	double d = 2 * r;
	printf("Diameter of the circle: %.2lf\n\n", d);
	// 2.6
	double h;
	const double R = 6350.0;
	scanf("%lf", &h);
	double l = sqrt(2 * R * h + h * h);
	printf("Distance to the horizon: %.2lf km\n\n", l);
	// 2.7
	double e;
	scanf("%lf", &e);
	double v = pow(e, 3);
	double s = 4 * pow(e, 2);
	printf("Volume of the cube: %.2lf\n", v);
	printf("Lateral surface area: %.2lf\n\n", s);
	// 2.8
	double cr;
	scanf("%lf", &cr);
	double c = 2 * M_PI * cr;
	double ca = M_PI * pow(cr, 2);
	printf("Circumference: %.2lf\n", c);
	printf("Area of the circle: %.2lf\n\n", ca);
	// 2.9a
	double x, y;
	scanf("%lf %lf", &x, &y);
	double z = 2 * pow(x, 3) - 3.44 * x * y + 2.3 * pow(x, 2) - 7.1 * y + 2;
	printf("z = %.2lf\n\n", z);
	// 2.9b
	double a1, b1;
	scanf("%lf %lf", &a1, &b1);
    double x1 = 3.14 * pow(a1 + b1, 3) + 2.75 * pow(b1, 2) - 12.7 * a1 - 4.1;
    printf("x = %.2lf\n\n", x1);
	// 2.10
	int m, n;
	scanf("%d %d", &m, &n);
	double am = (m + n) / 2.0;
	double gm = sqrt(m * n);
	printf("Arithmetic mean: %.2lf\n", am);
	printf("Geometric mean: %.2lf\n\n", gm);
	// 2.11
	double v1, m1;
	scanf("%lf %lf", &v1, &m1);
	double den = m1 / v1;
	printf("Material density: %.2lf\n\n", den);
	// 2.12
	double p1, a2;
	scanf("%lf %lf", &p1, &a2);
	double pd = p1 / a2;
	printf("Population density: %.2lf people/unit area\n\n", pd);
	return 0;
}
