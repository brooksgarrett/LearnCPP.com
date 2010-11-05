// Fun with Pointers and Arrays

#include <iostream>

int main()
{
	using namespace std;
	int nArrayOfNums[] = {1, 3, 5, 9, 10, 15}; // Just some numbers to play with.
	int nSomeInt = 39; // A number set on the stack after the array.
	char szStringArray[] = "lolCat supreme!"; // A char array, better known as a string
	int nLastNumber = 19;

	int *nPtr =  0; // Now it is a null pointer
	
	// This is a cool trick to find length of an array
	cout << "nArrayOfNums has length: " << sizeof(nArrayOfNums)/sizeof(nArrayOfNums[0]) << endl;

	// Causes segmentation fault
	//cout << "nPtr points to:  " << nPtr << " Holding Value: " << *nPtr << endl;  
	nPtr = &nArrayOfNums[2]; // nPtr now holds the mem address of the third item in nArrayOfNums (5)
	cout << "nPtr points to:  " << nPtr << " Holding Value: " << *nPtr << endl;
	++nPtr;
	cout << "nPtr points to:  " << nPtr << " Holding Value: " << *nPtr << endl;
        ++nPtr; // Should now point to nSomeInt
	cout << "nPtr points to:  " << nPtr << " Holding Value: " << *nPtr << endl;
	++nPtr; // Should not point to nLastNumber
	cout << "nPtr points to:  " << nPtr << " Holding Value: " << *nPtr << endl;

	// Now we get wacky. Dynamic Memory Time!!!
	
	// Allocate a single variable at run time
	int *pnValue = new int;
	*pnValue = 7; // I assigned 7 to the value stored at mem address pnValue
	cout << "nPtr points to:  " << pnValue << " Holding Value: " << *pnValue << endl;    

	// Allocate an entire array at runtime
	int nArraySize = 0;
	cout << "Gimme an array size!" << endl;
	cin >> nArraySize;
	int *pnArray = new int[nArraySize];
	for ( int i = 0; i < nArraySize; i++)
	{
		pnArray[i] = i;
	}
	cout << "pnArray has length: " << sizeof(pnArray)/sizeof(pnArray[0]) << endl;
	delete pnArray;

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
