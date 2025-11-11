#include <stdio.h>
#include <math.h>
int perevod(int n)
{
	int j=n,b=0,r=0;
	while(j>0)
	{
	b=j%10;
	r=r*10+b;
	j/=10;
	}
	return r;
}
int main()
{
	int a;
	a=1;
	while(a!=0)
	{
		scanf("%d",&a);
		printf("%d\n",perevod(a));
	}
	return 0;
}
