#include <iomanip> 
#include <ios> 
#include <iostream> 
using namespace std; 
  
int main() { 
    int num; 
  
    cout << "���� ���� : "; 
	cin >> num;
	cout << "16���� ǥ�� : " << hex 
         << setiosflags(ios::showbase) << num << endl; 
  
    return 0; 
}