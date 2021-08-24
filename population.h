/* In this program I have an unordered_map in which it will store the county

  name as string which acts as the key of the unordered_map and I have a pair of

  values which are a vector of years in which it could store in what year the

  population was taken and a vector int in which it stores the data of

  population

*/

#pragma once

 

#include <iostream>

#include <fstream>

#include <string>

#include <unordered_map>

#include <vector>

 

using namespace std;

 

class Population {

public:

  Population();

  void readFile(const string& filename); // read a file

  double averagePopulation(const string& county); // returns the average population

 

private:

  unordered_map<string, pair<vector<int>, vector<int>>> countypop_;

};

