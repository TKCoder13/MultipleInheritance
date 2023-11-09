#pragma once

#include <iostream>
// #include "Base.cpp"

using namespace std;

// -- inherit from the interface
class Base 
{
public: // -- methods (member functions)
  Base();  // -- default constructor
  ~Base(); // -- destructor 

  void NonVirtualMethod();
  virtual void VirtualMethod();

private: 

public: // -- attributes (member variables)
  int x;


private:

};


