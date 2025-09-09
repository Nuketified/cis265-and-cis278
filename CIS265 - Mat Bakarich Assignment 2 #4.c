// CIS265 - Mat Bakarich Assignment 2 #4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Mat Bakarich
// CIS265 Assignment Week 2
// - Exercise# 4 on page 157 (60 points)
// - get an input from the user (assumed to be all capital letters)
// - read the character, check its value, replace it with the appropriate matching numerical character
// - this will take a word or phrase and convert it back into the associated phone number and display that to the user


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                       //
//    4. Write a program that translates an alphabetic phone number into numeric form :                                                  //
//    Enter phone number : CALLATT                                                                                                       //
//        2255288                                                                                                                        //
//       (In case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,                                     //
//        4 = GHI. 5 = JKL. 6 = MNO, 7 = PRS, 8 = TUV. 9 = WXY.) If the original phone number contains                                   //
//        nonalphabetic characters(digits or punctuation, for example), leave them unchanged :                                           //
//    Enter phone number : 1 - 800 - COL - LECT                                                                                          //
//        1 - 800 - 265 - 5328                                                                                                           //
//                                                                                                                                       //
// You may assume that any letters entered by the user are upper case                                                                    //
//                                                                                                                                       //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include <stdio.h>

int main(void) {// main
    
    char ch = 'a';// variable to store characters, intialized to 'a'

    printf("Enter phone number: ");// ask the user for the phone number

    while ((ch = getchar()) != '\n') {// loop over the input until newline char detected
        if (ch >= 'A' && ch <= 'C') {// check if letter is A, B, or C
            putchar('2');// if so, replace with "2"
        }
        else if (ch >= 'D' && ch <= 'F') {// check if the letter is D, E. or F
            putchar('3');// if so, replace with "3"
        }
        else if (ch >= 'G' && ch <= 'I') {// check if the letter is G. H, or I
            putchar('4');// if so, replace with "4"
        }
        else if (ch >= 'J' && ch <= 'L') {// check if the letter is J, I, or K
            putchar('5');// if so, replace with "5"
        }
        else if (ch >= 'M' && ch <= 'O') {// check if the letter is M, N, or O
            putchar('6');// if so, replace with "6"
        }
        else if (ch >= 'P' && ch <= 'S') {// check if the letter is, P, (Q), R. or S
            putchar('7');// if so, replace with "7"
        }
        else if (ch >= 'T' && ch <= 'V') {// check if the letter is T, U, or V
            putchar('8');// if so, replace with "8"
        }
        else if (ch >= 'W' && ch <= 'Y') {// check if the letter is W, X, or Y
            putchar('9');// if so replace with "9"
        }
        else {
            // for non-letters, and "Z"
            putchar(ch);// include the character as-is
        }
    }

    printf("\n");// new line

    
    return 0;// end program
}

