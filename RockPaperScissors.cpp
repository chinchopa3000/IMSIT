#include <iostream>
#include <cstdlib>
#include <ctime>
int main() 
{
	srand(time(0));
	const char* choices[3]={"Rock", "Scissors", "Paper"};
	int playerChoice,computerChoice;
	printf("Choose:\n1 - Rock\n2 - Scissors\n3 - Paper\n");
	printf("Your choice: ");
	scanf("%d", &playerChoice);
	computerChoice=rand()%3+1;
	printf("You chose: %s\n",choices[playerChoice-1]);
	printf("Computer chose: %s\n",choices[computerChoice-1]);
	if (playerChoice==computerChoice)
	printf("It's a tie!\n");
	else if ((playerChoice==1 and computerChoice==2)or(playerChoice==2 and computerChoice==3)or(playerChoice==3 and computerChoice==1)) 
	printf("You win!\n");
	else
	printf("Computer wins!\n");
    return 0;
}
