#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_DECORATOR_QUACK_COUNTER_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_DECORATOR_QUACK_COUNTER_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Decorator {

class QuackCounter : public Quackable {
	private: std::auto_ptr<Quackable> _duck;
	private: static int _numberOfQuacks;
  
	private: QuackCounter(const QuackCounter&); // Disable copy constructor
    private: void operator=(const QuackCounter&); // Disable assignment operator

	public: explicit QuackCounter (Quackable* duck) :
		_duck(duck) { assert(duck);
	}
	public: void quack() const {
		_duck->quack();
		_numberOfQuacks++;
	}
	public: static int getQuacks() {
		return _numberOfQuacks;
	}
	public: std::string toString() const {
		return _duck->toString();
	}
};

} // namespace Decorator
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif
