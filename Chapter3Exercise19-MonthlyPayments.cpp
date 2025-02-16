/*
File Name: Chapter3Exercise19-MonthlyPayments.cpp
Programmer: Morgan Thorne
Date: February 2025
Requirements:
Write a program that asks for these values then displays a report similar to:
Loan Amount: $10,000
Monthly Interest Rate: 1%
Number of Payments: 36
Monthly Payments: $332.14
Amount Paid Back: $11957.15
Interest Paid: $1957.15
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    double mRate;
    int nPayments = 36;
    double Loan = 10000.00;
    
    cout << "What is the monthly interest rate for your interest?: ";
    cin >> mRate;

    mRate = mRate / 100;

    cout << "What is the number of payments you have made?: ";
    cin >> nPayments;
    cout << "What is the amount of the loan?: $";
    cin >> Loan;
    
    double topinner = (1 + mRate);
    double topdiv = mRate * (pow(topinner, nPayments));
    double bottominner = (1 + mRate);
    double bottomdiv = ((pow(bottominner, nPayments)) - 1);
    double mPayment = (topdiv / bottomdiv) * Loan;
    double amountPayb = mPayment * nPayments;
    double intPaid = amountPayb - Loan;

    cout << "Loan Amount: "<< setw(19)<< "$"<<Loan << endl;
    cout << "Monthly Interest Rate: " << setw(12) << mRate << endl;
    cout << "Number of Payments: " << setw(13) << nPayments << endl;
    cout << "Monthly Payment: " << setw(15) << "$"<< mPayment << endl;
    cout << "Amount Paid Back: " << setw(14) << "$"<< amountPayb << endl;
    cout << "Interest Paid: " << setw(17) << "$"<<intPaid << endl;








}

