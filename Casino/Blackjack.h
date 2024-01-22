#pragma once
#include "Deck.h"

#include <iostream>

namespace Casino {
	class Blackjack { // not inheriting from Game yet just to save hassle. will in future though... maybe constructor for Game could include game name and description?
	public:
		void game() {

		}

		void input() {
			// needs game 'events' - switch them here so u know wat to get inputs
			std::string inp;
			std::getline(std::cin, inp);


		}
	};
}