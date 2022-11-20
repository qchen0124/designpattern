#ifndef FACADE_PATTERN_FUND_H___
#define FACADE_PATTERN_FUND_H___

#include "Stock1.h"
#include "Stock2.h"
#include "Stock3.h"
#include "NationalDebt1.h"
#include "Realty1.h"
#include <memory>

class Fund
{
 public:
  Fund()
  {
    gu1 = std::make_unique<Stock1>();
    gu2 = std::make_unique<Stock2>();
    gu3 = std::make_unique<Stock3>();
    nd1 = std::make_unique<NationalDebt1>();
    rt1 = std::make_unique<Realty1>();
  }

  void buyFund() { gu1->buy(); gu2->buy(); gu3->buy(); nd1->buy(); rt1->buy(); }
  void sellFund() { gu1->sell(); gu2->sell(); gu3->sell(); nd1->sell(); rt1->sell(); }
 private:
  std::unique_ptr<Stock1> gu1;
  std::unique_ptr<Stock2> gu2;
  std::unique_ptr<Stock3> gu3;
  std::unique_ptr<NationalDebt1> nd1;
  std::unique_ptr<Realty1> rt1;
};

#endif // FACADE_PATTERN_FUND_H___
