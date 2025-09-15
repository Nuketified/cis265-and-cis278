// CIS278 - Mat Bakarich Cat Class.cpp 
// 9/13/2025
// -test the functionalities of the cat class
// -create some cat objects
// -print some attributes of the objects
// -change some attributes of the objects
// -test the PrintCat() method
// 


#include <iostream>
#include <string>// string

#include "Animal.h"// animal class
#include "Cat.h"// cat clas



int main()//main
{



    Cat cat1("Samsonite");// create a cat named Samsonite

    cout << "\nNew cat created: " << cat1.GetName() << "\n\n";// print the name of the cat

    // change Samsonite's name to Sven
    cout << "Changing " << cat1.GetName() << "'s name.\n\n";
    cat1.SetName("Sven");
    cout << "This cat's new name is: " << cat1.GetName() << ".\n\n";// print the new name

    cout << cat1.GetName() << "'s Body Structure is: " << cat1.GetBodyStructure() << ".\n\n";//print body structure of cat

    cout << cat1.GetName() << " says: '" << cat1.GetGreeting() << "'.\n\n";// display cat greeting

    cout << "Changing " << cat1.GetName() << "'s name back.\n\n";

    cat1.SetName("Samsonite");// change name of cat back to original

    cout << cat1.GetName() << " Has decided to start a new life as a fish. The first step is breathing underwater.\n\n";

    cout << "Instead of " << cat1.GetRespiration();// 
     
    cat1.SetRespirationGills();// change lungs to gills

    cout << " " << cat1.GetName() << " now has " << cat1.GetRespiration() << ".\n" << endl;// show off the gills


    ///////////////////////////////////////////////////////////////////////////////////////

    Cat cat2("Heathcliff", "Tabby");// instantize another class object, cat2
   
    cat2.PrintCat();// test PrintCat method
    cout << endl;

    cat2.SetPattern("Calico");// change the cat's pattern
    cat2.SetName("Callie");// change the cat's name 
    cat2.SetTitle("Princess");// give the cat an appropriate title

    cat2.PrintCat();// use PrintCat to confirm the changes made to cat2
    cout << endl;




}