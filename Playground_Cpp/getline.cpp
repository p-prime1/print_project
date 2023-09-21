#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;

	cout << "What is your name, and where are you from\n";
	getline(cin, name);
	cout << "Hello, frome" << name << "\n";

	return (0);
}
