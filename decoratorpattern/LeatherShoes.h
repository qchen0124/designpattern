#ifndef DECORATOR_PATTERN_LEATHER_SHOES_H___
#define DECORATOR_PATTERN_LEATHER_SHOES_H___

#include "Finery.h"

// Concrete Decorator
class LeatherShoes : public Finery
{
 public:
  void show() override
  {
    std::cout << "Leather Shoes" << std::endl;
    Finery::show();
  }
};

#endif // DECORATOR_PATTERN_LEATHER_SHOES_H___
