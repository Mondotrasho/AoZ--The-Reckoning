#include <iostream>

void main() 
{
	
	//std::cout << "hello world!";
			int height = 0;
		char firstLetterOfName = 0;
		int avatarHP = 0;

		system("color B1"); // make terminal green cause y not
		// maybe use this and red to make the player "feel" getting hit ie flash red


					std::cout << "Welcome to AoZ The Reckoning!" << std::endl;
					std::cout << "The Adventures of Zim : The Reckoning Tells the tale"<< std::endl;
					std::cout << "of our protagonist as he battles beast foul" << std::endl << std::endl;
					std::cout << "-------------------------------------------------------" << std::endl << std::endl;
					std::cout << "First, some questions..." << std::endl;					
					std::cout << "How Heavy are you in Pounds" << std::endl;

					std::cin >> height;

			if (std::cin.fail()) { std::cout << "You have failed the first challenge and are eaten by a grue." << std::endl; }
			else if (height == int(720)) {std::cout << "I see you know your character sheet well +1 inspiration." << std::endl; }
			else { std::cout << "You entered " << height << std::endl; }
			
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());

					std::cout << "What is the first letter of your name? " << std::endl;

					std::cin >> firstLetterOfName;

			if (std::cin.fail() || !isalpha(firstLetterOfName)) { std::cout << "You have failed the second challenge and are eaten by a grue." << std::endl; }
			else { std::cout << "You entered " << firstLetterOfName << std::endl; }
			
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());

			if (firstLetterOfName != 0) { avatarHP = (float)height / (firstLetterOfName * 0.02f); }
			else { avatarHP = 0; }
									std::cout << std::endl << "Using a complex deterministic algorithm, it has been calculated that you have " << avatarHP << " hitpoint(s)." << std::endl;
		std::cout << std::endl << "Press 'Enter' to exit the program." << std::endl;
	std::cin.get();
	
	return;
}