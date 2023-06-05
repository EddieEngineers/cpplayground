//
// Created by Eddie on 6/4/23.
//

#include "Person.h"

#include <utility>

Person::Person(std::string inName) {
    name = std::move(inName);
}
