#ifndef FACTORY_METHOD_PATTERN_IFACTORY_H___
#define FACTORY_METHOD_PATTERN_IFACTORY_H___

#include "Operation.h"

class IFactory
{
 public:
  virtual Operation* createOperation() = 0;
};

#endif // FACTORY_METHOD_PATTERN_IFACTORY_H___
