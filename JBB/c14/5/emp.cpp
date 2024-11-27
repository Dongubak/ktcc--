#include "emp.h"

void abstr_emp::ShowAll()const{
  using std::cout; using std::endl;
  cout << "First name: " << fname << endl;
  cout << "Last name: " << lname << endl;
  cout << "Job: " << job << endl;
}

void abstr_emp::SetAll(){
  using std::cout; using std::cin;
  cout << "Enter first name: ";
  cin.ignore();
  getline(cin,fname);
  cout << "Enter last name: ";
  cin.ignore();
  getline(cin,lname);
  cout << "Enter job: ";
  cin.ignore();
  getline(cin,job);
}

abstr_emp::~abstr_emp(){}


std::ostream & operator<<(std::ostream & os,const abstr_emp & e){
  os << e.fname << " " << e.lname;
  return os;
}

manager::manager(const abstr_emp & e, int ico)
: abstr_emp(e), inchargeof(ico){
}


void manager::Data()const{
  std::cout << "Emplyees: " << inchargeof << std::endl;
}

void manager::ShowAll()const{
  abstr_emp::ShowAll(); Data();
}

void manager::Set(){
  std::cout << "Enter the number of emplyees: ";
  std::cin >> inchargeof; std::cin.get();
}

void manager::SetAll(){
  abstr_emp::SetAll(); Set();
}

fink::fink(const abstr_emp & e, const std::string & rpo)
: abstr_emp(e), reportsto(rpo){
}


void fink::Data()const{
  std::cout << "Send reports to " << ReportsTo() << std::endl;
}

void fink::ShowAll()const{
  abstr_emp::ShowAll(); Data();
}

void fink::Set(){
  std::cout << "Who to send reports to: ";
  getline(std::cin,ReportsTo());
}

void fink::SetAll(){
  abstr_emp::SetAll(); Set();
}

highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico)
: abstr_emp(e), fink(e,rpo), manager(e,ico){
}

highfink::highfink(const manager & m, const std::string & rpo)
: abstr_emp(m),fink(m,rpo), manager(m){
}

void highfink::ShowAll()const{
  abstr_emp::ShowAll(); manager::Data(); fink::Data();
}

void highfink::SetAll(){
  abstr_emp::SetAll(); manager::Set(); fink::Set();
}