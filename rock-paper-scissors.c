#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void check_win(int, int);
char moves[3][9] = {
	"rock",
	"paper",
	"scissors" 
};
	
int main(void) {
	time_t t;
	srand((unsigned) time(&t));
	int player;
	printf("To play, select Rock, Paper, or Scissors (1, 2, or 3).\n");
	scanf("%i", &player);
	switch(player) {
		case 1:
			printf("Player move is: %s\n", moves[0]);
			break;
		case 2:
			printf("Player move is: %s\n", moves[1]);
			break;
		case 3:
			printf("Player move is: %s\n", moves[2]);
			break;
		default:
			printf("Not a vaild option, please try again.\n");
			return 1;
	}
	int computer = (rand() % 3) + 1;
	switch(computer) {
		case 1:
			printf("Computer move is: %s\n", moves[0]);
			break;
		case 2:
			printf("Computer move is: %s\n", moves[1]);
			break;
		case 3:
			printf("Computer move is: %s\n", moves[2]);
			break;
		default:
			printf("Somthing went wrong.\n");
			return 1;
	}
	check_win(computer, player);
	return 0;
} 

void check_win(int c, int p) {
	if (c == p) {
		printf("Tie\n");
	} else if (c + p == 3 && p > c) {
		printf("Player wins!\n");
	} else if (c + p == 3 && p < c) {
		printf("Computer wins!\n");
	} else if (c + p == 4 && p > c) {
		printf("Computer wins!\n");
	} else if (c + p == 4 && p < c) {
		printf("Player wins!\n");
	} else if (c + p == 5 && p > c) {
		printf("Player wins!\n");
	} else if (c + p == 5 && p < c) {
		printf("Computer wins!\n");
	}

}
