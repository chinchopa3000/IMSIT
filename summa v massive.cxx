/*Задан массив найти сумму его элементов*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	int x[n];
	for(a=i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(x[i]%3==0)
		a+=x[i];
	}
	printf("%d",a);
	return 0;
}
