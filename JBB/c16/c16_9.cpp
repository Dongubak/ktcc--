#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <list>
#include <algorithm>

using namespace std;

const int SIZE = 500000;
const int LIMIT = SIZE*10;

int main(){
  std::srand(std::time(0));
  vector<int>vi0;

  for(int i=0;i<SIZE;i++){ vi0.push_back(rand() % LIMIT); }

  vector<int>vi(vi0);
  list<int>li(vi0.begin(),vi0.end());

  clock_t start = clock();
  std::sort(vi.begin(),vi.end());
  clock_t end = clock();
  cout << "Sort vector: ";
  cout << (double)(end-start)/CLOCKS_PER_SEC << endl;

  start = clock();
  li.sort();
  end = clock();
  cout << "Sort list: ";
  cout << (double)(end-start)/CLOCKS_PER_SEC << endl;

  li.assign(vi0.begin(),vi0.end());

  start = clock();
  vi.assign(li.begin(),li.end());
  sort(vi.begin(),vi.end());
  li.assign(vi.begin(),vi.end());
  end = clock();

  cout << "Sort a list using a vector: ";
  cout << (double)(end-start)/CLOCKS_PER_SEC << endl;
  
  return 0;
}