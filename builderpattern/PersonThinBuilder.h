#ifndef BUILDER_PATTERN_PERSON_THIN_BUILDER_H___
#define BUILDER_PATTERN_PERSON_THIN_BUILDER_H___

#include "PersonBuilder.h"
#include <iostream>

class PersonThinBuilder : public PersonBuilder
{
 public:
  virtual void buildHead() override { std::cout << "build head" << std::endl; }
  virtual void buildBody() override { std::cout << "build body" << std::endl; }
  virtual void buildArmLeft() override { std::cout << "build arm left" << std::endl; }
  virtual void buildArmRight() override { std::cout << "build arm right" << std::endl; }
  virtual void buildLegLeft() override { std::cout << "build leg left" << std::endl; }
  virtual void buildLegRight() override { std::cout << "build leg right" << std::endl; }
};

#endif // BUILDER_PATTERN_PERSON_THIN_BUILDER_H___
