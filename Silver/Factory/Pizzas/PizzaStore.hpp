#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_SIMPLE_FACTORY_PIZZA_STORE_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_SIMPLE_FACTORY_PIZZA_STORE_HPP_

#include "Pizzas.hpp"

namespace HeadFirstDesignPatterns {
namespace Factory {
namespace Simple {

class PizzaStore {
	private: SimplePizzaFactory* _factory;

	public: explicit PizzaStore(SimplePizzaFactory* factory) :
		_factory(factory) { assert(factory);
	}
	public: Pizza* orderPizza(std::string type) {
		Pizza* pizza;
		pizza = _factory->createPizza(type);
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
		return pizza;
	}
};

} // namespace Simple
} // namespace Factory
} // namespace HeadFirstDesignPatterns

#endif