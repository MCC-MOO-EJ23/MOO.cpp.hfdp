#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_FACTORY_COUNTING_DUCK_FACTORY_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_FACTORY_COUNTING_DUCK_FACTORY_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Factory {

class CountingDuckFactory : public AbstractDuckFactory {
 	public: Quackable* createMallardDuck() const {
		return new QuackCounter(new MallardDuck());
	}
  	public: Quackable* createRedheadDuck() const {
		return new QuackCounter(new RedheadDuck());
	}
  	public: Quackable* createDuckCall() const {
		return new QuackCounter(new DuckCall());
	}
  	public: Quackable* createRubberDuck() const {
		return new QuackCounter(new RubberDuck());
	}
};

} // namespace Factory
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif

