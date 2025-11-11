//Вывести номер наибольшей цифры в каждом введенном числе
#include <stdio.h>
#include <math.h>
int palindrom(int n)
{
	if (n<11) return 0;
	int k=0, m=n;
	for(;n>0;n/=10)
	k=k*10+n%10;
	return m==k;
}
int maximum(int n)
{
	int max=0,k=0,m=0,j=0;
	n=abs(n);
	if(n==0)
	return 1;
	while(n!=0)
	{
		k=n%10;
		n/=10;
		m++;
		if(max<=k)
		{max=k;
		j=m;}
	}
	return j+1;
}
int main()
{
	int a,n,k;
	scanf("%d",&n);
	k=0;
	while(k!=n)
	{
		scanf("%d",&a);
		while(a>0)
		palindrom(a);
		if(palindrom(a))
		k++;
		while(palindrom(a)!=0)
		maximum(a);
		printf("%d\n",maximum(a));
	}
	return 0;
}
		
