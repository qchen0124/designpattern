#ifndef FACADE_PATTERN_STOCK3_H___
#define FACADE_PATTERN_STOCK3_H___

#include <iostream>

class Stock3
{
public:
  void sell() { std::cout << "stock3 sell" << std::endl; }
  void buy() { std::cout << "stock3 buy" << std::endl; }
};

#endif // FACADE_PATTERN_STOCK3_H___
