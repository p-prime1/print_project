#include <iostream>

using namespace std;

int main()
{
	enum Months {
		Jan = 1, Feb, Mar, April
	};

	Months DOB = April;

	cout << DOB << "\n";
	return (0);
}

