/*
#include "Stock1.h"
#include "Stock2.h"
#include "Stock3.h"
#include "NationalDebt1.h"
#include "Realty1.h"
#include <memory>
*/
#include "Fund.h"

int main(int argc, char* argv[])
{
  /*
  std::unique_ptr<Stock1> gu1 = std::make_unique<Stock1>();
  std::unique_ptr<Stock2> gu2 = std::make_unique<Stock2>();
  std::unique_ptr<Stock3> gu3 = std::make_unique<Stock3>();
  std::unique_ptr<NationalDebt1> nd1 = std::make_unique<NationalDebt1>();
  std::unique_ptr<Realty1> rt1 = std::make_unique<Realty1>();

  gu1->buy(); gu2->buy(); gu3->buy(); nd1->buy(); rt1->buy();
  gu1->sell(); gu2->sell(); gu3->sell(); nd1->sell(); rt1->sell();
   */

  std::unique_ptr<Fund> jijin = std::make_unique<Fund>();
  // buy fund
  jijin->buyFund();
  // sell fund
  jijin->sellFund();
}
