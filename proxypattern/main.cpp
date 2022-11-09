#include "SchoolGirl.h"
#include "Proxy.h"

int main(int argc, char* argv[])
{
  std::unique_ptr<SchoolGirl> mm = std::make_unique<SchoolGirl>("mm");
  std::unique_ptr<Proxy> B = std::make_unique<Proxy>(std::move(mm));
  B->giveDolls();
  B->giveFlowers();
  B->giveChocolate();
}
