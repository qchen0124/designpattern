#ifndef DECORATOR_PATTERN_SNEAKERS_H___
#define DECORATOR_PATTERN_SNEAKERS_H___

#include "Finery.h"

// Concrete Decorator
class Sneakers : public Finery
{
 public:
  void show() override
  {
    std::cout << "Sneakers" << std::endl;
    Finery::show();
  }
};

#endif // DECORATOR_PATTERN_SNEAKERS_H___
