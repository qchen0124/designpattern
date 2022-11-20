#ifndef BUILDER_PATTERN_CONCRETE_BUILDER1_H___
#define BUILDER_PATTERN_CONCRETE_BUILDER1_H___

#include "Builder.h"
#include "Product.h"

class ConcreteBuilder1 : public Builder
{
 public:
  void buildPartA() override { product->add("part A"); }
  void buildPartB() override { product->add("part B"); }
  Product* getResult() override { return product; }
 private:
  Product* product = new Product();
};

#endif // BUILDER_PATTERN_CONCRETE_BUILDER1_H___
