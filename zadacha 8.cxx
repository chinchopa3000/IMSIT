//Для каждого введённого числа вывести его наибольший делитель, меньший самого числа.
#include <stdio.h>
#include <math.h>
int main()
{
	int a,k,n,b,i,i1;
	k=0;
	printf("count of simple numbers\n");
	scanf("%d",&n);
	while(k!=n)
	{scanf("%d",&a);
	for(b=true,i=2;i<=sqrt(a);i++)
	if(a%i==0)
	{b=false;
	break;}
	if(b)
	k++;
	printf("maximum of divisors:\n");
	for(i1=a/2;i1>=1;i1--)
	{
		if(a%i1==0)
		{printf("%d ",i1);
		break;}
	}
	printf("\n");
	}
	return 0;
}
