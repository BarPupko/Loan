#include <iostream>
#include "Loan.h"

int main() {
    // Create Loan objects
    Loan loan1("John Doe", 15000, 4.5, 48);
    Loan loan2("Jane Smith", 20000, 5.0, 60);
    Loan loan3 = loan2; // Using the copy constructor

    // Testing member functions
    // Display loans
    loan1.Display();
    loan2.Display();
    loan3.Display();

    // Test getters
    std::cout << "Loan 1 - Name: " << loan1.getName() << ", Amount: " << loan1.getAmount() << ", Rate: " << loan1.getRate() << ", Term: " << loan1.getTerm() << std::endl;

    // Test setters
    loan1.setName("John A. Doe");
    loan1.setAmount(16000);
    loan1.setRate(4.75);
    loan1.setTerm(50);
    loan1.Display();

    // Test equality operator
    if (loan2 == loan3) {
        std::cout << "Loan 2 and Loan 3 are equal." << std::endl;
    } else {
        std::cout << "Loan 2 and Loan 3 are not equal." << std::endl;
    }

    // Test + operator overload
    Loan loan4 = loan1 + 12; // Add 12 to loan1's term
    loan4.Display();

    // Test monthly payment calculation
    int payment = loan1.monthly_payment(loan1.getAmount());
    std::cout << "Monthly payment for Loan 1: " << payment << std::endl;

    return 0;
}