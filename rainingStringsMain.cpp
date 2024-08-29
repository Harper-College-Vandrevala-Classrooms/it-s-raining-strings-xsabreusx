/*
Name: Humberto 
Title: Its Raining Strings Lab
Class: CSC121
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string userChoice = "Y";
    string busName;
    vector<string> businessNames;

    cout << "\n\n====================";
    cout << "\nIt's Raining Strings";
    cout << "\n====================" << endl;
    cout << "\nWelcome! This program will sort all business names provided.";

    cout << "\nWould you like to input a business name?";
    cout << "\nInput Y or N: ";
    getline(cin, userChoice);

    while (userChoice == "Y" || userChoice == "y" || userChoice == "Yes" || userChoice == "yes")
    {
        cout << "\nInput a business name: " << endl;
        getline(cin, busName);
        businessNames.push_back(busName);
        sort(businessNames.begin(),businessNames.end());
        cout << "\nDisplaying Bussiness List: ";
        
        for (string e : businessNames)
        {
            cout << "\n" << e;
        }

        cout << "\n\nEnter another name? Y or N: ";
        getline(cin, userChoice);
    }
    cout << "\nProgram Completed. Have a good day!\n\n";

    return 0;
}