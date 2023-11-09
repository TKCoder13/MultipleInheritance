#pragma once

#include <iostream>
#include "Base1.h"
#include "Base2.h"
// #include "Derive.cpp"

using namespace std;

// -- public inherit from the base class,
//    all public methods in base available
//    to the outside world
class Derive : public Base1, public Base2
{
public: // -- methods (member functions)
  Derive();  // -- default constructor
  virtual ~Derive(); // -- destructor 


  // -- to correct the ambiguities brought on by multiple
  //    inheritance, one may use the renaming technique
  void NonVirtualMethodBase1();
  void NonVirtualMethodBase2();

  void VirtualMethodBase1();
  void VirtualMethodBase2();

private: 

public: // -- attributes (member variables)


private:

};


