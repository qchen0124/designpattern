#ifndef DECORATOR_PATTERN_SUIT_H___
#define DECORATOR_PATTERN_SUIT_H___

#include "Finery.h"

// Concrete Decorator
class Suit : public Finery
{
 public:
  void show() override
  {
    std::cout << "Suit" << std::endl;
    Finery::show();
  }
};

#endif // DECORATOR_PATTERN_SUIT_H___
