#include <iostream>
#include <iomanip> /* Input Output Manipulation
Needed to fix whitespace problem. Makes it possible to adjust size of
the stream */
using namespace std;

int main()
{   
    string name, address, married;
    int age;
    char gender;
    float height;
    cout << "This program takes user information for a person record\n";
    cout << "and then prints out the information.\n";

    cout << "\nPlease input your information: ";
    cout << "\nName (use underscore between names, ex. Name_Surname): ";
    cin >> setw(40) >> name; cin.clear(); cin.ignore(INT_MAX, '\n'); // setw() limits the max number of letters or arguments to 40. 
    cout << "Age: ";                                                 // cin.clear() and cin.ignore() clears the stream.   
    cin >> setw(1) >> age; cin.clear(); cin.ignore(INT_MAX, '\n');
    cout << "Gender (m/f): ";
    cin >> setw(1) >> gender; cin.clear(); cin.ignore(INT_MAX, '\n');
    cout << "Address (use underscore between entries, ex. Street_Nr_PostalCode_City): ";
    cin >> setw(60) >> address; cin.clear(); cin.ignore(INT_MAX, '\n');
    cout << "Married (true/false): ";
    cin >> setw(5) >> married; cin.clear(); cin.ignore(INT_MAX, '\n');
    cout << "Height in meters: ";
    cin >> setw(1) >> height; cin.clear(); cin.ignore(INT_MAX, '\n');

    cout << "\nThis is the information that you have entered: " << endl;
    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender (m/f): " << gender << endl;
    cout << "Address: " << address << endl;
    cout << "Married (true/false): " << married << endl;
    cout << "Height in meters: " << height << endl;

    cin.get();
    return 0;
}
