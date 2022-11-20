#ifndef BUILDER_PATTERN_PRODUCT_H___
#define BUILDER_PATTERN_PRODUCT_H___

#include <list>
#include <string>
#include <algorithm>
#include <iostream>

class Product
{
 public:
  void add(std::string part) { parts.push_back(part); }
  void show()
  {
    for (auto it = parts.begin(); it != parts.end(); ++it)
    {
      std::cout << (*it) << std::endl;
    }
  }
 private:
  std::list<std::string> parts;
};

#endif // BUILDER_PATTERN_PRODUCT_H___
