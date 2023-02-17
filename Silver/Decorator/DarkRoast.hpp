#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_DECORATOR_DARK_ROAST_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_DECORATOR_DARK_ROAST_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
namespace Decorator {

class DarkRoast : public Beverage {
	public: DarkRoast() {
		_description = "Dark Roast Coffee";
	}
	public: double cost() const {
		return 0.99;
	}
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif