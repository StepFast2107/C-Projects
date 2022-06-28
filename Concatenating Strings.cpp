//Concatenating strings.cpp 
//Created/Revised by Christopher Foster on 6/28/2022 

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string city = "";
    string state = "";
    string zipCode = "";
    string full = " ";
    
    cout << "Please enter city, state, zipcode." << endl << "Enter X for city to end program." << endl;
    cout << "Enter city: ";
    getline(cin, city);
    while (city != "X")
    {
       
       
        cout << "Enter state: ";
        getline(cin, state);
        cout << "Enter zip code: ";
        getline(cin, zipCode);
        cout << endl;
        full = city + ", " + state + "  " + zipCode;
        cout << full << endl;
        cout << endl << "Enter city: ";
        getline(cin, city);


    }
    return 0;
}


