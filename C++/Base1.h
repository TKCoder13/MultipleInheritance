#pragma once

#include <iostream>
// #include "Base1.cpp"

using namespace std;

// -- inherit from the interface
class Base1 
{
public: // -- methods (member functions)
  Base1();  // -- default constructor
  ~Base1(); // -- destructor 

  void NonVirtualMethod();
  virtual void VirtualMethod();

private: 

public: // -- attributes (member variables)


private:

};


