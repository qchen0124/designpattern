#ifndef BUILDER_PATTERN_DIRECTOR_H___
#define BUILDER_PATTERN_DIRECTOR_H___

#include "Builder.h"
#include <memory>

class Director
{
 public:
  void construct(std::shared_ptr<Builder> builder)
  {
    builder->buildPartA();
    builder->buildPartB();
  }
};

#endif // BUILDER_PATTERN_DIRECTOR_H___
