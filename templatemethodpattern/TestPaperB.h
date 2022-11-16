#ifndef TEMPLATE_METHOD_PATTERN_TEST_PAPER_B_H___
#define TEMPLATE_METHOD_PATTERN_TEST_PAPER_B_H___

#include "TestPaper.h"

class TestPaperB : public TestPaper
{
protected:
  std::string answer1() override { return "c"; }
  std::string answer2() override { return "c"; }
  std::string answer3() override { return "c"; }
};

#endif // TEMPLATE_METHOD_PATTERN_TEST_PAPER_B_H___
