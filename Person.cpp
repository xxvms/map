//
// Created by tombr on 17/08/2017.
//
#include <iostream>
#include "Person.h"
Person::Person(std::string first, std::string last, int arbitrary):
        first_name(first), last_name(last), arbitrary_number(arbitrary)// is not required as well  pResource(nullptr) - it will automatically initialize to empty
{
    //std::cout << "constructing " << first_name << " " << last_name << '\n';
}
Person::Person(){}

std::string Person::Get_name()const {
    return first_name + " " + last_name;
}

Person::~Person() {
   // std::cout << "destructing " << first_name << " " << last_name << '\n';
}

