#include <iostream>
#include <math.h>
int main()
{
	//2.1
	int x,a;
	scanf("%d",&x);
	printf("y = %d\n",17*x*x-6*x+13);
	scanf("%d",&a);
	printf("y = %d\n\n",3*a*a+5*a-21);
	//2.2
	double b;
	scanf("%lf",&b);
	printf("%lf\n\n",(b*b+10)/(sqrt(b*b+1)));
	//2.3(a)
	double d;
	scanf("%lf",&d);
	printf("%2lf\n\n",fabs(2*d+sin(fabs(3*d)))/3.56);
	//2.3(b)
	scanf("%lf",&d);
	printf("%2lf\n\n",(3.2+sqrt(1+d))/(15*d));
	return 0;
}
