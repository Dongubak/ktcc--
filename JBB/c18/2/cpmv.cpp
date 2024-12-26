#include "cpmv.h"

Cpmv::Cpmv(){
  std::cout << "Default constructor\n";
  pi = new Info; pi->qcode = "0000"; pi->zcode = "0000";
}

Cpmv::Cpmv(std::string q, std::string z){
  std::cout << "Constructor with string parameters\n";
  pi = new Info; pi->qcode = q; pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv & cp){
  std::cout << "Copy constructor\n";
  pi = new Info; *pi = *cp.pi;
}

Cpmv::Cpmv(Cpmv && mv){
  std::cout << "Transfer constructor\n";
  pi = mv.pi; mv.pi = nullptr;
}

Cpmv & Cpmv::operator=(const Cpmv & cp){
  std::cout << "Assignment operator\n";
  if(this != &cp){ delete pi; pi = new Info; *pi = *cp.pi; }
  return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv){
  std::cout << "The transfer assignment operator\n";
  if(this != &mv){ delete pi; pi = mv.pi; mv.pi = nullptr; }
  return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const{
  std::cout << "Additional operator\n";
  return Cpmv(pi->qcode + obj.pi->qcode, pi->zcode + obj.pi->zcode);
}

Cpmv::~Cpmv(){ delete pi; }

void Cpmv::Display() const{
  using std::cout; using std::endl;
  cout << "Qcode: " << pi->qcode << endl;
  cout << "Zcode: " << pi->zcode << endl;
}