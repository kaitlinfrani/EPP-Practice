#include "CatsRule.h"

CatsRule::CatsRule() {}

void CatsRule::checkIn (string name, string species) {
    if (pets.find(name) == pets.end()) {
        pets_.emplace(name, species);
    }
}
