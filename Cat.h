// Mat Bakarich - CIS278 Cat Class
// 9/13/2025
// "Cat.h"
// Cat class inheriting from Animal.h
// Create cats with base class attributes, a name, or a name and pattern
// Includes a member function to print cat details, "PrintCat()



#pragma once
#include <iostream>
#include <string>
#include "Animal.h"// Animal class to inherit from



class Cat : public Animal// Cat Class 
{

private:
	
	
	int numberOfCats = 0;// initialize number of cats to 0 - Not currently in use
	std::string catPattern = "";// initalize cat pattern to empty string
	//find out why cow initializes at Eof


	enum Pattern { undefined_p, Calico, Tabby, Tortoise_Shell, Pointed };// enumerate some pattern types

	Pattern pattern{ undefined_p};

	std::string PatternToString() const {// function to turn types into strings
		switch (pattern) {
		case Calico: return "Calico";
		case Tabby: return "Tabby";
		case Tortoise_Shell: return "Tortoise_Shell";
		case Pointed: return "Pointed";
		default: return "undefined";
		}
	}


public:
	
	
	Cat() : Animal() {
			SetGreeting("Meow");
			SetLicense("License to Cat");
			SetTitle("");
			SetBodyStructureVerterbrate();
			SetHabitatTerestrial();
			SetDietOmnivore();
			SetLocomotionWalking();
			SetRespirationLungs();

			numberOfCats += 1;
		}


    Cat(const Cat& c) : Animal() {// copy construtor

		//this->weightLbs = c.weightLbs;
		SetName(c.GetName());
		SetLicense(c.GetLicense());

		SetTitle("");
		SetGreeting("Meow");
		SetBodyStructureVerterbrate();
		SetHabitatTerestrial();
		SetDietOmnivore();
		SetLocomotionWalking();
		SetRespirationLungs();

		numberOfCats += 1; 
		
		

		} 
	
	Cat(const std::string& name) : Animal() {// create cat with a name
		// use function calls to set attributes
		SetGreeting("Meow");
		SetLicense("Cat License");
		SetTitle("");
		SetBodyStructureVerterbrate();
		SetHabitatTerestrial();
		SetDietOmnivore();
		SetLocomotionWalking();
		SetRespirationLungs();

		SetName(name);

		numberOfCats += 1;  
	
	}

	Cat(const std::string& name, const std::string & catPattern) : Animal() {// create cat with a Pattern
		// use function calls to set attributes
		SetGreeting("Meow");
		SetLicense("Cat License");
		SetTitle("");
		SetBodyStructureVerterbrate();
		SetHabitatTerestrial();
		SetDietOmnivore();
		SetLocomotionWalking();
		SetRespirationLungs();

		SetName(name);
		SetPattern( catPattern );

		numberOfCats += 1;

	}

	//Pattern pattern{ unedefined_p };

	
	const std::string GetPattern() { return catPattern; }// getter for catPattern


	//void SetPattern(const std::string& p) { catPattern = p; }// set pattern


	void SetPattern(const std::string& catPattern) {// setter for catPattern
		this->catPattern = catPattern;
		
		// convert string to enum type and store in pattern
		if (catPattern == "Calico") {
			pattern = Calico;
		}
		else if (catPattern == "Tabby") {
			pattern = Tabby;
		}
		else if (catPattern == "Tortoise_Shell") {
			pattern = Tortoise_Shell;
		}
		else if (catPattern == "Pointed") {
			pattern = Pointed;
		}
		else {
			pattern = undefined_p;
		}
	}



	void PrintCat() const {// function to print the cat's information
		std::cout << "\n" << GetTitle()  << " " << GetName() << "'s Information: \n\n";
		std::cout << "Cat Name: " << GetName() << std::endl;
		std::cout << "License: " << GetLicense() << std::endl;
		std::cout << "Cat Pattern: " << PatternToString() << std::endl;
		std::cout << "Cat Title: " << GetTitle() << std::endl;
		std::cout << "Body Structure: " << GetBodyStructure() << std::endl;
		std::cout << "Cat Habitat: " << GetHabitat() << std::endl;
		std::cout << "The cat says: " << GetGreeting() << std::endl;
		std::cout << "The cat moves by " << GetLocomotion() << std::endl;

	}
	
	
	

};