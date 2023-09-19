#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string line;

	ofstream myfileI ("file.txt", ios::app);
	if (myfileI.is_open())
		cout << "true";
	else
		cout << "false";
	cout << "\n";

	myfileI << "\nNew line.\n";
	myfileI.close();

	ifstream myfileO ("file.txt");
	if  (myfileO.is_open())
		cout << "ture";
	else
		cout << "false";
	
	
	cout << "\n";
	getline(myfileO, line);
	cout << line << "\n";
	myfileO.close();
	return (0);
}


