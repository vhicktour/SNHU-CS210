#include "Investment.h"
#include <iostream>
#include <cmath> // for pow function

Investment::Investment() : principalAmount(0), annualInterestRate(0), numberOfYears(0) {}

void Investment::setPrincipalAmount(double principal) {
    principalAmount = principal;
}

void Investment::setAnnualInterestRate(double rate) {
    annualInterestRate = rate;
}

void Investment::setNumberOfYears(int years) {
    numberOfYears = years;
}

double Investment::calculateCompoundInterest() {
    return principalAmount * pow((1 + annualInterestRate / 100), numberOfYears) - principalAmount;
}

void Investment::displayInvestmentDetails() {
    std::cout << "Principal Amount: " << principalAmount << std::endl;
    std::cout << "Annual Interest Rate: " << annualInterestRate << "%" << std::endl;
    std::cout << "Number of Years: " << numberOfYears << std::endl;
    std::cout << "Compound Interest: " << calculateCompoundInterest() << std::endl;
}

bool Investment::isValidPrincipal(double principal) {
    return principal > 0;
}

bool Investment::isValidInterestRate(double rate) {
    return rate >= 0 && rate <= 100;
}

bool Investment::isValidNumberOfYears(int years) {
    return years > 0;
}
