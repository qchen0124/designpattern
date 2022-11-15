#ifndef FACTORY_METHOD_PATTERN_OPERATION_H___
#define FACTORY_METHOD_PATTERN_OPERATION_H___

class Operation
{
 public:
  virtual double operation(double numberA, double numberB) = 0;
};

#endif // FACTORY_METHOD_PATTERN_OPERATION_H___
