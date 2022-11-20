#ifndef BUILDER_PATTERN_PERSON_DIRECTOR_H___
#define BUILDER_PATTERN_PERSON_DIRECTOR_H___

#include "PersonThinBuilder.h"
#include <memory>

class PersonDirector
{
 public:
  PersonDirector(std::unique_ptr<PersonBuilder> pb) : pb(std::move(pb)) { }

  void createPerson()
  {
    pb->buildHead();
    pb->buildBody();
    pb->buildArmLeft();
    pb->buildArmRight();
    pb->buildLegLeft();
    pb->buildLegRight();
  }
 private:
  std::unique_ptr<PersonBuilder> pb;
};

#endif // BUILDER_PATTERN_PERSON_DIRECTOR_H___
