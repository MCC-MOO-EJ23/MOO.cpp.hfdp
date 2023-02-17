#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIOR_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_QUACK_BEHAVIOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class QuackBehavior {
	public: virtual void quack() const = 0;
	public: virtual ~QuackBehavior() = 0 {
	};
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif