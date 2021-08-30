/* Definding classes. checkIn function that will keep track of which pets are waiting and
seePet function that will return the name of the pet who is next.*/
#ifndef CatsRule
//#define CatsRule
#include <string>
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class CatsRule
{
private:
  string species_;
  string name_;

public:
  CatsRule(string species, string name)
  {
    species_ = species;
    name_ = name;
  }

  void checkIn(string species, string name)
  {
    species_ = species;
    name_ = name;
  }

  string getSpecies()
  {
    return species_;
  }

  string getName()
  {
    return name_;
  }

  string seePet()
  {
    return species_;
    return name_;
  }
};

#endif
