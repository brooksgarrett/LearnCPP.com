#include <iostream>
#include "ioFunctions.h"

int main()
{
	int a = 0;
	int b = 0;
	int result = 0;

	a = ReadNumber();
	b = ReadNumber();

	result = a + b;
	
	WriteAnswer(result);

	return 0;
}
