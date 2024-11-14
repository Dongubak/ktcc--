#include <iostream>
#include "wine.h"

using std::cout; 
using std::cin;

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
: std::string(l), years(y), PairArray(ArrayInt(y),ArrayInt(y)){
  for(int i=0;i<years;i++){
    PairArray::first()[i] = yr[i];
    PairArray::second()[i] = bot[i];
  }
}

Wine::Wine(const char * l, int y)
: std::string(l), years(y), PairArray(ArrayInt(y),ArrayInt(y)){
}

void Wine::GetBottles(){
  cout << "Enter " << (const std::string &)*this
       << " data for " << years << " year:\n";
  for(int i=0;i<years;i++){
    cout << "Enter year: ";
    cin >> PairArray::first()[i];
    cout << "Enter bottles for that year: ";
    cin >> PairArray::second()[i];
  }
}

void Wine::Show()const{
  cout << "Wine: " << (const std::string &)*this << '\n';
  cout << "\tYear\tBottles" << '\n';
  for(int i=0;i<years;i++){
    cout << "\t" << PairArray::first()[i] << "\t"
         << PairArray::second()[i] << '\n';
  }
}

const std::string & Wine::Label() const{
  return (const std::string &)*this;
}

int Wine::sum()const{
  int sum = 0;
  for(int i=0;i<years;i++){
    sum += PairArray::second()[i];
  }
  return sum;
}