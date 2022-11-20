#include "PersonDirector.h"
#include "PersonThinBuilder.h"

#include "Director.h"
#include "ConcreteBuilder1.h"
#include "ConcreteBuilder2.h"

int main(int argc, char* argv[])
{
  // example 1: person builder
  std::unique_ptr<PersonBuilder> pb = std::make_unique<PersonThinBuilder>();
  std::unique_ptr<PersonDirector> pdThin = std::make_unique<PersonDirector>(std::move(pb));
  std::cout << "create thin person" << std::endl;
  pdThin->createPerson();

  // example 2: general builder example
  std::unique_ptr<Director> director = std::make_unique<Director>();
  std::shared_ptr<Builder> b1 = std::make_shared<ConcreteBuilder1>();
  std::shared_ptr<Builder> b2 = std::make_shared<ConcreteBuilder2>();

  std::cout << "construct the concrete builder1" << std::endl;
  director->construct(b1);
  std::unique_ptr<Product> p1(b1->getResult());
  p1->show();

  std::cout << "construct the concrete builder2" << std::endl;
  director->construct(b2);
  std::unique_ptr<Product> p2(b2->getResult());
  p2->show();
}
