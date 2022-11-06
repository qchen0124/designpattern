#ifndef DECORATOR_PATTERN_FINERY_H___
#define DECORATOR_PATTERN_FINERY_H___

#include "Person.h"
#include <memory>

// Decorator
class Finery : public Person
{
 public:
  void decorate(std::shared_ptr<Person> component) { this->component = component; }
  void show() override { if (component != nullptr) component->show(); }
 protected:
  std::shared_ptr<Person> component;
};

#endif // DECORATOR_PATTERN_FINERY_H___
