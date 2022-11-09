#ifndef PROXY_PATTERN_PURSUIT_H___
#define PROXY_PATTERN_PURSUIT_H___

#include "GiveGift.h"
#include "SchoolGirl.h"
#include <memory>
#include <iostream>

class Pursuit : public GiveGift
{
 public:
  Pursuit(std::unique_ptr<SchoolGirl> mm) : mm(std::move(mm)) {}
  void giveDolls() override { std::cout << mm->getName() << " give you dolls" << std::endl; }
  void giveFlowers() override { std::cout << mm->getName() << " give you flowers" << std::endl; }
  void giveChocolate() override { std::cout << mm->getName() << " give you choco" << std::endl; }
 private:
  std::unique_ptr<SchoolGirl> mm;
};

#endif // PROXY_PATTERN_PURSUIT_H___
