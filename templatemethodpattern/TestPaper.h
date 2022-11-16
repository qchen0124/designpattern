#ifndef TEMPLATE_METHOD_PATTERN_TEST_PAPER_H___
#define TEMPLATE_METHOD_PATTERN_TEST_PAPER_H___

#include <iostream>
#include <string>

class TestPaper
{
 public:
  void testQuestion1()
  {
    std::cout << "Quest1: a.1 b.2 c.3. d.4 Ans: " << answer1() << std::endl;
  }

  void testQuestion2()
  {
    std::cout << "Quest2: a.1 b.2 c.3. d.4 Ans: " << answer2() << std::endl;
  }

  void testQuestion3()
  {
    std::cout << "Quest3: a.1 b.2 c.3. d.4 Ans: " << answer3() << std::endl;
  }

 protected:
  virtual std::string answer1() = 0;
  virtual std::string answer2() = 0;
  virtual std::string answer3() = 0;
};

#endif // TEMPLATE_METHOD_PATTERN_TEST_PAPER_H___
