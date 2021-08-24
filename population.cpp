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

#include "Population.h"

 

Population::Population() {}

 

void Population::readFile(const string& filename) {

  ifstream in(filename);

  string county;

  int year;

  int population;

  // if the file can't be accessed it returns nothing

  if(!in) {

    return;

  }

  while(!in.eof()) {

    in >> county >> year >> population;

    // if county exist then it would add the found year and population to the

    // existing

    if(countypop_.find(county) != countypop_.end()) {

      countypop_[county].first.push_back(year);

      countypop_[county].second.push_back(population);

    }

    // if county doesn't exist then it would create a new one

    countypop_[county].first.push_back(year);

    countypop_[county].second.push_back(population);

  }

  in.close();

  return;

}

 

double Population::averagePopulation(const string& county) {

  double total = 0;

  // if county doesn't exist then it would return 0

  if(countypop_.find(county) == countypop_.end()) {

    return 0;

  }

  // iterate through to get the total population

  for(vector<int>::iterator it = countypop_[county].second.begin(); it != countypop_[county].second.end(); ++it) {

    total += *it;

  }

  return (total / countypop_[county].first.size());

}
