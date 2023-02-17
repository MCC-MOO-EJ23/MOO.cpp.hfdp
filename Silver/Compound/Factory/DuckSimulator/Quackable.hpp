#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_FACTORY_QUACKABLE_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_FACTORY_QUACKABLE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class Quackable {
	public: virtual void quack() const = 0;
	public: virtual std::string toString() const = 0;
	public: virtual ~Quackable() = 0 {
	}
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif