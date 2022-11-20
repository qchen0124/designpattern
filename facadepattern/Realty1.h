#ifndef FACADE_PATTERN_REALTY1_H___
#define FACADE_PATTERN_REALTY1_H___

#include <iostream>

class Realty1
{
public:
  void sell() { std::cout << "realty1 sell" << std::endl; }
  void buy() { std::cout << "realty1 buy" << std::endl; }
};

#endif // FACADE_PATTERN_REALTY1_H___
