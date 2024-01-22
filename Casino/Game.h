#pragma once

// work on some polymorphism here 

namespace Casino {
	class Game {
	public:
		virtual void pre_game() = 0;
		virtual void input() = 0;

		void play() {

		}
	};
}