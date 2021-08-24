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
