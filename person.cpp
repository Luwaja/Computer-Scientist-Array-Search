// Implementation of the person header file
// Author: Luke James

#include <iostream>
#include "person.h"

// Constructor
Person::Person()
{
    firstName = "";
    lastName = "";
    birthYear = 0;
    deathYear = 0;
    contribution = "";
}

// Copy constructor
Person::Person(const Person & copyMe)
{
    firstName = copyMe.firstName;
    lastName = copyMe.lastName;
    birthYear = copyMe.birthYear;
    deathYear = copyMe.deathYear;
    contribution = copyMe.contribution;
}

// Destructor
Person::~Person()
{

}

//------------------------------------------
//  Getters (accessors)
//------------------------------------------

string Person::getFirstName()
{
    return firstName;
}

string Person::getLastName()
{
    return lastName;
}

int Person::getBirthYear()
{
    return birthYear;
}

int Person::getDeathYear()
{
    return deathYear;
}

string Person::getContribution()
{
    return contribution;
}

//------------------------------------------
// Setters (mutators)
//------------------------------------------

void Person::setFirstName(string fName)
{
    firstName = fName;
}

void Person::setLastName(string lName)
{
    lastName = lName;
}

void Person::setBirthYear(int bYear)
{
    birthYear = bYear;
}

void Person::setDeathYear(int dYear)
{
    deathYear = dYear;
}

void Person::setContribution(string contr)
{
    contribution = contr;
}

//------------------------------------------
// Print method
//------------------------------------------

void Person::print()
{
    cout << "-----------------------------------------------------------------------------------------------------------" << endl
         << "Name: " << firstName << " " << lastName << endl
         << "Life Span: " << birthYear << " to " << deathYear << endl
         << "Contribution: " << contribution << endl;
}
