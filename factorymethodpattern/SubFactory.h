#ifndef FACTORY_METHOD_PATTERN_SUB_FACTORY_H___
#define FACTORY_METHOD_PATTERN_SUB_FACTORY_H___

#include "IFactory.h"
#include "OperationSub.h"

class SubFactory : public IFactory
{
 public:
  Operation* createOperation() override { return new OperationSub(); }
};

#endif // FACTORY_METHOD_PATTERN_SUB_FACTORY_H___
