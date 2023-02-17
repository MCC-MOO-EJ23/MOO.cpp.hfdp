#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_TURKEY_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_TURKEY_HPP_

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class Turkey {
	public: virtual void gobble() const = 0;
 	public: virtual void fly() const = 0;
	public: virtual ~Turkey() = 0 {
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif