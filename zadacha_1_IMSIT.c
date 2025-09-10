#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
	int a,b,i;
	b=true;
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	if(a%i==0)
	b=false;
	if(b)
	printf("prime number");
	else
	printf("Composite number");
	return 0;
}

