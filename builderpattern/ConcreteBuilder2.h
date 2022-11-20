#ifndef BUILDER_PATTERN_CONCRETE_BUILDER2_H___
#define BUILDER_PATTERN_CONCRETE_BUILDER2_H___

#include "Builder.h"
#include "Product.h"

class ConcreteBuilder2 : public Builder
{
 public:
  void buildPartA() override { product->add("part X"); }
  void buildPartB() override { product->add("part Y"); }
  Product* getResult() override { return product; }
 private:
  Product* product = new Product();
};

#endif // BUILDER_PATTERN_CONCRETE_BUILDER1_H___
