#ifndef OBSERVER_PATTERN_OBSERVER_H___
#define OBSERVER_PATTERN_OBSERVER_H___

#include <string>

// abstract class
class Observer
{
 public:
  Observer(std::string name) : name(name) {}
  virtual void update(std::string action) = 0;
 protected:
  std::string name;
};

#endif // OBSERVER_PATTERN_OBSERVER_H___
