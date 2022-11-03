//Author: Luke James

//Include Statements
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "table.h"

using namespace std;

int main() 
{
    //Declare
    Table table;
    //Read
    string fileName;
    table.read();

    string yesNoSearch;
    string searchType;

    do
    {
        // Prompts user to select search type
        cout << "What search would you like to perform?" << endl
             << "(f = search by first name)" << endl
             << "(l = search by last name)" << endl
             << "(y = search by birth year)" << endl
             << "(a = show all computer scientist)" << endl << endl
             << "Selection:";
        cin >> searchType;

        // Error checks for inputs other than provided
        while(searchType != "f" && searchType != "l" && searchType != "y" && searchType != "a")
        {
            cout << "Sorry. That is not a valid selection. Please try again." << endl;
            cout << endl << "What search would you like to perform?" << endl
                 << "(f = search by first name)" << endl
                 << "(l = search by last name)" << endl
                 << "(y = search by birth year)" << endl
                 << "(a = show all computer scientist)" << endl
                 << "Selection:";
            cin >> searchType;
        }

        if(searchType == "f")
        {
            table.search_first_name();
        }

        if(searchType == "l")
        {
            table.search_last_name();
        }

        if(searchType == "y")
        {
            table.search_year();
        }

        if(searchType == "a")
        {
            table.print();
        }

        // Asks user if they would like to keep searching or stop
        cout << endl << "Would you like to search again?" << endl
             << "(y/n):";
        cin >> yesNoSearch;
        cout << endl;

        // While loop to infinitely ask to keep searching until n
        while (yesNoSearch != "y" && yesNoSearch != "n")
        {
            cout << "Sorry. That's not a valid input. Please try again." << endl;
            cout << "Would you like to search again?" << endl
                 << "(y/n):";
            cin >> yesNoSearch;
            cout << endl;
        }

    }while(yesNoSearch == "y");

    return 0;
}