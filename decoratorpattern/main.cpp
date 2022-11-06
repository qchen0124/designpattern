#include "Person.h"
#include "BigTrouser.h"
#include "LeatherShoes.h"
#include "Sneakers.h"
#include "Suit.h"
#include "Tie.h"
#include "TShirts.h"

int main(int argc, char* argv[])
{
  std::shared_ptr<Person> cq = std::make_shared<Person>("CQ");
  std::shared_ptr<Sneakers> sneakers         = std::make_shared<Sneakers>();
  std::shared_ptr<BigTrouser> bigTrouser     = std::make_shared<BigTrouser>();
  std::shared_ptr<TShirts> tShirts           = std::make_shared<TShirts>();
  std::shared_ptr<LeatherShoes> leatherShoes = std::make_shared<LeatherShoes>();
  std::shared_ptr<Tie> tie                   = std::make_shared<Tie>();
  std::shared_ptr<Suit> suit                 = std::make_shared<Suit>();

  std::cout << std::endl << "first cosplay: " << std::endl;
  sneakers->decorate(cq);
  bigTrouser->decorate(sneakers);
  tShirts->decorate(bigTrouser);
  tShirts->show();

  std::cout << std::endl << "second cosplay: " << std::endl;
  leatherShoes->decorate(cq);
  tie->decorate(leatherShoes);
  suit->decorate(tie);
  suit->show();

  std::cout << std::endl << "third cosplay: " << std::endl;
  sneakers->decorate(cq);
  leatherShoes->decorate(sneakers);
  bigTrouser->decorate(leatherShoes);
  tie->decorate(bigTrouser);
  tie->show();

  return 0;
}