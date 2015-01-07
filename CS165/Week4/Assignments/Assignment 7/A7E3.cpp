/**********
** Program: A7E3.cpp
** Author: Aryan Aziz
** Description: Takes grade inputs and outputs the number of each grade. 
** Input: grade(int)
** Output: The number of each grade
**********/

#include <iostream>

int grade;
char again;

void addGrade(void) {
	int *gradesArray;
	gradesArray = new int[6];

	do { //The grade loop
		std::cout << "Please enter a grade: ";
		std::cin >> grade;
		while(std::cin.fail()){ //If they didn't enter a number
			std::cout << "That is not a valid grade. Please re-enter a grade: ";
			std::cin.clear();
			std::cin.ignore(80, '\n');
			std::cin >> grade;
		}

		gradesArray[grade] = gradesArray[grade] + 1; //Add to the array

		std::cout << "Enter another grade? (y/n) ";
		std::cin >> again;
	} while (again == 'y' || again == 'Y');

	std::cout << gradesArray[0] << " grade(s) of 0" << std::endl;
	std::cout << gradesArray[1] << " grade(s) of 1" << std::endl;
	std::cout << gradesArray[2] << " grade(s) of 2" << std::endl;
	std::cout << gradesArray[3] << " grade(s) of 3" << std::endl;
	std::cout << gradesArray[4] << " grade(s) of 4" << std::endl;
	std::cout << gradesArray[5] << " grade(s) of 5" << std::endl;
}

int main() {

	addGrade();

	return 0;
}