#include "Investment.h"
#include <iostream>

int main() {
    std::cout << "Welcome to Airgead Banking Investment App" << std::endl;

    Investment investment;

    double principal, rate;
    int years;

    // Input and validation for principal
    do {
        std::cout << "Enter the principal amount: ";
        std::cin >> principal;
        if (!investment.isValidPrincipal(principal)) {
            std::cout << "Error: Please enter a positive principal amount." << std::endl;
        }
    } while (!investment.isValidPrincipal(principal));

    // Input and validation for interest rate
    do {
        std::cout << "Enter the annual interest rate (in percentage): ";
        std::cin >> rate;
        if (!investment.isValidInterestRate(rate)) {
            std::cout << "Error: Please enter a valid interest rate between 0% and 100%." << std::endl;
        }
    } while (!investment.isValidInterestRate(rate));

    // Input and validation for number of years
    do {
        std::cout << "Enter the number of years: ";
        std::cin >> years;
        if (!investment.isValidNumberOfYears(years)) {
            std::cout << "Error: Please enter a positive number for years." << std::endl;
        }
    } while (!investment.isValidNumberOfYears(years));

    investment.setPrincipalAmount(principal);
    investment.setAnnualInterestRate(rate);
    investment.setNumberOfYears(years);

    investment.displayInvestmentDetails();

    return 0;
}
