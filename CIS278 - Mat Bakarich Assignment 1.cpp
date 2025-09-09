////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// CIS278 - Mat Bakarich Assignment 1.cpp                                                                                     //
// 8/25/25                                                                                                                    //
//                                                                                                                            //
//                                                                                                                            //
// 2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum,   //
// average, product, smallest and largest of these numbers.                                                                   //
//     - get input for three different integers and store them in variables                                                   //
//     - perform calculations for the sum, product, smallest, and largest numbers                                             //
//           print those values.                                                                                              //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include <iomanip>// Required for std::setw (2.29)

using namespace std;// enables program to perform input and output

const float BMI_MULTIPLYER = 703;// constant for BMI calculation
const float UNDERWEIGHT_THRESHOLD = 18.5;// underweight constant for comparison statements
const float NORMAL_THRESHOLD = 25;// normal weight constant for comparison statements
const float OVERWEIGHT_THRESHOLD = 30;// overweight constant for comparison statements


int main()
{
    int number_1{ 0 };// first integer to compare (initialized to 0)
    int number_2{ 0 };// second integer to compare (initialized to 0)
    int number_3{ 0 };// third integer to compare (initialized to 0) 


    cout << "Enter three integers to compare: ";// prompt user for data
    cin >> number_1 >> number_2 >> number_3;// read three integers from user

    int sum = (number_1 + number_2 + number_3);// calculate and store the sum
    cout << "Sum is " << sum << endl;// display sum; end line

    cout << "Average is " << (sum / 3) + (sum % 3) << endl;// calculate and display the average

    cout << "Product is " << (number_1 * number_2 * number_3) << endl;// calculate and display the product; end line

    int smallest = number_1;// assign number 1 to smallest
    if (number_2 < smallest) { smallest = number_2; }// compare number 2 to smallest, update if smaller
    if (number_3 < smallest) { smallest = number_3; }// compare number 3 to smallest, update if smaller

    cout << "Smallest is " << smallest << endl;// display the smallest value; end line

    int largest = number_1;// assign number 1 to largest
    if (number_2 > largest) { largest = number_2; }// compare number 2 to largest and update
    if (number_3 > largest) { largest = number_3; }// compare number 3 to largest and update

    cout << "Largest is " << largest << endl;// display the largest value; end line 
    cout << endl;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                            //
// (Table)Using the techniques of this chapter, write a program that caluclates                                               //
// the squares and cubes of the integers from 0 10 10. Use tabs to print the following                                        //
// neatly formatted table of values: Exercise 2.29 on page 71                                                                 //
//     - for each integer 0 to 10, print the integer, the square and the cube                                                 //
//                                                                                                                            //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    int number = 0;// initialize number to 0
    int square = 0;// initialize square to 0
    int cube = 0;// intialize cube to 0

    

    cout << left << setw(9) << "Integer" << left << setw(9) << "Square" << left << setw(6) << "Cube\n\n"; // print the header line



    while (number <= 10) {// loop to print the rows of numbers

        square = number * number;// calculate value of square
        cube = square * number;// calculate value of cube

        cout << left << setw(9) << number << left << setw(9) << square << left << setw(6) << cube << endl;// print the number, square, and cube
        cout << endl;// print a blank line
        number += 1;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //                                                                                                                              //
    // Create a BMI calculator application that read the user's weight in pounds and height in inches                               //                     
    // (or, if you prefer, the user's weight in kilograms and height in meters), then calculate and displays                        //
    // the user's body mass index. Also, the application should display the following information the                               //
    // Department of Health and Human Services / National Institutes of Health so the user can evaluate his/ her BMI: Exercise 2.30 //
    //                                                                                                                              //
    //                                                                                                                              //
    //    BMI = weight in lbs x 703 / (height in inches x height in inches)                                                         //
    //                                                                                                                              //
    //    BMI VALUES                                                                                                                //
    //                                                                                                                              //
    //    Underweight : less than 18.5                                                                                              //
    //                                                                                                                              //
    //    Normal : between 18.5 and 24.9                                                                                            //
    //                                                                                                                              //
    //    Overweight : between 25 and 29.9                                                                                          //
    //                                                                                                                              //
    //    Obese : 30 or greater                                                                                                     //
    //                                                                                                                              //
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    float height = 0;// intalize height
    float weight = 0;// initialize weight

    float BMI = 0;// intalaize BMI

    cout << "\n\n\nEnter your height in inches ";//ask the user for their height
    cin >> height;// read and store that value in height

    cout << "Enter your weight in lbs ";// ask the user for their weight
    cin >> weight;// read and store that value in weight

    BMI = ((weight * BMI_MULTIPLYER) / (height * height));// calculate the user's BMI


    cout << fixed << setprecision(2);// set the output to 2 decimal places

    cout << "\nYour BMI is " << BMI << "\n\n\n";// Display the user's BMI

    cout << "BMI VALUES:\n\n" << "Underweight : less than 18.5\n\n" << "Normal : between 18.5 and 24.9\n\n" << "Overweight : between 25 and 29.9\n\n" << "Obese : 30 or greater\n\n\n";// Print BMI VALUES



    /////////////////////////////////////////////////////////////////
    // compare BMI to chart values and print the appropriate result//
    /////////////////////////////////////////////////////////////////

    if (BMI < UNDERWEIGHT_THRESHOLD) {
        cout << "According to your BMI you are UNDERWEIGHT.\n";
    }

    else if (BMI >= UNDERWEIGHT_THRESHOLD && BMI < NORMAL_THRESHOLD) {
        cout << "According to your BMI you are NORMAL.\n";
    }

    else if (BMI >= NORMAL_THRESHOLD && BMI < OVERWEIGHT_THRESHOLD) {
        cout << "According to your BMI you are OVERWEIGHT.\n";
    }

    else {
        cout << "According to your BMI you are OBESE.\n";
    }




    cout << "\nmbakarich1@mail.pima.edu\n" << endl;// print my e-mail address for the screenshot



}// end main