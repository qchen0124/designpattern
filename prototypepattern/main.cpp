#include "Resume.h"
#include <memory>

int main(int argc, char* argv[])
{
  std::shared_ptr<Resume> bigBird = std::make_shared<Resume>("BigBird");
  bigBird->setPersonalInfo("man", "29");
  bigBird->setWorkExperience("1998-2000", "XX company");

  std::shared_ptr<Resume> bigBird2 = bigBird;

  std::shared_ptr<Resume> copyBird = std::make_shared<Resume>(*(bigBird.get()));
  copyBird->setPersonalInfo("man", "24");
  copyBird->setWorkExperience("2000-2002", "YY company");

  bigBird->display();
  bigBird2->display();
  copyBird->display();

  std::unique_ptr<Resume> copyBird2 = std::make_unique<Resume>(*(bigBird.get()));
  copyBird2->setPersonalInfo("man", "20");
  copyBird2->setWorkExperience("2000-2002", "ZZ company");
  copyBird2->display();
}