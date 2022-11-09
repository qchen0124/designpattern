#ifndef PROXY_PATTERN_GIVE_GIFT_H___
#define PROXY_PATTERN_GIVE_GIFT_H___

class GiveGift
{
 public:
  virtual void giveDolls() = 0;
  virtual void giveFlowers() = 0;
  virtual void giveChocolate() = 0;
};

#endif // PROXY_PATTERN_GIVE_GIFT_H___
