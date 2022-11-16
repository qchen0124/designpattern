#include "TestPaperA.h"
#include "TestPaperB.h"
#include <memory>

int main(int argc, char* argv[])
{
  std::cout << "student A testPaper: " << std::endl;
  std::unique_ptr<TestPaper> studentA = std::make_unique<TestPaperA>();
  studentA->testQuestion1();
  studentA->testQuestion2();
  studentA->testQuestion3();
  std::cout << "student B testPaper: " << std::endl;
  std::unique_ptr<TestPaper> studentB = std::make_unique<TestPaperB>();
  studentB->testQuestion1();
  studentB->testQuestion2();
  studentB->testQuestion3();
}