#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMMAND_REMOTE_LIGHT_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_REMOTE_LIGHT_HPP_

#include "Remote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Remote {

class Light {
	private: std::string _location;

	public: explicit Light(std::string location) :
		_location(location) {
	}
	public: void on() const {
		std::cout << _location.c_str() << " light is on" << std::endl;
	}
	public: void off() const {
		std::cout << _location.c_str() << " light is off" << std::endl;
	}
};

} // namespace Remote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif