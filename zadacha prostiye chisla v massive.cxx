#include <stdio.h>
#include <math.h>
#include <windows.h>
unsigned long long int dvoichnoe(unsigned int n)
{
	int p=1,s=0;
	while(n!=0)
	{
		s+=n%2*p;
		n=n/2;
		p=p*10;
	}
	return s;
}
int prostoe(int n)
//Фунция возращает 1 ,если число простое и 0 ,если не простое. 
{
	int i;
	if(n<=1)
	return 0;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int n,i,j=0,max,i1;
	scanf("%d",&n);
	int x[n],y[n];
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	if(prostoe(x[i]))
	{y[j]=x[i];
	j++;}
	printf("\n%d \n",j);
	if(j>=5)
	for(i1=0;i1<5;i1++)
	{for(i=0;i<j;i++)
	{if(i==0)
	max=i;
	else
	if(y[i]>y[max])
	max=i;}
	for(i=max;i<j-1;i++)
	y[i]=y[i+1];
	j--;}
	else
	printf("В массиве y нету 5 элементов\n");
	for(i=0;i<j;i++)
	printf("%lld ",dvoichnoe(y[i]));
	return 0;
}
