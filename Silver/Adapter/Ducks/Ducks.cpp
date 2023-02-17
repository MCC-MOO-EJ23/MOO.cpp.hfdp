#include "Ducks.hpp"

using namespace HeadFirstDesignPatterns::Adapter::Ducks;

void testDuck(const Duck* duck) {
	duck->quack();
	duck->fly();
}

int main(int argc, char* argv[]) {  argc; argv;	// warning C4100
	int value = 0;

	std::auto_ptr<MallardDuck> duck(new MallardDuck());

#ifndef _DUCK_ADAPTER_
	std::auto_ptr<WildTurkey> turkey(new WildTurkey());
	std::auto_ptr<Duck> turkeyAdapter(new TurkeyAdapter(turkey.get()));

	std::cout << "The Turkey says..." << std::endl;
	turkey->gobble();
	turkey->fly();

	std::cout << std::endl << "The Duck says..." << std::endl;
	testDuck(duck.get());

	std::cout << std::endl << "The TurkeyAdapter says..." << std::endl;
	testDuck(turkeyAdapter.get());
#else
	std::auto_ptr<Turkey> duckAdapter(new DuckAdapter(duck.get()));
 
	for(int i=0;i<10;i++) {
		std::cout << "The DuckAdapter says..." << std::endl;
		duckAdapter->gobble();
		duckAdapter->fly();
	}
#endif

	return value;
}