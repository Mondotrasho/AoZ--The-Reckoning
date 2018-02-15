#include <iostream>
using namespace std;

void main()
{

	//cout << "hello world!";

	int height = 0;
	char firstLetterOfName = 0;
	int avatarHP = 0;
	bool Succeed = 0;

	system("color B1"); // make terminal green cause y not
	// maybe use this and red to make the player "feel" getting hit ie flash red


	cout << "Welcome to AoZ The Reckoning!" << endl;
	cout << "The Adventures of Zim : The Reckoning Tells the tale" << endl;
	cout << "of our protagonist as he battles beast foul" << endl << endl;
	cout << "-------------------------------------------------------" << endl << endl;
	cout << "First, some questions..." << endl;

	jmp1:cout << "How Heavy are you in Pounds" << endl;

	cin >> height;
	
	if (cin.fail()) { 
		cout << "You are hit from behind you by cinders Fireball try again" << endl; 
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());
		goto jmp1; // Love this command http://www.c4learn.com/cplusplus/c-goto-statements/
	}
	else if (height == int(720)) {
		cout << "I see you know your character sheet well +1 inspiration." << endl;
	}
	else {
		cout << "You entered " << height << endl;
	}
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());

					jmp2:cout << "What is the first letter of your name? " <<  endl;

					cin >> firstLetterOfName;

			if (cin.fail() || !isalpha(firstLetterOfName)) { cout << "You have failed the second challenge and are noticed and sniped by spotted by his unatural Perception" << endl; 
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
			goto jmp2;
			}
			else { cout << "You entered " << firstLetterOfName << endl; }
			
		cin.clear();
		cin.ignore(cin.rdbuf()->in_avail());


			if (firstLetterOfName != 0) { avatarHP = (float)height / (firstLetterOfName * 0.02f); }
			else { avatarHP = 0; }
					
				cout << endl << "Using a complex deterministic algorithm, it has been calculated that you have " << avatarHP << " hitpoint(s)." << endl;

	

	cout << endl << "Press 'Enter' to exit the program." << endl;
	cin.get();
	
	return;
}