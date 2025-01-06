#include <iostream>
#include <algorithm>
#include <set>

char toLower(char ch){
	return tolower(ch);
}

bool isPalindrome(const std::string & str){
  
  using std::string; 
  
  string orig = str;
  orig.erase(std::remove_if(orig.begin(), orig.end(), isspace), orig.end());
  transform(orig.begin(),orig.end(),orig.begin(),toLower);
  string rv = orig;
  reverse(rv.begin(),rv.end());
  return (rv == orig);
}

int main(){
	using namespace std;
	string phr;
	
	cout << "Enter a phrase(blank line ends input): "; 
	getline(cin,phr);

  while(phr!=""){
    cout << "Phrase \"" << phr << "\"";
    if(isPalindrome(phr)){
      cout << " is palindrome.\n";
    }else{
      cout << " isn't palindrome.\n";
    }
    cout << "Enter a next phrase: ";
    getline(cin,phr);
  }

  cout << "End\n";
}