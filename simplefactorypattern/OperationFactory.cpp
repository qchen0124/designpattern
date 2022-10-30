#include "OperationFactory.h"
#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

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

std::unique_ptr<Operation> OperationFactory::createOperate(std::string operate)
{
  std::unique_ptr<Operation> oper = nullptr;
  switch (hashit(operate))
  {
    case string_operator::add:
      oper = std::make_unique<OperationAdd>();
      break;
    case string_operator::sub:
      oper = std::make_unique<OperationSub>();
      break;
    case string_operator::mul:
      oper = std::make_unique<OperationMul>();
      break;
    case string_operator::div:
      oper = std::make_unique<OperationDiv>();
      break;
    default:
      break;
  }

  return oper;
}
