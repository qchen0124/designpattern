#ifndef OBSERVER_PATTERN_SUBJECT_H___
#define OBSERVER_PATTERN_SUBJECT_H___

#include <memory>

class Observer;

// interface
class Subject
{
 public:
  virtual void attach(std::shared_ptr<Observer>) = 0;
  virtual void detach(std::shared_ptr<Observer>) = 0;
  virtual void notify(std::string action) = 0;
};

#endif // OBSERVER_PATTERN_SUBJECT_H___
