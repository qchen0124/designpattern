#ifndef FACTORY_METHOD_PATTERN_DIV_FACTORY_H___
#define FACTORY_METHOD_PATTERN_DIV_FACTORY_H___

#include "IFactory.h"
#include "OperationDiv.h"

class DivFactory : public IFactory
{
 public:
  Operation* createOperation() override { return new OperationDiv(); }
};

#endif // FACTORY_METHOD_PATTERN_DIV_FACTORY_H___
