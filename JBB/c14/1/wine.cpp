#include <iostream>
#include "winec.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
: label(l), years(y), data(ArrayInt(y),ArrayInt(y)){
  for(int i=0;i<y;i++){
    data.first()[i] = yr[i];
    data.second()[i] = bot[i];
  }
}

Wine::Wine(const char * l, int y)
: label(l), years(y), data(ArrayInt(y),ArrayInt(y)){
}

void Wine::GetBottles(){
  using std::cout; using std::cin;
  cout << "Enter " << label
       << " data for " << years << " year:\n";
  for(int i=0;i<years;i++){
    cout << "Enter year: ";
    cin >> data.first()[i];
    cout << " Enter bottles for that year(s): ";
    cin >> data.second()[i];
  }
}

void Wine::Show()const{
  using std::cout; using std::endl;
  cout << "Wine: " << label << endl;
  cout << "\tYear\tBottles" << endl;
  for(int i=0;i<years;i++){
    cout << "\t" << data.first()[i] << "\t"
         << data.second()[i] << endl;
  }
}

const std::string & Wine::Label() const{
  return label;
}

int Wine::sum()const{
  int sum = 0;
  for(int i=0;i<years;i++){
    sum += data.second()[i];
  }
  return sum;
}