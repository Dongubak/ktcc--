#include <iostream>
#include <cstdlib>
#include <ctime>
#include "person.h"

void Citizen::Set(){
  std::cout << "Enter first name: ";
  getline(std::cin,fname);
  std::cout << "Enter last name: ";
  getline(std::cin,lname);
}

void Citizen::Show()const{
  std::cout << "First name: " << fname << std::endl;
  std::cout << "Last name: " << lname << std::endl;
}

Card::Card(int num,Suit st)
: number(num), suit(st) {
}

void Card::Show()const{
  using std::cout; using std::endl;
  cout << "Card number: " << number << endl;
  cout << "Card suits: ";
  switch(suit){
    case 0: cout << "Hearts"; break;
    case 1: cout << "Clubs"; break;
    case 2: cout << "Spades"; break;
    case 3: cout << "Diamonds"; break;
  }
  cout << endl;
}

Gunslinger::Gunslinger(const char * first, const char * last, float t,int sc)
: Citizen(first,last), time(t), scores(sc){
}

void Gunslinger::Set(){
  Citizen::Set();
  std::cout << "Enter the time to draw the revolver: ";
  std::cin >> time;
  std::cout << "Enter the number of scores on the revolver: ";
  std::cin >> scores;
}

float Gunslinger::Draw()const{
  return time;
}

void Gunslinger::Show()const{
  using std::cout; using std::endl;
  Citizen::Show();
  std::cout << "Draw time: " << Draw() << std::endl;
  std::cout << "Number of scores: "
            << scores << std::endl;
}

PokerPlayer::PokerPlayer(const char * first, const char * last)
: Citizen(first,last){
}

Card PokerPlayer::Draw()const{
  std::srand(std::time(0));
  int n = rand() % 52 + 1;
  int c = rand() % 4;
  return Card(n,(Card::Suit)c);
}

LawBreaker::LawBreaker(const char * first, const char * last,float t, float sc)
: Citizen(first,last), Gunslinger(first,last,t,sc), PokerPlayer(first,last){
}

float LawBreaker::GDraw()const{
  return Gunslinger::Draw();
}

Card LawBreaker::CDraw()const{
  return PokerPlayer::Draw();
}

void LawBreaker::Show()const{
  Gunslinger::Show();
}