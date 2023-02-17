#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_DUCKS_QUACKABLE_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_DUCKS_QUACKABLE_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Ducks {

class Quackable {
	public: virtual void quack() const = 0;
	public: virtual ~Quackable() = 0 {
	}
};

} // namespace Ducks
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif