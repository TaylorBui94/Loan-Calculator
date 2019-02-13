//
//  Loan.h
//  LoanTester
//
//  Created by Taylor Bui on 9/17/18.
//  Copyright (c) 2018 Taylor Bui. All rights reserved.
//

#ifndef LoanTester_Loan_h
#define LoanTester_Loan_h

class Loan
{
    public:
        Loan();
        Loan(double rate, int sears, double amount);
        int getNumberOfYears();
        double getLoanAmount();
        double getAnnualInterestRate();
        void setAnnualInterestRate(double rate);
        void setNumberOfYears(int years);
        void setLoanAmount(double amount);
        double getMonthlyPayment();
        double getTotalPayment();
    
    private:
        double rate, amount;
        int years;
    
};


#endif
