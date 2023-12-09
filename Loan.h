#ifndef GUITAR_H
#define GUITAR_H

#include <string>
#include <ostream>

class Loan {
public:
    Loan(const std::string &name, double amount, double rate, int term);
    Loan(const Loan &other);

    virtual ~Loan();

    const std::string &getName() const;

    void setName(const std::string &NewName);
    int getPrice() const;

    void setPrice(int price);

    int getId() const;

    void setId(int id);

    double getAmount() const;

    void setAmount(double amount);

    double getRate() const;

    void setRate(double rate);

    int getTerm() const;

    void Display() const;

    friend std::ostream &operator<<(std::ostream &os, const Loan &loan);

protected:
    std::string name;
    int price;
    int id;
    double amount;
    double rate;
    int term ;
    static int nextID; // Static variable to keep track of the next ID
};

#endif // GUITAR_H

