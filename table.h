#ifndef TABLE_H
#define TABLE_H
//-----------------------------------------------------------
// Purpose: Header file for the Table class.
//          This class is designed to store an array of Person
//          objects that describe a group of famous people.
//          The search methods locate and print information
//          about a specified subset of the famous people.
// Author:  Luke James
//-----------------------------------------------------------
#include "person.h"
#include <iostream>
#include <string>
using namespace std;

class Table
{
public:
   // Constructor methods
   Table();
   Table(const Table & table);
   ~Table();
   
   // Input output methods
   void print();
   void read();

   // Searching methods
   void search_first_name();
   void search_last_name();
   void search_year();

   // Error check function
   static string caseMatch(string text);

private:
   int count;
   static const int SIZE = 100;
   Person person[SIZE];
};
#endif