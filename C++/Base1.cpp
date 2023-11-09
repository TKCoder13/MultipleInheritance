#include "Base1.h"


Base1::Base1 ()
{
  //  cout << "Base1 object constructed" << endl << endl;
}

Base1::~Base1()
{
  //  cout << "Base1 object destructed" << endl;
}

void Base1::NonVirtualMethod ()
{
  cout << "NonVirtualMethod, Base1!" << endl << endl;
}

void Base1::VirtualMethod ()
{
  cout << "VirtualMethod Base1" << endl << endl;
}


