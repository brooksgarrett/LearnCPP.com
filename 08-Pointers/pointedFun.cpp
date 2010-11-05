/*------------------------------------------------------------------------
	pointedFun.c: Illustration of indirection and pointers
	
	Output: Addresses of memory locations and the integers stored there
---------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
  int i = 11,
      j = 22,
      k = 33;

  int * iPtr = &i,
      * jPtr = &j,
      * kPtr = &k;

  cout << "\nAt address " << iPtr
	<< " is the value " << i << "\n";
}
