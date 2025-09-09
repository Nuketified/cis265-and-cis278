// CIS278 - Mat Bakarich Assignment Module 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Mat Bakarich 
// CIS 278 Assignment 2
// 09/03/2025
// Exercise 3.10 on page 100  (50 points)
// Exercise 3.12 on page 101 (50 points)




#include <iostream>
#include <string>// include string class
#include "Invoice.h"// include Account class
#include "Date.h"// include Date class 

using namespace std;// enables program to perform input and output



int main()
{

    /// Program to Test Account.h //////////////////////
        // Invoice(std::string partNum, std::string partDesc, int quantity, int price)

        // create some Invoice objects
    Invoice item_1("A123", "door", 4, 500);
    Invoice item_2("A345", "doorknob", 4, 4);
    Invoice item_3("B745", "deadbolt kit", 2, 45);

    // test getters and setters

    // print stuff from getters
    cout << "Invoice for item_1\n" << "Part Number : " << item_1.getPartNumber() << "\nDescription : " << item_1.getPartDescription() << "\nQuantity : " << item_1.getQuantity() << "\nPrice : $" << item_1.getItemPrice() << "\nInvoice total : $" << item_1.getInvoiceAmount() << ".\n\n";

    // change stuff with setters
    item_1.setItemPrice(580);// change the price per part
    item_1.setQuantity(6);// change the quantity of parts
    item_1.setPartDescription("Fancy Door");// change the part description
    item_1.setPartNumber("A123F");// change the part number

    //repeat the print statement but print the new values
    cout << "New Invoice for item_1\n" << "Part Number : " << item_1.getPartNumber() << "\nDescription : " << item_1.getPartDescription() << "\nQuantity : " << item_1.getQuantity() << "\nPrice : $" << item_1.getItemPrice() << "\nInvoice total : $" << item_1.getInvoiceAmount() << ".\n\n";
   
    ////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////




    /// Program to test Date.h //////////////

    Date today(9, 3, 2025);// initialize date object

    cout << "Today's date is: ";
    today.displayDate();// display the date
   
    
    // test setters
    today.setMonth(1);// set the month
    today.setDay(28);// set the day
    today.setYear(1987);// set the year

    // test getters
    cout << "Travelling back in time to the date of your birth, " << today.getMonth() << "/" << today.getDay() << "/" << today.getYear() << "." << endl;


    //test displayDate (again)
    cout << "Sucessfully travelled to ";
    today.displayDate();// call to displayDate()
    
    ////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////


    //print my pima e-mail in console
    cout << "\n\nmbakarich1@mail.pima.edu\n";




} //end main

