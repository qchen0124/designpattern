#ifndef FACTORY_METHOD_PATTERN_MUL_FACTORY_H___
#define FACTORY_METHOD_PATTERN_MUL_FACTORY_H___

#include "IFactory.h"
#include "OperationMul.h"

class MulFactory : public IFactory
{
 public:
  Operation* createOperation() override { return new OperationMul(); }
};

#endif // FACTORY_METHOD_PATTERN_MUL_FACTORY_H___
