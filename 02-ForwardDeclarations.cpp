// A Forward Declaration is exactly that. It declares a prototype function ahead of time so the compiler doesn't get confused when
//	a function is called before it is declared and defined.

#include <iostream>

int add(int x, int y);	// This is a forward declaration. Without it, the following code would not compile.
int subtract(int, int);	// This is valid as well. Don't need to include the parameter names.

int main()
{
	using namespace std;
	cout << add(2,3) << endl;
	cout << subtract(9, 6) << endl;

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}
