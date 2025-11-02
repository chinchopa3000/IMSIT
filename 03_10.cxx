#include <iostream>
#include <math.h>
int prostoe(int n)
{
	int i;
	if(n<2)
	return 0;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int main()
{
	int a,b,k=0,i;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&a);
		if(prostoe(a))
		k++;
	}
	printf("%d",k);
	return 0;
}

