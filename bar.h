// bar.h
// This Bar class will contain member variables for the individual
// bars that will appear on the chart. Each bar will have a name,
// category, and value variables. Different getter and
// setter methods for each of the private member variables are also used.
// We also needed to overload the comparison operators in order to
// compare bars values without needing to use the dot-operator because
// the variables are private which meant it wouldn't work. .

#include <iostream>
#include <string>
#include "myrandom.h" // used in autograder, do not remove
using namespace std;

#pragma once

//
// Bar
//
class Bar {
 private:
    // Private member variables for a Bar object
    // TO DO:  Define private member variables for this class
    // NOTE: You should not be allocating memory on the heap for this class.
    string name, category;
    int value;

 public:

    // default constructor:
    Bar() {
        name = "";
        category = "";
        value = 0;
    }

    //
    // a second constructor:
    //
    // Parameter passed in constructor Bar object.
    //
    Bar(string name, int value, string category) {
        this->name = name;
        this->value = value;
        this->category = category;
    }

    // destructor:
    virtual ~Bar() {
    }

    // getName:
	string getName() {
        return name;
       }

    // getValue:
	int getValue() {
        return value;
	}

    // getCategory:
	string getCategory() {
        return category;
	}

	// operators
    // This allows you to compare two Bar objects.
    // Comparison is based on the Bar's value.
	bool operator<(const Bar &other) const {
        return value < other.value;
	}

	bool operator<=(const Bar &other) const {
        return value <= other.value;
	}

	bool operator>(const Bar &other) const {
        return value > other.value;
	}

	bool operator>=(const Bar &other) const {
        return value >= other.value;
	}
};

