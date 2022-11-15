#ifndef PROTOTYPE_PATTERN_RESUME_H___
#define PROTOTYPE_PATTERN_RESUME_H___

#include "WorkExperience.h"
#include <iostream>

class Resume
{
 public:
  Resume(std::string name) { this->name = name; workExp = new WorkExperience(); }

  // shallow copy
  /*
  Resume(Resume* const ref)
  {
    this->name = ref->name;
    this->sex = ref->sex;
    this->age = ref->age;
    this->workExp = ref->workExp;
  }
   */

  // deep copy
  Resume(const Resume& ref)
  {
    this->name = ref.name;
    this->sex = ref.sex;
    this->age = ref.age;
    this->workExp = new WorkExperience();
    this->workExp->workDate = ref.workExp->workDate;
    this->workExp->company  = ref.workExp->company;
  }

  void setPersonalInfo(std::string sex, std::string age) { this->sex = sex; this->age = age; }

  void setWorkExperience(std::string workDate, std::string company)
  {
    workExp->workDate = workDate;
    workExp->company  = company;
  }

  void display()
  {
    std::cout << name << ", " << sex << ", " << age << std::endl
              << "WorkExperience: " << workExp->workDate << " " << workExp->company << std::endl;
  }
 private:
  std::string name;
  std::string sex;
  std::string age;
  WorkExperience* workExp;
};

#endif // PROTOTYPE_PATTERN_RESUME_H___
