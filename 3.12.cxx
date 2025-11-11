#include <stdio.h>
#include <math.h>
int main()
{
	int k,a,i;
	scanf("a=%d",&a);
	scanf("n=%d",&n);
	k=0;
	while(k!=n)
	{
		j=a;
		r=0;
		while(j>0)
		{
			b=j%10;
			r=r*10+b;
			j/=10;
		}
		if(r==a)
		{k++;
			
		}
		
	}
}
