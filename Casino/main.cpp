#include <Windows.h>
#include <iostream>

#include "Card.h"


int main() {
	Casino::Card card("Spades", "Ace");

	std::cout << card;
//	printf("%s\n", card);


	std::cin.get();
	return 1;
}

/*

to-do:
make a deck class (separate header)
	-  internal queue
	-  load all cards linearly (suit by suit) then shuffle
	-  write shuffle method

*/