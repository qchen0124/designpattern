#ifndef SIMPLE_FACTORY_PATTERIN_OPERATION_ADD_H___
#define SIMPLE_FACTORY_PATTERIN_OPERATION_ADD_H___

#include "Operation.h"

class OperationAdd : public Operation
{
 public:
  virtual double operation(double numberA, double numberB) override;
};


#endif // SIMPLE_FACTORY_PATTERIN_OPERATION_ADD_H___
