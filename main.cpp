#include <iostream>
#include "Loan.h"
int main() {
    //    Loan(const std::string &name, int id, double amount, double rate, int *term);
    Loan loan1("Loan A", 1000.0, 5.5, 12);
    loan1.Display();
    return 0;
}
