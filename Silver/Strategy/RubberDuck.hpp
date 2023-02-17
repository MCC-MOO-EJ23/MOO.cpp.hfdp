#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_RUBBER_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_RUBBER_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class RubberDuck : public Duck {
	public:	RubberDuck() : Duck(new FlyNoWay(), new Squeak()) {
	}
	public: void display() const {
		std::cout << "I'm a rubber duck" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif