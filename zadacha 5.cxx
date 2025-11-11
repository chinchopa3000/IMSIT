//Найти количество чисел, состоящих из одинаковых цифр
#include <stdio.h>
#include <math.h>
int main()
{
	int k,n,a,i,m,b,g,l,j;
	k=0;g=0;l=0;
	scanf("%d",&n);
	while(k!=n)
	{scanf("%d",&a);
	for(b=true,i=2;i<=sqrt(a);i++)
	if(a%i==0)
	{b=false;
	break;}
	if(b)
	k++;
	m=a%10;
	j=0;
	while(a!=0)
	{
		g=a%10;
		a=a/10;
		if(m!=g)
		j++;
	}
	if(j==0)
	l++;
	}
	printf("l=%d",l);
	return 0;
}
