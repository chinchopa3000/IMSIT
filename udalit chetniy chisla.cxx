#include <stdio.h>
#include <math.h>
int odinak(int n)
{
	int l=0,p=0;
	l=n%10;
	while(n!=0)
	{p=n%10;
	n=n/10;
	if(p!=l)
	return 0;
	}
	return 1;
}
int chetnsumm(int n)
{
	int a,t=0;
	while(n!=0)
	{a=n%10;
	t+=a;
	n=n/10;}
	if(t%2==0)
	return 1;
	else
	return 0;
}
int main()
{
	int i,n,j=0,i1;
	scanf("%d",&n);
	int x[n],u[n];
	for(i=0;i<n;i++)
	{scanf("%d",&x[i]);
	if(odinak(x[i]))
	{u[j]=x[i];
	j++;}
	}
	for(i1=0;i1<j-1;i1++)
	if(chetnsumm(u[i1]))
	u[i1]=u[i1+1];
	j--;
	printf("%d",u[i1]);
	return 0;
}
