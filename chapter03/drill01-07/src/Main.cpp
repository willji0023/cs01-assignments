// Letter
#include <iostream>
#include <string>

int main(){

	// user input
	std::string username;
	std::cout << "ENTER NAME: ";
	std::cin >> username;
	std::string friendname;
	std::cout << "\nENTER FRIEND'S NAME: ";
	std::cin >> friendname;
	char friendsex;
	std::cout << "\nENTER 'm' IF FRIEND IS MALE, 'f' IF FRIEND IS FEMALE: ";
	std::cin >> friendsex;
	int age = 0;
	while(1){ // loops until proper age
		std::cout << "\nENTER YOUR AGE: ";
		std::cin >> age;
		if (age > 5 && age < 110){
			break;
		}
		std::cout << "\nERROR: AGE NOT POSSIBLE";
	}

	// letter output
	std::cout << "Dear " << username << ", " << std::endl;
	std::cout << "\tHow are you? I am a-ok. I miss you... jk. ";
	std::cout << "Have you seen " << friendname << " lately? ";
	if (friendsex == 'f'){
		std::cout << "If you see " << friendname << ", tell her to call me. ";
	}
	else if (friendsex == 'm'){
		std::cout << "If you see " << friendname << ", tell him to call me. ";
	}
	std::cout << "I heard you had your birthday and is now " << age << " years old. ";
	if (age < 12){
		std::cout << "Next year you will be " << age+1 << ". ";
	}
	else if (age == 17){
		std::cout << " Next year you will able to vote.";
	}
	else if (age > 70){
		std::cout << " I hope you enjoy your retirement.";
	}
	std::cout << "\n\t\t\tSincerely, " << std::endl << std::endl << std::endl;
	std::cout << "\t\t\tBilly Chin";
}
