#ifndef	_HEAD_FIRST_DESIGN_PATTERNS_OBSERVER_SUBJECT_HPP_
#define _HEAD_FIRST_DESIGN_PATTERNS_OBSERVER_SUBJECT_HPP_

#include "WeatherStation.hpp"

namespace HeadFirstDesignPatterns {
namespace Observer {

class Subject {
	public: virtual void registerObserver(Observer* o) = 0;
	public: virtual void removeObserver(Observer* o) = 0;
	public: virtual void notifyObservers() const = 0;
	protected: virtual ~Subject() = 0 {
	};
};

} // namespace Observer
} // namespace HeadFirstDesignPatterns

#endif