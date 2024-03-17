#ifndef EXPENSE_TRACKER_H
#define EXPENSE_TRACKER_H

#include "expense.h"
#include <vector>

class ExpenseTracker {
public:
    void addExpense(const std::string& category, double amount, const std::string& description);
    void displayExpenses() const;

private:
    std::vector<Expense> expenses_;
};

#endif




