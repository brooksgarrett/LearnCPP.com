// Let's look at how we can declare and init var's.


#include <iostream>

int main()
{

	// A bunch of variable types
	bool bValue;
	char chValue;
	int nValue;
	float fValue;
	double dValue;

	// Decalre and init
	bool bValue2 = true;
	int nValue2(2);

	// Declare multiple var's together
	int nValue3, nValue4, nValue5;

	// Declare and init multiple of same type
	bool bValue3(true), bValue4 = true;
	
	// Declare a Double in Dec or Scientific Notation
	double dValue2 = 500.00;
	double dValue3 = 5e2;
	// However, you cannot mix data types in one line dec's.
	
	// Modern standards recommend you declare as needed, not in the top...
	// StackOverflow recommends you declare as needed as well...
	
	// Looking at variable size
   using namespace std;
   cout << "bool:\t\t" << sizeof(bool) << " bytes" << endl;
   cout << "char:\t\t" << sizeof(char) << " bytes" << endl;
   cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << endl;
   cout << "short:\t\t" << sizeof(short) << " bytes" << endl;
   cout << "int:\t\t" << sizeof(int) << " bytes" << endl;
   cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
   cout << "float:\t\t" << sizeof(float) << " bytes" << endl;
   cout << "double:\t\t" << sizeof(double) << " bytes" << endl;
   cout << "long double:\t" << sizeof(long double) << " bytes" << endl;


	return 0;

}
