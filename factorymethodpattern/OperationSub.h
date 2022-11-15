#ifndef SIMPLE_FACTORY_PATTERIN_OPERATION_SUB_H___
#define SIMPLE_FACTORY_PATTERIN_OPERATION_SUB_H___

#include "Operation.h"

class OperationSub : public Operation
{
 public:
  virtual double operation(double numberA, double numberB) override { return numberA - numberB; }
};


#endif // SIMPLE_FACTORY_PATTERIN_OPERATION_SUB_H___
