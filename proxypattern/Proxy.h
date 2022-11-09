#ifndef PROXY_PATTERN_PROXY_H___
#define PROXY_PATTERN_PROXY_H___

#include "Pursuit.h"
#include <memory>

class Proxy : public GiveGift
{
 public:
  Proxy(std::unique_ptr<SchoolGirl> mm) { gg = std::make_unique<Pursuit>(std::move(mm)); }
  void giveDolls() override { gg->giveDolls(); }
  void giveFlowers() override { gg->giveFlowers(); }
  void giveChocolate() override { gg->giveChocolate(); }
 private:
  std::unique_ptr<Pursuit> gg;
};

#endif // PROXY_PATTERN_PROXY_H___
