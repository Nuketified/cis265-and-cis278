// CIS278 - Mat Bakarich Credit Limits.cpp
// Mat Bakarich
// 9/12/2025
// -get the following inputs from the user and store them in associated variables
//     -account number
//     -starting account balance
//     -charges this month
//     -credits this month
//     -account credit limit
// -calculate the ending account balance, display that to the user
// -if the credit limit is exceeded, print a message to the user saying so
// -ask the user for another account number (or sentinel)



#include <iostream>

using namespace std;// namespace

int main()// main
{
    //int keep_going = 0;// sentinel value
    int account_number = 0;// intitalize acct # to 0, this is also the sentinel
    double starting_balance = 0;// initialize balance to 0
    double charges_this_month = 0;// initialize total customer charges this month to 0
    double credits_this_month = 0;// initialize total customer credits this month to 0
    double credit_limit = 0;// initialize customer credit limit
    double ending_balance = 0;// initalize customer ending balance



    cout << "Enter account number: ";// prompt user for account number
    cin >> account_number;// read and store that in account_number


    while (account_number != -1) {//while loop to continue program until sentinel is entered


        // prompt user for information
        // store that information
        cout << "Enter the starting balance: $";
        cin >> starting_balance;

        cout << "Enter the total charges: $";
        cin >> charges_this_month;

        cout << "Enter the total credits: $";
        cin >> credits_this_month;

        cout << "Enter the credit limit: $";
        cin >> credit_limit;


        ending_balance = starting_balance + charges_this_month - credits_this_month;// calculate ending_blance

        cout << "\nNew balance is: $" << ending_balance << ".";// display the new/ending balance
        cout << "\nAccount:       " << account_number;// display the account number
        cout << "\nCredit Limit: $" << credit_limit;// display the credit balance
        cout << "\nBalance:      $" << ending_balance;// display the new/ending balance again

        if (ending_balance > credit_limit) {// if ending balance is greater than the credit limit
            cout << "\n\nCredit Limit Exceeded.";// notify user that the credit limit is exceeded
        }

        cout << "\n\n\nEnter another account number (or -1 to quit): ";// prompt user for account number
        cin >> account_number;// read and store that in account_number


    }// end main
}// end main



