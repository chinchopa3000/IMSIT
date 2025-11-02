#include <iostream>
#include <math.h>
#include <stdio.h>
int prostoe(int n)
{
	int i;
	if(n<2)
		return 0;
	for(i=2;i<sqrt(n);i++)
		if(n%i)
			return 0;
	return 1;
}
int main()
{
	int a;
	scanf("%d",&a);
	if(prostoe(a))
		printf("prime  number");
	else
		printf("composite number");
	return 0;
}
