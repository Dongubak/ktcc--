#include <iostream>

template <typename T>
T average_list(std::initializer_list<T> il){
  T sum = 0; int count = 0;
  for(const auto & vl : il){ sum += vl; count++; }
  return sum / count;
}

int main(){
  using namespace std;

  auto q = average_list({15.4, 10.7, 9.0});
  cout << q << endl;

  cout << average_list({20, 30, 19, 17, 45, 38}) << endl;

  auto ad = average_list<double>({'A', 70, 65.33});
  cout << ad << endl;

  return 0;
}