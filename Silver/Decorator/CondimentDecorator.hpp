#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_DECORATOR_CONDIMENT_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_DECORATOR_CONDIMENT_HPP_

#include "Starbuzz.hpp"

namespace HeadFirstDesignPatterns {
namespace Decorator {

class CondimentDecorator : public Beverage {
	private: CondimentDecorator(const CondimentDecorator&); // Disable copy constructor
    private: void operator=(const CondimentDecorator&); // Disable assignment operator

	protected: CondimentDecorator() {
	}
	public: virtual ~CondimentDecorator() = 0 {
	};
	public: virtual std::string getDescription() const = 0;
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif