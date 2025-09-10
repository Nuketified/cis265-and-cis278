// CIS278 - Mat Bakarich Comission Calculator.cpp
// Mat Bakarich
// 09/12/2025
// -prompt the user to enter the employee's gross sales
// -store that value and use it to calculate the employee's salary
// -display the employee salary to the user
// -prompt the user to enter another employeee's sales or the sentinel value

/*(Sales-Commission Calculator) A large company pays its salespeople on a commission basis. The salespeople each receives $200 per week plus 9% of their gross sales for that week.

For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650.

0
.
09
×
5000
 
+
 
200
 
=
 
650

Develop a C++ program that uses a while statement to input each salesperson's gross sales for last week and calculates and displays that salesperson's earnings. Process one salesperson's figures at a time. Exercise 4.15 on page 151 (50 points)

Enter sales in dollars (-1 to end): 5000.00
Salary is: $650.00

Enter sales in dollars (-1 to end): 6000.00
Salary is: $740.00

Enter sales in dollars (-1 to end): 7000.00
Salary is: $830.00

Enter sales in dollars (-1 to end): -1*/

#include <iostream>
#include <iomanip>// for formatting to 2 decimal places

using namespace std;// namespace

int main()// main
{
    const int BASE_PAY = 200;// constant for base salary
    const double COMISSION_RATE = .09;// constant for comission rate
    
    double sales_in_dollars = 0;// initialize sales in dollars to 0
    double salary = 0;// intialize salary to zero


    cout << "Employee's gross weekly sales: ";// prompt user for employee sales
    cin >> sales_in_dollars;// read and store that in sales_in_dollars
   
    
    while (sales_in_dollars != -1) {// while loop to continue program until sentinel is entered


        salary = BASE_PAY + (sales_in_dollars * COMISSION_RATE);// calculate the employee's salary

        cout << "Salary is: $" << fixed << setprecision(2) << salary;// dislpay the employee's salary to the user

        cout << "\n\n\nEmployee's weekly sales:  (or -1 to quit): ";// prompt user for another employee's gross sales or sentinel
        cin >> sales_in_dollars;// store that input in sales_in_dollars

    }// end of while loop

}// end main