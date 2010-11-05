// What happens when I print an uninitialized variable?
// Use int x = 0; to declare and init simultaneously.

#include <iostream>

int main(){
	using namespace std;
	int x;

	cout << x << endl;
}
