/* Definding classes. checkIn function that will keep track of which pets are waiting and
seePet function that will return the name of the pet who is next.*/
#prgma once
//#define CatsRule
#include <string>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <unordered_map>
using namespace std;

class CatsRule
{
public:
  CatsRule();
  void checkIn(string name, string species); // will create a list that will add the species and the name
  bool seePet(string name); // check if the name is in the list

private:
  unorderedmap<string, string> pets;
};

#endif
