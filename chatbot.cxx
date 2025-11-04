#include <stdio.h>
#include <string.h>
int main()
{
	char message[100];
	while(1)
	{
		printf("You: ");
		scanf("%s",message);
		if (strcmp(message,"hello")==0 or strcmp(message,"hi")==0)
			printf("Bot: Hello, how are you?\n");
		else if (strcmp(message,"fine")==0 or strcmp(message,"good")==0)
			printf("Bot: Glad to hear that!\n");
		else if (strcmp(message,"bye")==0 or strcmp(message,"goodbye")==0)
		{
			printf("Bot: Goodbye!\n");
			break;
		}
	}
	return 0;
}
