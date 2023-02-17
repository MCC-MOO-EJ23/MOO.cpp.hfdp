#include "Pizzas.hpp"

using namespace HeadFirstDesignPatterns::Factory::Simple;

int main(int argc, char* argv[]) {  argc; argv;	// warning C4100
	int value = 0;

	SimplePizzaFactory factory;
	PizzaStore store(&factory);

	std::auto_ptr<Pizza>pizza(store.orderPizza("cheese"));
	std::cout << "We ordered a " << pizza->getName() << std::endl;

	pizza = std::auto_ptr<Pizza>(store.orderPizza("veggie"));
	std::cout << "We ordered a " << pizza->getName() << std::endl;

	return value;
}

