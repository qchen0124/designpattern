#ifndef FACADE_PATTERN_STOCK1_H___
#define FACADE_PATTERN_STOCK1_H___

#include <iostream>

class Stock1
{
 public:
  void sell() { std::cout << "stock1 sell" << std::endl; }
  void buy() { std::cout << "stock1 buy" << std::endl; }
};

#endif // FACADE_PATTERN_STOCK1_H___
