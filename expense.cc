#include "expense.h"

Expense::Expense(const std::string& category, double amount, const std::string& description)
    : category_(category), amount_(amount), description_(description) {}

std::string Expense::getCategory() const {
    return category_;
}

double Expense::getAmount() const {
    return amount_;
}

std::string Expense::getDescription() const {
    return description_;
}




