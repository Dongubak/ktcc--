#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

struct Person{
  string name;
  set<string>friends;
};

void enterNames(Person & p){
  
  string name;
  
  cout << "Enter the names of the " << p.name << "'s friends. ";
  cout << "A blank line ends your input:\n";
  cout << "Enter name: ";
  getline(cin,name);
  while(name!=""){
    p.friends.insert(name); cout << "Next name: ";
	getline(cin,name);
  }
}

int main(){

  Person jim; 
  Person dwight;
  jim.name = "Jim"; dwight.name = "Dwight";

  enterNames(jim); 
  enterNames(dwight);

  cout << "***Friends of Jim***\n";
  for(const auto & p : jim.friends){ cout << p << endl; }

  cout << "***Friends of Dwight***\n";
  for(const auto & p : dwight.friends){ cout << p << endl; }

  set<string>guests;

  set_union(jim.friends.begin(),jim.friends.end(),
            dwight.friends.begin(),dwight.friends.end(),
            insert_iterator<set<string>>(guests,guests.begin()));


  cout << "***Birthday guests***\n";
  ostream_iterator<string,char> out(cout,"\n");
  copy(guests.begin(),guests.end(),out);

  cout << "--------------\n";
}