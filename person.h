#ifndef PERSON_H
#define PERSON_H
//-----------------------------------------------------------
// Purpose: Header file for the Person class.
//          This class is designed to store five pieces of 
//          information describing a famous person.  
// Author:  Luke James
//-----------------------------------------------------------
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
public:
      // Constructor methods
      Person();
      Person(const Person & person);
      ~Person();

      // Get methods 
      string getFirstName();
      string getLastName();
      int getBirthYear();
      int getDeathYear();        // Not used in a function for this program
      string getContribution(); // Not used in a function for this program

      // Set methods
      void setFirstName(string fName);
      void setLastName(string lName);
      void setBirthYear(int bYear);
      void setDeathYear(int dYear);
      void setContribution(string contr);

      // Other methods
      void print();

   private:
      // Object attributes
      string firstName;
      string lastName;
      int birthYear;
      int deathYear;
      string contribution;
      
};
#endif