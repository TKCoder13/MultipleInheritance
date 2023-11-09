#include "Derive.h"


Derive::Derive ()
{
  //  cout << "Derive object constructed" << endl << endl;
}

Derive::~Derive()
{
  //  cout << "Derive object destructed" << endl;
}


void Derive::NonVirtualMethodBase1 ()
{
  Base1::NonVirtualMethod();
}

void Derive::VirtualMethodBase1 ()
{
  Base1::VirtualMethod();
}


void Derive::NonVirtualMethodBase2 ()
{
  Base2::NonVirtualMethod();
}

void Derive::VirtualMethodBase2 ()
{
  Base2::VirtualMethod();
}


