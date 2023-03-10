#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_COMPOSITE_RUBBER_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_COMPOSITE_RUBBER_DUCK_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Composite {

class RubberDuck : public Quackable {
	public: void quack() const {
		std::cout << "Squeak" << std::endl;
	}
	public: std::string toString() const {
		return "Rubber Duck";
	}
};

} // namespace Composite
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif