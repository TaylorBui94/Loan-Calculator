//
//  Loan.cpp
//  LoanTester
//
//  Created by Taylor Bui on 9/17/18.
//  Copyright (c) 2018 Taylor Bui. All rights reserved.
//

#include "Loan.h"
#include<iostream>
using namespace std;

Loan :: Loan()
{
    rate = 0;
    amount = 0;
    years = 0;
}

Loan :: Loan(double rate, int years, double amount)
{
    (*this).rate = rate;
    (*this).years = years;
    (*this).amount = amount;
}

int Loan :: getNumberOfYears()
{
    return years;
}


double Loan :: getAnnualInterestRate()
{
    return rate;
}

double Loan :: getLoanAmount()
{
    return amount;
}


void Loan :: setAnnualInterestRate(double r)
{r = rate;}

void Loan :: setNumberOfYears(int y)
{
    years = y;
}

void Loan :: setLoanAmount(double a)
{
    amount = a;
}

double Loan :: getMonthlyPayment()
{
    return (amount/(years*12))*(1+(rate/100));
}


double Loan :: getTotalPayment()
{
    return amount*(1+((years*rate)/100));
}
