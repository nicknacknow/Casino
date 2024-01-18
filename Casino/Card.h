#pragma once
#include <string>
#include <ostream>

namespace Casino {
	enum Suit {
		Clubs,
		Diamonds,
		Hearts,
		Spades
	};

	enum Rank {
		Ace,
		Two,
		Three,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack,
		Queen,
		King
	};

	std::string suit_to_string(Suit suit) {
		switch (suit) {
			case Clubs:    return "Clubs";
			case Diamonds: return "Diamonds";
			case Hearts:   return "Hearts";
			case Spades:   return "Spades";
			default:       return "Unknown";
		}
	}

	std::string rank_to_string(Rank rank) {
		switch (rank) {
			case Ace:   return "Ace";
			case Two:   return "Two";
			case Three: return "Three";
			case Four:  return "Four";
			case Five:  return "Five";
			case Six:   return "Six";
			case Seven: return "Seven";
			case Eight: return "Eight";
			case Nine:  return "Nine";
			case Ten:   return "Ten";
			case Jack:  return "Jack";
			case Queen: return "Queen";
			case King:  return "King";
			default:    return "Unknown";
		}
	}

	Rank string_to_rank(const std::string& s) {
		if (s == "Ace" || s == "1" || s == "A") return Ace;
		if (s == "Two" || s == "2") return Two;
		if (s == "Three" || s == "3") return Three;
		if (s == "Four" || s == "4") return Four;
		if (s == "Five" || s == "5") return Five;
		if (s == "Six" || s == "6") return Six;
		if (s == "Seven" || s == "7") return Seven;
		if (s == "Eight" || s == "8") return Eight;
		if (s == "Nine" || s == "9") return Nine;
		if (s == "Ten" || s == "10") return Ten;
		if (s == "Jack" || s == "J") return Jack;
		if (s == "Queen" || s == "Q") return Queen;
		if (s == "King" || s == "K") return King;

		throw std::invalid_argument("Unknown rank: " + s);
	}

	class Card
	{
	public:
		Card() {}
		Card(Suit _suit, Rank _rank) : suit(_suit), rank(_rank) {}
		Card(std::string _suit, std::string _rank) : suit(string_to_suit(_suit)), rank(string_to_rank(_rank)) {}

		std::string to_string() const {
			return rank_to_string(rank) + " of " + suit_to_string(suit);
		}

		Suit string_to_suit(std::string s) const {
			if (s == "Clubs") return Clubs;
			if (s == "Diamonds") return Diamonds;
			if (s == "Hearts") return Hearts;
			if (s == "Spades") return Spades;

			throw std::invalid_argument("Unknown suit: " + s);
		}

		friend std::ostream& operator <<(std::ostream& out, const Card& obj) {
			return out << obj.to_string();
		}

		Suit getSuit() {
			return suit;
		}

		Rank getRank() {
			return rank;
		}

	private:
		Suit suit = Diamonds;
		Rank rank = Ten;
	};
}