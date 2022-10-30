#ifndef SIMPLE_FACTORY_PATTERIN_OPERATION_FACTORY_H___
#define SIMPLE_FACTORY_PATTERIN_OPERATION_FACTORY_H___

#include "Operation.h"
#include <string>
#include <memory>

class OperationFactory
{
 public:
  static std::unique_ptr<Operation> createOperate(std::string operate);
};

#endif // SIMPLE_FACTORY_PATTERIN_OPERATION_FACTORY_H___
