#pragma once

#include <iostream>
#include "Diamond1.h"
#include "Diamond2.h"
// #include "Diamond3.cpp"


using namespace std;

// -- inherit from the interface
class Diamond3 : public Diamond1, public Diamond2
{
public: // -- methods (member functions)
  Diamond3();  // -- default constructor
  ~Diamond3(); // -- destructor 


private: 

public: // -- attributes (member variables)


private:

};


