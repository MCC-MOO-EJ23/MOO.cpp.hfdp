#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_DECOY_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_DECOY_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class DecoyDuck : public Duck {
	public:	DecoyDuck() : Duck(new FlyNoWay(), new MuteQuack()) {
	}
	public: void display() const {
		std::cout << "I'm a duck Decoy" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif