#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>

#define Employee 1
#define Manager 2
#define Fink 3
#define Highfink 4

using namespace std;

const int SLEN = 20;
const int MAX = 3;
//enum kind {Employee, Manager, Fink, Highfink};

class employee
{
public:
    char fname[SLEN];
    char lname[SLEN];
    char job[SLEN];
public:
    employee();
    employee(char * fn, char * ln, char * j);
    employee(const employee & e);
    virtual void ShowAll() const;
    virtual void SetAll();
	virtual void WriteAll(ofstream & fout, int classtype);
	virtual void GetAll(ifstream & fin);
    friend ostream & operator<<(ostream & os, const employee & e);
};

class manager:  virtual public employee
{
protected:
    int inchargeof;
public:
    manager();
    manager(char * fn, char * ln, char * j, int ico = 0);
    manager(const employee & e, int ico);
    manager(const manager & m);
    void ShowAll() const;
    void SetAll();
	void WriteAll(ofstream & fout, int classtype);
	void GetAll(ifstream & fin);
};

class fink: virtual public employee
{
protected:
    char reportsto[SLEN];
public:
    fink();
    fink(char * fn, char * ln, char * j, char * rpo);
    fink(const employee & e, char * rpo);
    fink(const fink & e);
    void ShowAll() const;
    void SetAll();
	void WriteAll(ofstream & fout, int classtype);
	void GetAll(ifstream & fin);
};


class highfink: public manager, public fink
{
public:
    highfink();
    highfink(char * fn, char * ln, char * j, char * rpo, int ico);
    highfink(const employee & e, char * rpo, int ico);
    highfink(const fink & f, int ico);
    highfink(const manager & m, char * rpo);
    highfink(const highfink & h);
    void ShowAll() const;
    void SetAll();
	void WriteAll(ofstream & fout, int classtype);
	void GetAll(ifstream & fin);
};
