//
// Created by CBSC on 09-Dec-23.
//
#include <iostream>
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


