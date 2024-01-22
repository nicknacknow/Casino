#include <Windows.h>
#include <iostream>

#include "Deck.h"

using Casino::Card;

int main() {
	Casino::Deck deck;
	srand(time(NULL));
	deck.shuffle();

	// quick blackjack game:

	Card player1 = deck.getCard();
	Card dealer_face_down = deck.getCard();
	Card player2 = deck.getCard();
	Card dealer_face_up = deck.getCard();

	std::cout << player1 << std::endl;
	std::cout << player2 << std::endl;


//	printf("%s\n", card);

	std::cin.get();
	return 1;
}

/*

to-do:
make a deck class (separate header)
	-  internal stack
	-  load all cards linearly (suit by suit) then shuffle
	-  write shuffle method

*/