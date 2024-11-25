#include <iostream>
#include <algorithm>

using namespace std;

bool isPalindrome(const string & str){
	string rv = str;
	reverse(rv.begin(),rv.end());
	
	return (rv == str);
}

int main(){

  cout << "Enter a phrase(blank line ends input): ";
  string phr; getline(cin,phr);

  while(phr!=""){
    cout << "Phrase \"" << phr << "\"";
    if(isPalindrome(phr)){
      cout << " is palindrome.\n";
    }else{
      cout << " isn't' palindrome.\n";
    }
    cout << "Enter a next phrase:\n";
    getline(cin,phr);
  }

  cout << "End\n";
}