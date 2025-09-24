// CIS278 - Mat Bakarich Exercise 6.57.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>// random numbers
#include <ctime>// time for random seeding
using namespace std;//shorten to cin and cout

int number_1 = 0;// variable to store first number to multiply
int number_2 = 0;// variable to store second number to multiply 
int product = 0;// variable to store the product of the two numbers
int guess = 0;// variable to store user guess

void question() {// define question function
    
    srand(time(0));// seed random with current time

    int number_1 = (rand() % 9) + 1;// generate random integer 1-9 for first number to multiply
    int number_2 = (rand() % 9) + 1;// generate random integer 1-9 for second number to multiply
    product = number_1 * number_2;// calculate the product

    
    cout << "What is " << number_1 << " times " << number_2 << "? (-1 to quit.)";// ask the question
 


    do {// do while loop
        cin >> guess;// store user input in guess

        if (guess == -1) {// break and quit if sentinel entered
            cout << "Thanks for playing!";// print exit message
            break;
        }
        else if (guess == product) {// if user guesses correctly
            cout << "Very good!\n";// print a positive message
        }
        else if (guess != product) {// if user guesses incorrectly
            cout << "No please try again.";// print a message saying try again
        } 
        

    } while (guess != product);//condition for do while

}// end do while

int main()// main
{
    
    do {// do while
        question();// call the question function

    } while (guess != -1);// while sentinel has not been entered

    cout << "\n\nmbakarich1@mail.pima.edu\n\n";// print my pima e-mail
}
