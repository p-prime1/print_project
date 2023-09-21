/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string name1, Address1, Contact1;
    string Name2, Address2, Contact2;
    
    //For First Person
    cout << "What is first persons Name?\n";
    getline(cin, name1);
    cout << "What is first persons address?\n";
    getline(cin, Address1);
    cout << "Type in your Number\n";
    getline(cin, Contact1);
    
    //For second person
    cout << "What is second persons Name?\n";
    getline(cin, Name2);
    cout << "What is second persons address?\n";
    getline(cin, Address2);
    cout << "Type in Second Number\n";
    getline(cin, Contact2);
    
    //Printing first information
    cout << "First name is: "<< name1 << "\n"; 
    cout << "\t\t" << "First Address is: "<< Address1 << "\n";
    cout << "\t\t" << "First contact: "<< Contact1 << "\n";
    

    //Printing second information
    cout << "Second name is: "<<Name2<< "\n";
    cout << "\t\t" << "Second Address is: "<< Address2 << "\n";
    cout << "\t\t" <<"Second contact is: "<< Contact2 << "\n";
    
    return (0);
}
