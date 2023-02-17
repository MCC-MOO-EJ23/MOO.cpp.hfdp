#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIOR_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_STRATEGY_FLY_BEHAVIOR_HPP_

#include "MiniDuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Strategy {

class FlyBehavior {
	public: virtual void fly () const = 0;
	public: virtual ~FlyBehavior() = 0 {
	};
};

} // namespace Strategy
} // namespace HeadFirstDesignPatterns

#endif