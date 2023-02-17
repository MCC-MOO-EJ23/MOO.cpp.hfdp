#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_DECORATOR_GOOSE_ADAPTER_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMPOUND_DECORATOR_GOOSE_ADAPTER_HPP_

#include "DuckSimulator.hpp"

namespace HeadFirstDesignPatterns {
namespace Compound {
namespace Decorator {

class GooseAdapter : public Quackable {
	private: std::auto_ptr<Goose> _goose;
 
	private: GooseAdapter(const GooseAdapter&); // Disable copy constructor
    private: void operator=(const GooseAdapter&); // Disable assignment operator

	public: explicit GooseAdapter(Goose* goose) :
		_goose(goose) { assert(goose);
	}
	public: void quack() const {
		_goose->honk();
	}
	public: std::string toString() const {
		return "Goose pretending to be a Duck";
	}
};

} // namespace Decorator
} // namespace Compound
} // namespace HeadFirstDesignPatterns

#endif