#ifndef DECORATOR_PATTERN_BIG_TROUSER_H___
#define DECORATOR_PATTERN_BIG_TROUSER_H___

#include "Finery.h"

// Concrete Decorator
class BigTrouser : public Finery
{
 public:
  void show() override
  {
    std::cout << "Big Trouser" << std::endl;
    Finery::show();
  }
};

#endif // DECORATOR_PATTERN_BIG_TROUSER_H___
