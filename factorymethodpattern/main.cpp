#include "AddFactory.h"
#include "DivFactory.h"
#include "MulFactory.h"
#include "SubFactory.h"
#include <memory>
#include <iostream>

namespace
{
  enum string_operator {add, sub, mul, div, none};

  string_operator hashit(std::string const& inString)
  {
    if (inString == "+") return add;
    else if (inString == "-") return sub;
    else if (inString == "*") return mul;
    else if (inString == "/") return div;
    else return none;
  }
}

int main()
{
  double numberA = 0;
  double numberB = 0;
  std::string operatorStr = "";

  std::cout << "Enter you first number: ";
  std::cin >> numberA;
  std::cout << "select operation (+,-,*,/): ";
  std::cin >> operatorStr;
  std::cout << "Enter you second number: ";
  std::cin >> numberB;
  std::cout << "numberA: " << numberA << ", operation: " << operatorStr << ", numberB: " << numberB << std::endl;

  std::unique_ptr<IFactory> operFactory = nullptr;
  switch (hashit(operatorStr))
  {
    case string_operator::add:
      operFactory = std::make_unique<AddFactory>();
      break;
    case string_operator::sub:
      operFactory = std::make_unique<SubFactory>();
      break;
    case string_operator::mul:
      operFactory = std::make_unique<MulFactory>();
      break;
    case string_operator::div:
      operFactory = std::make_unique<DivFactory>();
      break;
    default:
      break;
  }

  if (operFactory != nullptr)
  {
    std::unique_ptr<Operation> oper = std::unique_ptr<Operation>(operFactory->createOperation());
    double result = oper->operation(numberA, numberB);
    std::cout << "result: " << result << std::endl;
  }

  return 0;
}