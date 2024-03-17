#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>
#include <iostream>

class Expense {
    public:
        Expense(const std::string& category, double amount, const std::string& description);
        std::string getCategory() const;
        double getAmount() const;
        std::string getDescription() const;
        
    private:
        std::string category_;
        double amount_;
        std::string description_;
};

#endif

