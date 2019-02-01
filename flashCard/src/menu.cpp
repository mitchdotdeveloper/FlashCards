#include "../header/menu.h"

int menu(int m) {
	int choice;
	bool exit = false;
	std::string main = "\nMAIN MENU:\n_ _ _\n\n[ 0 ] EXIT\n[ 1 ] View your sets\n[ 2 ] Create a set\n: ";
	std::string sub1 = "";
	std::string create = "CREATE A SET:\n_ _ _\n\n";
	std::string error = "ERROR . . . Please only enter one of the choice displayed\n: ";

	switch(m) {
	case 0:
		while(!exit) {
			std::cout << main;
			std::cin >> choice;

			if(std::cin.fail() || choice < 0 || choice > 3) {
				std::cin.clear();
				std::cin.ignore(100, '\n');
				std::cout << error;
			} else
				exit = true;
		}
		break;
	}

//
//	std::cout << "\nEnter the ID # of the set you'd like to view\n: ";
//	std::cin >> choice;
//	std::cin.clear();
//	std::cin.ignore(100, '\n');
	return choice;
}
