// This is the main portion of my multi-file code

#include <iostream>

// This will give main access to add, but linking still fails
int add(int x, int y); // Forward Dec using a function prototype

int main()
{
	using namespace std;

	cout << add(6, 3) << endl;
}
