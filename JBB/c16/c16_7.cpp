#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

vector<int> Lotto(int numbers, int choices){
  if(choices>numbers){ throw "Invalid arguments for the Lotto function"; }
  vector<int>ve;
  for(int i=1;i<=numbers;i++){ ve.push_back(i); }
  random_shuffle(ve.begin(),ve.end());
  ve.resize(choices);
  return ve;
}

int main(){
  srand(time(0)); vector<int>vctr;

  cout << "Enter the number of fields and selections: ";
  int numbers; 
  int choices;
  while(std::cin >> numbers >> choices){
    try{
      vctr = Lotto(numbers,choices);
    }
    catch(const char * str){
      cout << str << ". " << "End the program.\n";
      return 1;
    }
    cout << "Numbers drawn: ";
    for(const auto & ve : vctr){ cout << ve << " "; } cout << '\n';
    cout << "Enter the next pair(q to end): ";
  }
  cout << "Bye\n";
}