#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_TURKEY_ADAPTER_HPP_

#include "Ducks.hpp"

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class TurkeyAdapter : public Duck {
	private: const Turkey* _turkey;

	private: TurkeyAdapter(const TurkeyAdapter&); // Disable copy constructor
    private: void operator=(const TurkeyAdapter&); // Disable assignment operator

	public: explicit TurkeyAdapter(const Turkey* turkey) { assert(turkey);
		_turkey = turkey;
	}
	public: void quack() const {
		_turkey->gobble();
	}
 	public: void fly() const {
		for(int i = 0; i < 5; i++) {
			_turkey->fly();
		}
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif