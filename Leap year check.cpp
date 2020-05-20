#include <iostream>

int main() {
	int year;
	//Input year
	std::cout << "What year is it?" << std::endl;
	std::cin >> year;

	//Check if year is 4 digit number
	if (999 < year && year < 10000) {

		//if divisible by 4 carry on check
		if (year % 4 == 0) {

			//check if can be div by 100 and not 400
			if ((year % 100 == 0) && (year % 400 != 0)) {
				std::cout << "This is not a leap year." << std::endl;
			}
			else if (year % 400 == 0) {
				std::cout << "This is a leap year!" << std::endl;
			}
			else {
				std::cout << "This is a leap year!" << std::endl;
			}

		}
		else {
			std::cout << "This is not a leap year." << std::endl;
		}



	}
	else {
		std::cout << "Please enter a 4 digit year." << std::endl;
	}




}