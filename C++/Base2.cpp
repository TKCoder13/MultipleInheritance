#include "Base2.h"


Base2::Base2 ()
{
  //  cout << "Base2 object constructed" << endl << endl;
}

Base2::~Base2()
{
  //  cout << "Base2 object destructed" << endl;
}

void Base2::NonVirtualMethod ()
{
  cout << "NonVirtualMethod, Base2!" << endl << endl;
}

void Base2::VirtualMethod ()
{
  cout << "VirtualMethod Base2" << endl << endl;
}


