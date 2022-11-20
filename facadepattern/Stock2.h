#ifndef FACADE_PATTERN_STOCK2_H___
#define FACADE_PATTERN_STOCK2_H___

#include <iostream>

class Stock2
{
public:
  void sell() { std::cout << "stock2 sell" << std::endl; }
  void buy() { std::cout << "stock2 buy" << std::endl; }
};

#endif // FACADE_PATTERN_STOCK2_H___
