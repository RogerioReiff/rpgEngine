#include <iostream>
#include "allClasses.h"


int main() 
{
	Warrior warr1;
	Rogue   rogu1;
	Cleric  cler1;
	Wizard  wiza1;
	
	std::cout << "Warrior\n" << 
		"-MaxHP " << warr1.getMaxHP() << "\n" 
		<< "Strenght:" << warr1.getStrength() << "\n"
		<< "Intellect:" << warr1.getIntellect() << "\n";

	std::cout << "Rogue\n" << 
		"-MaxHP " << rogu1.getMaxHP() << "\n" 
		<< "Strenght:" << rogu1.getStrength() << "\n"
		<< "Intellect:" << rogu1.getIntellect() << "\n";

	std::cout << "Cleric\n" <<
		"-MaxHP " << cler1.getMaxHP() << "\n"
		<< "Strenght:" << cler1.getStrength() << "\n"
		<< "Intellect:" << cler1.getIntellect() << "\n";

	std::cout << "Wizard\n" <<
		"-MaxHP " << wiza1.getMaxHP() << "\n"
		<< "Strenght:" << wiza1.getStrength() << "\n"
		<< "Intellect:" << wiza1.getIntellect() << "\n";


	return 0;

}