#include <Windows.h>
#include <iostream>

#include "Deck.h"


int main() {
	Casino::Deck deck;
	srand(time(NULL));
	deck.shuffle();

	std::cout << deck.getCard() << std::endl;
	std::cout << deck.getCard() << std::endl;

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