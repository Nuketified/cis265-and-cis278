// CIS265  -  Mat Bakarich Assignment 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main(void)
{
	int number = 0; // variable to store base 10 number to be converted to octal
	int octal[5] = { 0 };// array to store remainders for octal conversion
	int increment = 0;// variable to increment up or down while iterating through for loops

	printf("Enter a number between 0 and 32,767: ");// prompt user for input
	
	scanf_s("%d", & number);// read and store user input

   
	if (number <= 32767 && number >= 0) {// validate the input
	
		for (increment = 4; increment >= 0; increment-=1) {// set increment = 4, loop until increment = 0, increment by -1 each iteration
			octal[increment] = number % 8;// set the value at the index to the octal digit 
			number /= 8;// divide number by 8 for next iteration, discard remainder
		}

		printf("In octal, your number is: ");// print the stuff before the octal

		for (increment = 0; increment < 5; increment+=1) {// set increment to 0, loop while it is less than 5, increment +1 each iteration
			printf("%d", octal[increment]);// print the octal digit from the specified index
		}


	}
	
	
	else {
		printf("Invalid entry. Number must be a whole number between 0 and 32.767.");// print upon failed input validation
	
	}
	
	
	printf("\n");// print an empty line for formatting
	

	printf("\n\nmbakarich1@mail.pima.edu\n");// print my e-mail in console
	

	
	
	
	return 0;// end main
}

// validation should be a loop!