#pragma once

#include <iostream>
// #include "Base2.cpp"

using namespace std;

// -- inherit from the interface
class Base2 
{
public: // -- methods (member functions)
  Base2();  // -- default constructor
  ~Base2(); // -- destructor 

  void NonVirtualMethod();
  virtual void VirtualMethod();

private: 

public: // -- attributes (member variables)


private:

};


