#include <iostream>
#include <math.h>
/*int palindrom(int n)
{
	int k=n,s=0;
	while (n!=0)
	{
		s=s*10+n%10;
		n/=10;
	}
	return s=k;
}*/
int palindrom(int n)
{
	if(n<11)
	return 0;
	int k=0,m=n;
	for(;n>0;n/=10)
	k=k*10+n%10;
	return m==k;
}
int main()
{
	int a,k,max;
	a=1;k=0;
	while (a!=0)
	{
		scanf("%d",&a);
		if (palindrom(a))
		{
			k++;
			if(k==1)
			max=a;
			else if(max<a)
			max=a;
		}
	}
	if(k>0)
	printf("%d",max);
	else
	printf("error");
	return 0;
}

