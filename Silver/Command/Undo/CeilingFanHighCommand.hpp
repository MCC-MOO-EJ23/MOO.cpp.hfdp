#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_COMMAND_UNDO_CEILING_FAN_HIGH_COMMAND_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_COMMAND_UNDO_CEILING_FAN_HIGH_COMMAND_HPP_

#include "Undo.hpp"

namespace HeadFirstDesignPatterns {
namespace Command {
namespace Undo {

class CeilingFanHighCommand : public Command {
	private: const CeilingFan* _ceilingFan;
	private: mutable int _prevSpeed;
  
	public: explicit CeilingFanHighCommand(const CeilingFan* ceilingFan) :
		_ceilingFan(ceilingFan) { assert(ceilingFan);
		_prevSpeed = ceilingFan->getSpeed();
	}
 	public: void execute() const {
		_prevSpeed = _ceilingFan->getSpeed();
		_ceilingFan->high();
	}
 	public: void undo() const {
		if (_prevSpeed == CeilingFan::HIGH) {
			_ceilingFan->high();
		} else if (_prevSpeed == CeilingFan::MEDIUM) {
			_ceilingFan->medium();
		} else if (_prevSpeed == CeilingFan::LOW) {
			_ceilingFan->low();
		} else if (_prevSpeed == CeilingFan::OFF) {
			_ceilingFan->off();
		}
	}
};

} // namespace Undo
} // namespace Command
} // namespace HeadFirstDesignPatterns

#endif