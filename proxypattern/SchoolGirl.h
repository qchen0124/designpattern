#ifndef PROXY_PATTERN_SCHOOL_GIRL_H___
#define PROXY_PATTERN_SCHOOL_GIRL_H___

#include <string>

class SchoolGirl
{
 public:
  SchoolGirl(std::string name) { this->name = name; }
  std::string getName() { return name; }
 private:
  std::string name;
};

#endif // PROXY_PATTERN_SCHOOL_GIRL_H___
