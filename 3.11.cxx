#include <stdio.h>
#include <math.h>
int main()
{
	int i,k,a,b,c,n;
	c=0;
	n=0;
	scanf("%d",&k);
	for (i=1;i<=k;i++)
	{
		scanf("%d",&a);
		c+=a*10*n;
	}
	
	a/=10;
	while (a>9)
	{
		b=a%10;
		c+=b*10*n;
		a/=10;
		n++;
	}
	printf("%d",c);
	return 0;
}
