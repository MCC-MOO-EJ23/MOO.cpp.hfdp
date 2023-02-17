#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_DUCK_ADAPTER_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_ADAPTER_DUCK_ADAPTER_HPP_

#include "Ducks.hpp"
#include <stdlib.h>
#include <process.h>

namespace HeadFirstDesignPatterns {
namespace Adapter {
namespace Ducks {

class DuckAdapter : public Turkey {
	private: const Duck* _duck;
	private: int _random;

	private: DuckAdapter(const DuckAdapter&); // Disable copy constructor
    private: void operator=(const DuckAdapter&); // Disable assignment operator

	public: explicit DuckAdapter(const Duck* duck) { assert(duck);
		_duck = duck;
		srand(_getpid());
		_random = rand() % 5;
		if (_random == 0)
			_random = 1;
	}
	public: void gobble() const {
		_duck->quack();
	}
 	public: void fly() const {
		for(int i = 0; i < _random; i++) {
			_duck->fly();
		}
	}
};

} // namespace Ducks
} // namespace Adapter
} // namespace HeadFirstDesignPatterns

#endif