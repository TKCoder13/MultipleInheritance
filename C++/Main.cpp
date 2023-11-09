#include <iostream>

#include "Derive.h"
#include "Diamond3.h"

// -- Why do I need to include these in Main.cpp
#include "Base.h"
#include "Base.cpp"
#include "Base1.h"
#include "Base1.cpp"
#include "Base2.h"
#include "Base2.cpp"
#include "Derive.cpp"
#include "Diamond1.h"
#include "Diamond1.cpp"
#include "Diamond2.h"
#include "Diamond2.cpp"
#include "Diamond3.cpp"

using namespace std;

int main (int argc, char ** argv)
{
  Derive derive;

  // -- causes compiler error, ambiguous calls
  //derive.VirtualMethod();
  //derive.NonVirtualMethod();

  // -- correct using fully qualified names
  derive.Base1::VirtualMethod();
  derive.Base1::NonVirtualMethod();

  derive.Base2::VirtualMethod();
  derive.Base2::NonVirtualMethod();

  // -- or use overloading (if type signatures are different) or 
  //    renaming (if type signatures are similar, as is done here)
  derive.VirtualMethodBase1();
  derive.NonVirtualMethodBase1();
  derive.VirtualMethodBase2();
  derive.NonVirtualMethodBase2();


  Diamond3 diamond;
  // --  this is flagged as ambiguous by the compiler
  // cout << diamond.x << endl;
  cout << diamond.Diamond1::x << endl;
  cout << diamond.Diamond2::x << endl;

  return 0;

}
