#ifndef SIMPLE_FACTORY_PATTERIN_OPERATION_DIV_H___
#define SIMPLE_FACTORY_PATTERIN_OPERATION_DIV_H___

#include "Operation.h"

class OperationDiv : public Operation
{
 public:
  virtual double operation(double numberA, double numberB) override { return numberA / numberB; }
};


#endif // SIMPLE_FACTORY_PATTERIN_OPERATION_DIV_H___
