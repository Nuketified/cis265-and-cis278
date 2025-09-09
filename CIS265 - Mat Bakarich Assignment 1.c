/////////////////////////////////////////////////////////////////////////////////////////////////
// Module 1 Exercise 4.c                                                                        /
// CIS265 Mat Bakarich 8/25/25                                                                  /
// Write a program that asks the user to enter a dollars - and -cents amount, then displays the /
// amount with 5 % tax added :                                                                  /
// Enter an amount : 100.00                                                                     /
// With tax added : $105.00                                                                     /
//    Get an input from the user, calculate the tax, display the number with tax added          /
/////////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

#define TAX_RATE 1.05f// tax rate


int main(void)// main function



{
    float amount = 0;// initialize amount

    // prompt user to enter amount
    printf("Enter an amount : ");

    // read the amount entered and store it in 'amount'
    scanf_s("%f", &amount);

    // calculate the amount with tax
    float amount_with_tax = amount * TAX_RATE;
    printf("With tax added : $%.2f\n", amount_with_tax);

    ////////////////////////////////////////////////////////////////////////////////
    // Module 1 Exercise 8                                                         /
    // CIS265 Mat Bakarich 8/25/25                                                 /
    // get inputs from user, store inputs in variables for:                        /
    //     - loan amount                                                           /
    //     - interest rate                                                         /
    //     - monthly payment                                                       /
    // calculate and display the balance after 1, 2, and 3 monthly payments        /
    ////////////////////////////////////////////////////////////////////////////////

    float balance = 0, interest_rate = 0, monthly_payment = 0, balance_1 = 0, balance_2 = 0, balance_3 = 0, monthly_interest_rate = 0;// declare and initialize variables


    printf("\nEnter amount of loan : ");// prompt user to enter amount

    scanf_s("%f", &balance);// read the amount entered and store it in "balance"



    printf("Enter interest rate : ");// prompt user to enter interest rate

    scanf_s("%f", &interest_rate);// read the input and store it in "interest_rate"



    printf("Enter monthly payment : ");// prompt user to enter monthly payment

    scanf_s("%f", &monthly_payment);// read the input and store it in "monthly_payment"


    monthly_interest_rate = (interest_rate * .01) / 12;// calculate the monthly interest rate





    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);// calculate the balance after 1 monthly payment
    printf("Balance remaining after first payment: $%.2f\n", balance);// print the remaining blance after 1 monthly payment


    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);// calculate the balance after 2 monthly payments
    printf("Balance remaining after second payment: $%.2f\n", balance);// print the balance after 2 monthly payments


    balance = (balance - monthly_payment) + (balance * monthly_interest_rate);// calculate the balance after 3 monthly payments
    printf("Balance remaining after third payment: $%.2f\n", balance);// print the balance after 3 monthly payments


    printf("\n\nmbakarich1@mail.pima.edu\n");// print e-mail address




    return 0;// end the program
}