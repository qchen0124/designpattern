#ifndef TEMPLATE_METHOD_PATTERN_TEST_PAPER_A_H___
#define TEMPLATE_METHOD_PATTERN_TEST_PAPER_A_H___

#include "TestPaper.h"

class TestPaperA : public TestPaper
{
 protected:
  std::string answer1() override { return "b"; }
  std::string answer2() override { return "b"; }
  std::string answer3() override { return "b"; }
};

#endif // TEMPLATE_METHOD_PATTERN_TEST_PAPER_A_H___
