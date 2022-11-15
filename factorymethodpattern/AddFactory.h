#ifndef FACTORY_METHOD_PATTERN_ADD_FACTORY_H___
#define FACTORY_METHOD_PATTERN_ADD_FACTORY_H___

#include "IFactory.h"
#include "OperationAdd.h"

class AddFactory : public IFactory
{
 public:
  Operation* createOperation() override { return new OperationAdd(); }
};

#endif // FACTORY_METHOD_PATTERN_ADD_FACTORY_H___
