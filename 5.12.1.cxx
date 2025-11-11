#include <stdio.h>
#include <math.h>
int main()
{
	int a,k,b,r,i1,c,j;
	k=0;
	while(k!=13)
	scanf("%d",&a);
	b=true;
	for(i1=2;i1<=a/2;i1++)
	if(a%i1==0)
	b=false;
	if(b==true)
	k++;
	r=0;
	j=a;
	while(j>0)
	{
	c=j%10;
	r=r*10+c;
	j/=10;
	}
	printf("r=%d",r);
	return 0;
}
