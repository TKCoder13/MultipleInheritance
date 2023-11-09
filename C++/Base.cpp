#include "Base.h"


Base::Base ()
{
  //  cout << "Base object constructed" << endl << endl;
  x = 0;
}

Base::~Base()
{
  //  cout << "Base object destructed" << endl;
}

void Base::NonVirtualMethod ()
{
  cout << "NonVirtualMethod, Base!" << endl << endl;
}

void Base::VirtualMethod ()
{
  cout << "VirtualMethod Base" << endl << endl;
}


