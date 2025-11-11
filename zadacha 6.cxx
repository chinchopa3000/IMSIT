//Найти количество чисел, состоящих из нечётных цифр
#include <stdio.h>
#include <math.h>
int main()
{
	int i,k,a,b,c,l,n,m;
	scanf("%d",&n);
	k=0;c=0;l=0;
	while(k!=n)
	{scanf("%d",&a);
	for(b=true,i=2;i<=sqrt(a);i++)
	if(a%i==0)
	{b=false;
	break;}
	if(b)
	k++;
	m=0;
	while(a!=0)
	{
		c=a%10;
		a=a/10;
		if(c%2==0)
		m++;
	}
	if(m==0)
	l++;
	}
	printf("l=%d",l);
	return 0;
}
