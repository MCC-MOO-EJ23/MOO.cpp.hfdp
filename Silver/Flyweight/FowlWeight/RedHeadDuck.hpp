#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_FLYWEIGHT_FOWLWEIGHT_REDHEAD_DUCK_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_FLYWEIGHT_FOWLWEIGHT_REDHEAD_DUCK_HPP_

#include "FowlWeight.hpp"

namespace HeadFirstDesignPatterns {
namespace FlyWeight {
namespace FowlWeight {

// ConcreteFlyweight

class RedheadDuck : public Fowl {
	private: std::string _type;
	private: std::string _sound;
	private: std::string _swim;

	public: RedheadDuck() : 
		_type("Redhead Duck"), _sound("Quack"), _swim("swims") {
	}
	public: void quack() const {
		std::cout << _sound.c_str();
	}
	public: void swim() const {
		std::cout << _swim.c_str();
	}
	public: std::string toString() const {
		return _type.c_str();
	}
};

} // namespace FowlWeight
} // namespace FlyWeight
} // namespace HeadFirstDesignPatterns

#endif