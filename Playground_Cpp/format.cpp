#include <iostream>
#include <iomanip>
#include <string>
#include <set>

using namespace std;

int main()
{
	int i,j;

	j = 0;
	string Months[] = {"Jan" ,"Feb", "mar", "apr"};

	//Months DOB = April;

	//cout << DOB << "\n";
	for (i = 0; i < 4; i++)
	{
		cout << setw(5) << Months[i];
		while (i < 4)
		{
			cout << setw(10) << j << '\n';
			j++;
			break;
		}
	}
	return (0);
}

