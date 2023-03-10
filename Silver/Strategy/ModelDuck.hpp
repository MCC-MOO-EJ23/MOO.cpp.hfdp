#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_MODEL_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_MODEL_DUCK_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class ModelDuck : public Duck {
	public:	ModelDuck() : Duck(new FlyNoWay(), new Quack()) {
	}
	public: void display() const {
		std::cout << "I'm a model duck" << std::endl;
	}
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif