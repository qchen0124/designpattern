#ifndef DECORATOR_PATTERN_PERSON_H___
#define DECORATOR_PATTERN_PERSON_H___

#include <string>
#include <iostream>

// ConcreteComponent
class Person
{
 public:
  Person() {}
  Person(std::string name) { this->name = name; }

  virtual void show() { std::cout << "cosplayer " << name << std::endl; }
 private:
  std::string name;
};

#endif // DECORATOR_PATTERN_CONCRETE_COMPONENT_H___
