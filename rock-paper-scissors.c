#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void check_win(void);
int computer_move(void);
int player;
int computer;
time_t t;
char moves[3][9] = {
	"rock",
	"paper",
	"scissors" 
};
	
int main(void) {
	srand((unsigned) time(&t));
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
	computer = computer_move() + 1;
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
	check_win();
	return 0;
} 

int computer_move(void) {
	int computer_numb = rand() % 3;
	return computer_numb;
}

void check_win(void) {
	if (computer == player) {
		printf("Tie\n");
	} else if (computer + player == 3 && player > computer) {
		printf("Player wins!\n");
	} else if (computer + player == 3 && player < computer) {
		printf("Computer wins!\n");
	} else if (computer + player == 4 && player > computer) {
		printf("Computer wins!\n");
	} else if (computer + player == 4 && player < computer) {
		printf("Player wins!\n");
	} else if (computer + player == 5 && player > computer) {
		printf("Player wins!\n");
	} else if (computer + player == 5 && player < computer) {
		printf("Computer wins!\n");
	}

}
