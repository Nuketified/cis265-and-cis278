// CIS265 - Mat Bakarich Assignment Week 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Mat Bakarich
// CIS265 Assignment Week 2
// - Exercise# 3 on page 50 (40 points)
// - read and store user input for ISBN
// - print each part of the ISBN with a label indicating what it is. ex. "GSI prefiix: "





#include <stdio.h>



int main(void){// main

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                      //
//  Books are identified by an International Standard Book Number(ISBN).ISBNs assigned                                                  //
//       after January 1, 2007 contain 13 digits, arranged in five groups, such as 978 - 0 - 393 - 97950 - 3.                           //
//        (Older ISBNs use 10 digits.) The first group(the GSI prefix) is currently either 978 or 979.                                  //
//        The group identifier specifies the language or country of origin(for example, 0 and 1 are                                     //
//        used in English - speaking countries).The publisher code identifies the publisher(393 is the                                  //
//        code for W.W.Norton).The item number is assigned by the publisher to identify a specific                                      //
//        book(97950 is the code for this book).An ISBN ends with a check digit that’s used to verify                                   //
//        the accuracy of the preceding digits.Write a program that breaks down an ISBN entered by                                      //
//        the user :                                                                                                                    //
//                                                                                                                                      //
//    Enter ISBN : 978 - 0 - 393 - 97950 - 3                                                                                            //
//        GSI prefix : 978                                                                                                              //
//        Group identifier : 0                                                                                                          //
//        Publi sher code : 393                                                                                                         //
//        Item number : 97950                                                                                                           //
//        Check digit : 3 1 1                                                                                                           //
//                                                                                                                                      //
//        Note : The number of digits in each group may vary : you can't assume that groups have the                                    //
//        lengths shown in this example.Test your program with actual ISBN values(usually found                                         //
//            on the back cover of a book and on the copyright page)                                                                    //
//                                                                                                                                      //        
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



    int gsi_prefix = 0, group_identifier = 0, publisher_code = 0, item_number = 0, check_digit = 0;// variables to store ISBN pieces

    printf("Enter ISBN : ");// prompt user for ISBN

    scanf_s("%d-%d-%d-%d-%d", &gsi_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);//read the input and store in the variables
    
    
    printf("GSI prefix: %d\n", gsi_prefix);// print the GSI prefix
    printf("Group identifier: %d\n", group_identifier);// print the Group Identifier
    printf("Publisher code: %d\n", publisher_code);// print the Publisher Date
    printf("Item number: %d\n", item_number);// print the Item Number
    printf("Check digit: %d\n", check_digit);// print he Check Digit




    return 0;// end program
}
