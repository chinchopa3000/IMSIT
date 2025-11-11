#include <stdio.h>
#include <math.h>
int main()
{
	int a,i,k,r,j,b;
	k=0;
	while(k!=13)
	{scanf("%d",&a);
	for(b=true,i=2;i<=sqrt(a);i++)
	if(a%i==0)
	{b=false;
	break;}
	if(b)
	k++;
	j=a;
	r=0;
	while(j>0)
	{
		b=j%10;
		r=r*10+b;
		j/=10;
	}
	printf(" r=%d\n",r);
	}
	return 0;
}
