#ifndef PERSON__H__
#define PERSON__H__

class Citizen{
private:
  std::string fname;
  std::string lname;
public:
  Citizen() : fname("none"), lname("none") {}
  Citizen(const char * first, const char * last) : fname(first), lname(last) {}
  virtual void Show()const;
  virtual void Set();
  virtual ~Citizen(){};
};

class Gunslinger : virtual public Citizen{
private:
  float time;
  int scores;
public:
  Gunslinger() : Citizen(), time(0), scores(0) {}
  Gunslinger(const char * first, const char * , float t, int sc);
  void Show()const override;
  void Set() override;
  float Draw()const;
};

class Card{
public:
  enum Suit{ HEARTS, CLUBS, SPADES, DIAMONDS };
private:
  int number;
  Suit suit;
public:
  Card(int num = 1,Suit st = CLUBS);
  void Show()const;
};

class PokerPlayer : virtual public Citizen{
  public:
    PokerPlayer() : Citizen(){}
    PokerPlayer(const char * first, const char * last);
    Card Draw()const;
};

class LawBreaker : public Gunslinger, public PokerPlayer{
public:
  LawBreaker(){}
  LawBreaker(const char * first, const char * last, float t, float sc);
  float GDraw()const;
  Card CDraw()const;
  void Show()const override;
};

#endif