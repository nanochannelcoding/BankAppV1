#include "BankAccount.h"
#include <iostream>
#include <iomanip>
#include <ostream>
#include <stdexcept>

BankAccount::BankAccount(const std::string &accHolder, const std::string &accNum, const double balance) {
    m_accHolder = accHolder;
    m_accNum = accNum;
    m_balance = balance;
}
BankAccount::~BankAccount() {
    // destructor for cleanup
    std::cout << "\nBankAccount Object destroyed" << std::endl;
}
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        m_balance += amount;
    }
    else {
        //throw std::invalid_argument("Invalid deposit");
        std::cout << "Can't deposit balance.\n" << std::endl;
    }
}
bool BankAccount::withdraw(double amount) {
    if (amount <= m_balance - 5.0) {
        m_balance -= amount;
        return true;
    }
    else {
        return false;
    }
}
void BankAccount::display() {
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << std::endl;
    std::cout << "Name: " << m_accHolder << std::endl;
    std::cout << "AccNum: " << m_accNum << std::endl;
    std::cout << "Balance: $" << m_balance << std::endl;
}
