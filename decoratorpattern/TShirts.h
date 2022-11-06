#ifndef DECORATOR_PATTERN_TSHIRTS_H___
#define DECORATOR_PATTERN_TSHIRTS_H___

#include "Finery.h"

// Concrete Decorator
class TShirts : public Finery
{
 public:
  void show() override
  {
    std::cout << "Big T-Shirts" << std::endl;
    Finery::show();
  }
};

#endif // DECORATOR_PATTERN_TSHIRTS_H___
