#include "Boss.h"
#include "Secretary.h"
#include "NBAObserver.h"
#include "StockObserver.h"

int main(int argc, char* argv[])
{
  // scene 1: the secretary mm notify to all colleges.
  std::unique_ptr<Secretary> mm = std::make_unique<Secretary>();
  std::shared_ptr<StockObserver> college1 = std::make_shared<StockObserver>("wei");
  std::shared_ptr<StockObserver> college2 = std::make_shared<StockObserver>("he");
  std::shared_ptr<NBAObserver> college3 = std::make_shared<NBAObserver>("xia");

  mm->attach(college1);
  mm->attach(college2);
  mm->attach(college3);

  std::string actionSecretary="Boss come back!";
  mm->notify(actionSecretary);

  // scene 2: the boss huhansan notify to college1 ONLY!
  std::unique_ptr<Boss> huhansan = std::make_unique<Boss>();
  huhansan->attach(college1);
  huhansan->attach(college2);
  huhansan->attach(college3);

  // college2 and college3 are not notified from boss, is catched!
  huhansan->detach(college2);
  huhansan->detach(college3);

  std::string actionBoss="I am back!";
  huhansan->notify(actionBoss);
}
