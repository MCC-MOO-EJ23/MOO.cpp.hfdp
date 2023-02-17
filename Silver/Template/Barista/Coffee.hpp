#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_TEMPLATE_BARISTA_COFFEE_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_TEMPLATE_BARISTA_COFFEE_HPP_

#include "Barista.hpp"

namespace HeadFirstDesignPatterns {
namespace Template {
namespace Barista {

class Coffee : public CaffeineBeverage {
	public: void brew() const {
		std::cout << "Dripping Coffee through filter" << std::endl;
	}
	public: void addCondiments() const {
		std::cout << "Adding Sugar and Milk" << std::endl;
	}
};

} // namespace Barista
} // namespace Template
} // namespace HeadFirstDesignPatterns

#endif