#ifndef OBSERVER_PATTERN_SECRETARY_H___
#define OBSERVER_PATTERN_SECRETARY_H___

#include "Subject.h"
#include "Observer.h"

#include <algorithm>
#include <memory>
#include <set>

class Secretary : public Subject
{
 public:
  void attach(std::shared_ptr<Observer> observer) override { observers.insert(observer); }
  void detach(std::shared_ptr<Observer> observer) override { observers.erase(observer); }
  void notify(std::string action) override
  {
    std::for_each(observers.begin(), observers.end(),
                  [action](std::shared_ptr<Observer> observer)
                  { observer->update(action); });
  }
 private:
  std::set<std::shared_ptr<Observer>> observers;
};

#endif // OBSERVER_PATTERN_SECRETARY_H___
