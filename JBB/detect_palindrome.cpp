#include <iostream>
#include <algorithm>


bool isPalindrome(const std::string & str);

int main(){
  using namespace std;
  cout << "Enter a phrase: ";
  string phr; getline(cin,phr);

  while(phr!=""){
    cout << "Phrase \"" << phr << "\"";
    if(isPalindrome(phr)){
      cout << " is palindrome.\n";
    }else{
      cout << " isn't' palindrome.\n";
    }
    cout << "Enter a next phrase(blank line ends input):\n";
    getline(cin,phr);
  }

  cout << "End\n";
}

bool isPalindrome(const std::string & str){
  std::string rv = str;
  reverse(rv.begin(),rv.end());
  return (rv == str);
}