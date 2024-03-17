#include "ExpenseTracker.h"
#include <iostream>
#include <iomanip>

void ExpenseTracker::addExpense(const std::string& category, double amount, const std::string& description) {
    expenses_.push_back(Expense(category, amount, description));
}

void ExpenseTracker::displayExpenses() const {
    std::cout << "Expense Tracker: " << "\n";
    std::cout << std::setw(15) << "Category" << std::setw(10)
              << "Amount" << std::setw(20) << "Description"
              << "\n";
    std::cout << "---------------------------------------------" << "\n";
    for (const auto& expense: expenses_) {
        std::cout << std::setw(15) << expense.getCategory() << std::setw(10) << expense.getAmount() << std::setw(20)
                  << expense.getDescription() << "\n";
    }
    std::cout << "---------------------------------------------" << "\n";
}

