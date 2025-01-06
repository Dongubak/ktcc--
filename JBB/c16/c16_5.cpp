#include <iostream>
#include <algorithm>

template <class T>
int reduce(T ar[], int n){
  std::sort(ar,ar+n); T * end = std::unique(ar,ar+n);
  return end - ar;
}

template <class T>
void show(T a){ std::cout << a << " "; }

int main(){

  using std::cout; using std::endl;
  const int SIZE = 7;
  long arr[SIZE] = {99,15,7,1,15,1,15};

  cout << "Original array: ";
  for(int i=0;i<SIZE;i++){ show(arr[i]); } cout << endl;

  cout << "Sorted array without duplicates: ";
  int newSize = reduce(arr,SIZE);
  for(int i=0;i<newSize;i++){ show(arr[i]); } cout << endl;

  std::string stringArr[SIZE] = {
    "zebra", "aligator", "canary",
    "whale", "aligator", "whale", "aligator"
  };

  cout << "Original array: ";
  for(int i=0;i<SIZE;i++){ show(stringArr[i]); } cout << endl;

  cout << "Sorted array without duplicates: ";
  newSize = reduce(stringArr,SIZE);
  for(int i=0;i<newSize;i++){ show(stringArr[i]); }

  cout << "\nBye.\n";
}