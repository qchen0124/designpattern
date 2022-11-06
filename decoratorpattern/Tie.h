#ifndef DECORATOR_PATTERN_TIE_H___
#define DECORATOR_PATTERN_TIE_H___

#include "Finery.h"

class Tie : public Finery
{
 public:
  void show() override
  {
    std::cout << "Tie" << std::endl;
    Finery::show();
  }
};

#endif // DECORATOR_PATTERN_TIE_H___
