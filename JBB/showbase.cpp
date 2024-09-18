#include <iomanip> 
#include <ios> 
#include <iostream> 
using namespace std; 
  
int main() { 
    int num; 
  
    cout << "숫자 기입 : "; 
	cin >> num;
	cout << "16진수 표기 : " << hex 
         << setiosflags(ios::showbase) << num << endl; 
  
    return 0; 
}