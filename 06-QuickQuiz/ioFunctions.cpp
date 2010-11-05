#include <iostream>

int ReadNumber()
{
	using namespace std;
	int a = 0;

	cout << "Enter a number" << endl;
	cin >> a;
	return a;
 
}

void WriteAnswer(int answer)
{
	using namespace std;
	cout << "The result is: " << answer << endl;
}
