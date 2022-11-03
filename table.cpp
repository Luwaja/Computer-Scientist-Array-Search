// Implementation of the table header file
// Author: Luke James

#include "table.h"
#include <string>


// Constructor
Table::Table()
{
    count = 21;
}

// Copy constructor
Table::Table(const Table & copyMe)
{
    count = copyMe.count;
}

// Destructor
Table::~Table()
{
}

// Reads info from people.txt file
void Table::read()
{
    // Open input file
    ifstream din;
    din.open("people.txt");
    if (din.fail())
        cout << "Could not open people.txt\n";

    // Assign attributes to person array
    for (int i = 0; i < count && !din.eof(); i++)
    {
        string firstName, lastName, contribution;
        int birthYear, deathYear;

        Person input;
        din >> firstName >> lastName >> birthYear >> deathYear;
        getline(din, contribution);

        person[i].setFirstName(firstName);
        person[i].setLastName(lastName);
        person[i].setBirthYear(birthYear);
        person[i].setDeathYear(deathYear);
        person[i].setContribution(contribution);
    }

    // Close input file
    din.close();
}

// Prints info for #i person in the array
void Table::print()
{
    for (int i = 0; i < count; i++)
    {
        person[i].print();
    }
}

void Table::search_first_name()
{
    string search;

    cout << endl << "Enter the FIRST name of the person you are searching for:";
    cin >> search;
    cout << endl;

    // Search person array for matching data
    for (int i = 0; i < count; i++)
    {
        if (caseMatch(search) == caseMatch(person[i].getFirstName()))
        {
            person[i].print();
        }
    }
}

void Table::search_last_name()
{
    string search;

    cout << endl << "Enter the LAST name of the person you are searching for:";
    cin >> search;
    cout << endl;

    // Search person array for matching data
    for (int i = 0; i < count; i++)
    {
        if (caseMatch(search) == caseMatch(person[i].getLastName()))
        {
            person[i].print();
        }
    }
}

void Table::search_year()
{
    int intSearchStart;
    int intSearchEnd;

    cout << endl << "Enter a range of birth years" << endl
         << "Starting year of the range:";
    cin >> intSearchStart;
    cout << "Ending year of the range:";
    cin >> intSearchEnd;

    // Search person array for matching data
    for (int i = 0; i < count; i++)
    {
        if (intSearchStart <= person[i].getBirthYear() && intSearchEnd >= person[i].getBirthYear())
        {
            person[i].print();
        }
    }
}

// Sets the strings of the input and info from text file to lowercase
// so that the search_name functions don't have case sensitive issues
string Table::caseMatch(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        text[i] = tolower(text[i]);
    }
    return text;
}