#include "stdafx.h"
#include "Dog.h"






void Dog::keepBarking()
{
	while (d_isAlive) {
		std::cout << "\nMy name is " << d_name << ", my age is " << d_age << "\n";
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	std::cout << "DEBUG: from keepBarking(): dog is dead, stop barking.\n";
}



void Dog::startBarking()
{
	std::thread barkingThread(&Dog::keepBarking, this);

	barkingThread.detach();
}


void Dog::keepChangingAge()
{
	while (true) {
		++d_age;
		
		if (d_age >= 20) {
			d_isAlive = false;

			std::cout << "DEBUG: from keepChangingAge(): dog is dead, stop againg.\n";
			return;
		}

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}



void Dog::startAging()
{
	std::thread agingThread(&Dog::keepChangingAge, this);

	agingThread.detach();
}