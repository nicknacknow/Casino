#pragma once
#include "Card.h"

#include <vector>
#include <stack>

namespace Casino {
	class Deck {
	public:
		Deck() {
			load_suit("Clubs");
			load_suit("Diamonds");
			load_suit("Hearts");
			load_suit("Spades");
		}

		Card getCard() {
			Card card = cards.top();
			cards.pop();
			return card;
		}

		void clear() {
			while (!cards.empty()) cards.pop();
		}

		void shuffle() {
			std::vector<Card> vecCards = this->to_vector();

			for (int i = 0; i < vecCards.size() - 1; i++) {
				int j = i + rand() % (vecCards.size() - i); // need better num gen
				std::swap(vecCards[i], vecCards[j]);
			}

			this->clear(); // clear stack
			for (Card card : vecCards) { 
				cards.push(card); // now load into stack
			}
		} 

		std::vector<Card> to_vector() {
			std::vector<Card> vecCards; // could do array but would rather not risk out of bounds

			while (!cards.empty())
				vecCards.push_back(this->getCard());

			return vecCards;
		}

	private:
		std::stack<Card> cards;
		
		void load_suit(std::string suit) {
			for (int i = 1; i < 9; i++)
				cards.push(Card(suit, i));
			
			cards.push(Card(suit, Jack));
			cards.push(Card(suit, Queen));
			cards.push(Card(suit, King));
		}
	};
}