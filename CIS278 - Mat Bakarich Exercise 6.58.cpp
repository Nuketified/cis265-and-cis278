// CIS278 - Mat Bakarich Exercise 6.58.cpp
// 09/23/2025
// -obtain two random integers 1-9
// -ask the user for the product of the integers
// -print 1 of 4 random messages according to whether the user answers correctly
// -keep asking the user more multiplication questions until the sentinel is entered

#include <iostream>
#include <cstdlib>// random numbers
#include <ctime>// time for random seeding
using namespace std;//shorten to cin and cout

int number_1 = 0;// variable to store first number to multiply
int number_2 = 0;// variable to store second number to multiply 
int product = 0;// variable to store the product of the two numbers
int guess = 0;// variable to store user guess
int random1to4 = 0;


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
            int random1to4 = (rand() % 4) + 1;// generate a random int 1-4

            switch (random1to4) {// switch case
            case 1:
                cout << "Very good!\n";// print a positive message
                break;
            case 2:
                cout << "Excellent!\n";// print a positive message
                break;
            case 3:
                cout << "Nice Work!\n";// print a positive message
                break;
            case 4:
                cout << "Keep up the good work!\n";// print a positive message
                break;
            }// end switch
            
            
        }
        else if (guess != product) {// if user guesses incorrectly
            int random1to4 = (rand() % 4) + 1;// generate a random number 1-4

            switch (random1to4) {// switch case
            case 1:
                cout << "No. please try again.\n";// print a message saying try again
                break;
            case 2:
                cout << "Wrong. Try once more.\n";// print a message saying try again
                break;
            case 3:
                cout << "Don't give up!\n";// print a message saying try again
                break;
            case 4:
                cout << "No. Keep trying.\n";// print a message saying try again
                break;
            }// end switch
            
            
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
