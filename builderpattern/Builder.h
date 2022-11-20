#ifndef BUILDER_PATTERN_BUILDER_H___
#define BUILDER_PATTERN_BUILDER_H___

class Product;

class Builder
{
 public:
  virtual void buildPartA() = 0;
  virtual void buildPartB() = 0;
  virtual Product* getResult() = 0;
};

#endif // BUILDER_PATTERN_BUILDER_H___
