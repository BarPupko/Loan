//
// Created by CBSC on 09-Dec-23.
//
#include <iostream>
#include <cmath>
#include "Loan.h"
int Loan::nextID = 100; // Initialize static variable


//Constructor
Loan::Loan(const std::string &name, double amount, double rate, int term):id(nextID++),name(name), amount(amount=10000), rate(rate=5.5), term(term=36) {
}

//Copy Construct
Loan::Loan(const Loan &other) {

}
//Destructor
Loan::~Loan() {

}
//----------------------------------------------------------------
const std::string &Loan::getName() const {
    return this->name;
}


//get
int Loan::getId() const {
    return id;
}

double Loan::getAmount() const {
    return amount;
}


double Loan::getRate() const {
    return rate;
}

int Loan::getPrice() const {
    return price;
}

int Loan::getTerm() const {
    return term;
}
//set
void Loan::setPrice(int price) {
    Loan::price = price;
}

void Loan::setName(const std::string &NewName) {
    Loan::name = NewName;
}


int Loan::setTerm(int newTerm) {
    return this->term=newTerm;
}


void Loan::setId(int id) {
    Loan::id = id;
}

void Loan::setAmount(double amount) {
    Loan::amount = amount;
}

void Loan::setRate(double rate) {
    Loan::rate = rate;
}


void Loan::Display() const {
    std::cout << "Name: " << name << ", ID: " << id << ", Amount: " << amount
              << ", Rate: " << rate << ", Term: " << term << std::endl;
}



bool Loan::operator==(const Loan &rhs) const {
    return amount == rhs.amount &&
           rate == rhs.rate &&
           term == rhs.term;
}


int Loan::monthly_payment(int amount) const {
    float p;
    p = amount * rate;

    // Calculate the denominator of the monthly payment formula
    p *= static_cast<float>(pow(1 + rate, term));
    p /= static_cast<float>(pow(1 + rate, term) - 1);

    // Return the calculated monthly payment
    return p;
}
// Overload the + operator to add an integer to the loan's term

Loan Loan::operator+(int additionalTerm) const {
    Loan newLoan = *this; // Create a new Loan object as a copy of the current one
    newLoan.term += additionalTerm; // Modify the term of the new Loan object
    return newLoan; // Return the modified Loan object
}
