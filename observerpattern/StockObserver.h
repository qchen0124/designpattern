#ifndef OBSERVER_PATTERN_STOCK_OBSERVER_H___
#define OBSERVER_PATTERN_STOCK_OBSERVER_H___

#include "Observer.h"
#include <iostream>

class StockObserver : public Observer
{
 public:
  StockObserver(std::string name) : Observer(name) {}
  void update(std::string action) override
  {
    std::cout << action << " " << name
              << ", close stock, continue work!" << std::endl;
  }
};

#endif // OBSERVER_PATTERN_STOCK_OBSERVER_H___
