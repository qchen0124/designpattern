#ifndef SIMPLE_FACTORY_PATTERIN_OPERATION_MUL_H___
#define SIMPLE_FACTORY_PATTERIN_OPERATION_MUL_H___

#include "Operation.h"

class OperationMul : public Operation
{
 public:
  virtual double operation(double numberA, double numberB) override;
};


#endif // SIMPLE_FACTORY_PATTERIN_OPERATION_MUL_H___
