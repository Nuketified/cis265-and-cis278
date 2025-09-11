// CIS265 - Mat Bakarich Assignment 3 Exercise 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>





int main(void)// main
{
	double income = 0; // nitalize variable to store income
	double tax = 0;// initialize variable to store tax amount

	
	printf("Please enter the taxable amount: ");// ask the user to input the taxable income
	
	scanf_s("%lf", &income);// read the input and store it in "income"


	if (income <= 750) { // test if income in range
		tax = income * .01;// calculate tax
	    printf("The tax amount is: $%.2lf\n", tax);// print tax
    }


	if (income > 750 && income <= 2250) {// test if income in range
		tax = 7.50 + ((income - 750) * .02);// calculate tax
		printf("The tax amount is: $%.2lf\n", tax);// ptint tax
	}

	if (income > 2250 && income <= 3750) {// test if income in range
		tax = 37.50 + ((income - 2250) * .03);// calculate tax
		printf("The tax amount is: $%.2lf\n", tax);// print tax
	}

	if (income > 3750 && income <= 5250) {// test if income in range
		tax = 82.50 + ((income - 3750) * .04);// calculate tax
		printf("The tax amount is: $%.2lf\n", tax);// print tax
	}

	if (income > 5250 && income <= 7000) {// test if income in range
		tax = 142.50 + ((income - 5250) * .05);// calculate tax
		printf("The tax amount is: $%.2lf\n", tax);// print tax
	}

	if (income > 7000) {// test if income in range
		tax = 230.00 + ((income - 7500) * .06);// calculate tax
		printf("The tax amount is: $%.2lf\n", tax);// print tax
	}


	printf("\n\nmbakarich1@mail.pima.edu\n");// print my e-mail in console


	// if input > 0, how do I input validate in C knowing it uses ascii values.
	// perhaps C has a function to test or check type like isint. didn't we learn whatis


		return 0;
}


//In one state, single residents are subject to the following income tax:
// 
//Income               Amount of Tax
// 
// Not over $750       1% of income// 
// $750 - $2.250       $7.50 plus 2 % of amount over $750
// $2.250 - $3,750     $37.50 plus 3 % of amount over $2, 250
// $3,750 - $5,250     $82.50 plus 4 % of amount over $3, 750
// $5,250 - $7,000     $142.50 plus 5 % of amount over $5, 250
// Over $7,000         $230.00 plus 6 % of amount over $7, 000
//
// 
// Write a program that asks the user to enter the amount of taxable income, then displays the 
// tax due.



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
