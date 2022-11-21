#ifndef OBSERVER_PATTERN_NBA_OBSERVER_H___
#define OBSERVER_PATTERN_NBA_OBSERVER_H___

#include "Observer.h"
#include <iostream>

class NBAObserver : public Observer
{
 public:
  NBAObserver(std::string name) : Observer(name) {}
  void update(std::string action) override
  {
    std::cout << action << " " << name
              << ", close NBA, continue work!" << std::endl;
  }
};

#endif // OBSERVER_PATTERN_NBA_OBSERVER_H___
