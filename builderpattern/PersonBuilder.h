#ifndef BUILDER_PATTERN_PERSON_BUILDER_H___
#define BUILDER_PATTERN_PERSON_BUILDER_H___

class PersonBuilder
{
public:
  virtual void buildHead() = 0;
  virtual void buildBody() = 0;
  virtual void buildArmLeft() = 0;
  virtual void buildArmRight() = 0;
  virtual void buildLegLeft() = 0;
  virtual void buildLegRight() = 0;
};

#endif // BUILDER_PATTERN_PERSON_BUILDER_H___
