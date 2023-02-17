#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_FLYWEIGHT_FOWLWEIGHT_TURKEY_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_FLYWEIGHT_FOWLWEIGHT_TURKEY_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
namespace FlyWeight {
namespace FowlWeight {

// Abstract Flyweight

class Turkey {
	public: virtual void gobble() const = 0;
	public: virtual void walk() const = 0;
	public: virtual std::string toString() const = 0;
	public: virtual ~Turkey() = 0 {
	}
};

} // namespace FowlWeight
} // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif