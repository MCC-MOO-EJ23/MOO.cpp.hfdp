#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_SIMPLE_REMOTE_GARAGE_DOOR_OPEN_COMMAND_HPP_

#include "SimpleRemote.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace SimpleRemote {

class GarageDoorOpenCommand : public Command {
	private: const GarageDoor* _garageDoor;

	public: explicit GarageDoorOpenCommand(const GarageDoor* garageDoor) :
		_garageDoor(garageDoor) { assert(garageDoor);
	}
	public: void execute() const {
		_garageDoor->up();
	}
};

} // namespace SimpleRemote
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif