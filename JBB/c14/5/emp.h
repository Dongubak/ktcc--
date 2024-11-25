#ifndef EMP__H__
#define EMP__H__
#include <iostream>
#include <string>

class abstr_emp{
private:
  std::string fname;
  std::string lname;
  std::string job;
public:
  abstr_emp() : fname(), lname(), job(){}
  abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
  : fname(fn), lname(ln), job(j){}
  virtual void ShowAll()const;
  virtual void SetAll();
  friend std::ostream & operator<<(std::ostream & os,const abstr_emp & e);
  virtual ~abstr_emp() = 0;
};

class employee : public abstr_emp{
public:
  employee(){}
  employee(const std::string & fn, const std::string & ln, const std::string & j)
  : abstr_emp(fn,ln,j){}
};

class manager : virtual public abstr_emp{
private:
  int inchargeof;
protected:
  int InChargeOf()const{ return inchargeof; }
  int & InChargeOf(){ return inchargeof; }
  void Data()const;
  void Set();
public:
  manager() : inchargeof(0) {}
  manager(const std::string & fn, const std::string & ln, const std::string & j, int ico)
  : abstr_emp(fn,ln,j), inchargeof(ico) {}
  manager(const abstr_emp & e, int ico);
  virtual void ShowAll()const override;
  virtual void SetAll()override;
};


class fink : virtual public abstr_emp{
  private:
    std::string reportsto;
  protected:
    const std::string ReportsTo()const{ return reportsto; }
    std::string & ReportsTo() { return reportsto; }
    void Data()const;
    void Set();
  public:
    fink() : reportsto("none"){}
    fink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo)
    : abstr_emp(fn,ln,j), reportsto(rpo){}
    fink(const abstr_emp & e, const std::string & rpo);
    virtual void ShowAll()const override;
    virtual void SetAll()override;
};


class highfink : public manager, public fink{
public:
  highfink(){}
  highfink(const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo, int ico)
  : abstr_emp(fn,ln,j), manager(fn,ln,j,ico), fink(fn,ln,j,rpo){}
  highfink(const abstr_emp & e, const std::string & rpo, int ico);
  highfink(const manager & m, const std::string & rpo);
  void ShowAll()const override;
  void SetAll()override;
};

#endif