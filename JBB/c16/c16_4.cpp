#include <iostream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int reduce(long ar[], int n){
  sort(ar,ar+n); long * end = unique(ar,ar+n);
  return end - ar;
}

int main(){
  const int SIZE = 7;
  long arr[SIZE] = {99,15,7,1,15,1,15};

  cout << "Original array: ";
  for(int i=0;i<SIZE;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  int newSize = reduce(arr,SIZE);

  cout << "Sorted array without duplicates: ";
  for(int i=0;i<newSize;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Bye.\n";
}