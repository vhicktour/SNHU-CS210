#ifndef INVESTMENT_H
#define INVESTMENT_H

class Investment {
private:
    double principalAmount;
    double annualInterestRate;
    int numberOfYears;

public:
    // Default constructor
    Investment();

    // Setters
    void setPrincipalAmount(double principal);
    void setAnnualInterestRate(double rate);
    void setNumberOfYears(int years);

    // Business logic
    double calculateCompoundInterest();

    // Display
    void displayInvestmentDetails();

    // Error handling
    bool isValidPrincipal(double principal);
    bool isValidInterestRate(double rate);
    bool isValidNumberOfYears(int years);
};

#endif // INVESTMENT_H
