#include "Planner.hpp"

using namespace HeadFirstDesignPatterns::Builder;

int main(int argc, char* argv[]) {  argc; argv;	// warning C4100
	int value = 0;

	Client client(new VacationBuilder());

	std::auto_ptr<Vacation> vacation(client.constructPlanner());
	vacation->printItinerary();	

	return value;
}
