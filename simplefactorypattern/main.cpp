#include "Operation.h"
#include "OperationFactory.h"
#include <iostream>

int main()
{
  double numberA = 0;
  double numberB = 0;
  std::string operatorStr = "";

  std::cout << "Enter you first number: ";
  std::cin >> numberA;
  std::cout << "select operations (+,-,*,/): ";
  std::cin >> operatorStr;
  std::cout << "Enter you second number: ";
  std::cin >> numberB;
  std::cout << "numberA: " << numberA << ", operation: " << operatorStr << ", numberB: " << numberB << std::endl;

  std::unique_ptr<Operation> oper = OperationFactory::createOperate(operatorStr);
  if (oper != nullptr)
  {
    // try-catch for operation
    double result = oper->operation(numberA, numberB);
    std::cout << "result: " << result << std::endl;
  }

  return 0;
}
