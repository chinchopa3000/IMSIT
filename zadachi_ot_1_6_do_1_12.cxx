#include <iostream>

int main()
{
	//1.6
	float p=3.1415926;
	printf("%.3f\n\n",p);
	//1.7
	float e=2.71828;
	printf("%.1f\n\n",e);
	//1.8
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("You have entered the number %d\n\n",a);
	//1.9
	int a2;
	printf("Enter a number: ");
	scanf("%d",&a2);
	printf("%d - that's the number you entered\n\n",a2);
	//1.10
	char name[100];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("%s\n\n",name);
	//1.11
	char team[100];
	printf("Enter football team name: ");
	scanf("%s",team);
	printf("%s - this is the champion!\n\n",team);
	//1.12
	char username[100];
	printf("Enter person's name: ");
	scanf("%s",username);
	printf("Hello, %s!\n",username);
	return 0;
}

