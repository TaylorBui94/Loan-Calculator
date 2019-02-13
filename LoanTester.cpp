
//
//  main.cpp
//  LoanTester
//
//  Created by Taylor Bui on 9/17/18.
//  Copyright (c) 2018 Taylor Bui. All rights reserved.
//

#include <iostream>
#include "Loan.h"
using namespace std;

int main(int argc, const char * argv[])
{
    
    double x = 0;
    Loan l;
    Loan p(2.5, 1, 1000);
    cout << " Annual interest rate: " << p.getAnnualInterestRate() << "%" << endl;
    cout << " Number of years of the loan : " << p.getNumberOfYears() << endl;
    cout << " Amount of this loan : " << p.getLoanAmount() << endl;
    cout << " Set a new interest rate : ";
    cin >> x ;

    p.setAnnualInterestRate(x);
    
    cout << " Set number of years : ";
    cin >> x;
    p.setNumberOfYears(x);
    cout << " Set a new amount: " ;
    cin >> x;
    p.setLoanAmount(x);
    
    cout << " Monthly payment of loan : " << p.getMonthlyPayment() << endl;
    cout << " Total payment of the loan: " << p.getTotalPayment() << endl;
    
    return 0;
}

