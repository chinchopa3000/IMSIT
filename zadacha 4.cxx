//Вывести номер наибольшей цифры в каждом введенном числе
#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,r,k,j,c,b,max;
	scanf("%d",&n);
	k=0;
	while(k!=n)
	{
		scanf("%d",&a);
		j=a;
		r=0;
		while(a>0)
		{c=a%10;
		r=r*10+c;
		a=a/10;}
		if(r==j)
		k++;
		max=0;
		while(j!=0)
		{b=j%10;
		j=j/10;
		if(max<b)
		max=b;}
		printf("%d\n",max);
	}
	return 0;
}
		
