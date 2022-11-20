#ifndef FACADE_PATTERN_NATIONAL_DEBT1_H___
#define FACADE_PATTERN_NATIONAL_DEBT1_H___

#include <iostream>

class NationalDebt1
{
public:
  void sell() { std::cout << "national debt1 sell" << std::endl; }
  void buy() { std::cout << "national debt1 buy" << std::endl; }
};

#endif // FACADE_PATTERN_NATIONAL_DEBT1_H___
